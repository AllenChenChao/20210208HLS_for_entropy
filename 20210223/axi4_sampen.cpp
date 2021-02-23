#include "axi4_sampen.hpp"
#include <string.h>
#include <math.h>

void axi4_sampen(float *in, float *out, int len, int& SampEn)
{
#pragma HLS INTERFACE s_axilite port=return bundle=sqrt
#pragma HLS INTERFACE s_axilite port=len bundle=sqrt
#pragma HLS INTERFACE s_axilite port=SampEn bundle=sqrt
#pragma HLS INTERFACE m_axi depth=50 port=out offset=slave bundle=output
#pragma HLS INTERFACE m_axi depth=50 port=in offset=slave bundle=input
#pragma HLS INTERFACE s_axilite port=in
#pragma HLS INTERFACE s_axilite port=out

        float buff[100];
        float r = 20;
        int D[100][100];
        int N = len;
        int m = 2;
        //int Samp;

        memcpy(buff, (const float*) in, len * sizeof(float));
        //
        for(int i = 0; i < len; i ++){
        	for(int j = 0; j < len; j ++){
        		if(abs(buff[i] - buff[j]) <= r){
        			D[i][j] = 1;
        		}
        	}
        }
        //
        int count1 = 0;
        for(int i = 0; i < len - m + 1; i ++){
        	for(int j = 0; j < len - m + 1; j ++){
        		count1 = count1 + (D[i][j] and D[i+1][j+1]);
        	}
        }
        count1 = count1 - len + m - 1;
        float B = (float)count1/((N-m+1)*(N-m));
        //
        int count2 = 0;
        for(int i = 0; i < len - m ; i ++){
        	for(int j = 0; j < len - m ; j ++){
        		count2 = count2 + (D[i][j] and D[i+1][j+1] and D[i+2][j+2]);
        	}
        }
        count2 = count2 - len + m;
        float A = (float)count2/((N-m)*(N-m-1));
        //保留，作为验证
        SampEn = int(1000*log(B/A));
        for(int i = 0; i < len; i++)
                buff[i] = D[0][i];

        memcpy(out, (const float*) buff, len * sizeof(float));

        //SampEn = Samp;
}
