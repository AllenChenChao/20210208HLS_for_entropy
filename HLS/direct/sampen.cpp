#include "sampen.hpp"
#include <string.h>
#include <math.h>
#define Length  100

void sampen(float *in, int len, int& SampEn)
// void sampen(float *in, int len, float& SampEn)
{
#pragma HLS INTERFACE s_axilite port=return bundle=sqrt
#pragma HLS INTERFACE s_axilite port=len bundle=sqrt
#pragma HLS INTERFACE s_axilite port=SampEn bundle=sqrt

#pragma HLS INTERFACE m_axi depth=100 port=in offset=slave bundle=input
#pragma HLS INTERFACE s_axilite port=in

len = 100;
        float buff[Length];
        // float r = 20;
        float r = 0.15;
        
        
        int m = 2;
        //int Samp;

        memcpy(buff, (const float*) in, len * sizeof(float));
        //
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < len - 1; i ++){
        	for(int j = 0; j < len - 1; j ++){
        		if(abs(buff[i] - buff[j]) <= r && abs(buff[i+1] - buff[j+1]) <= r){
        			count1 = count1 + 1;
        		        if (i+2 < len && j+2 < len && abs(buff[i+2] - buff[j+2]) <= r) {
                                        count2 = count2 + 1;
                                }
                        }
        	}
        }
        //
        count1 = count1 - len + m - 1;
        float B = (float)count1/((len-m+1)*(len-m));
        count2 = count2 - len + m;
        float A = (float)count2/((len-m)*(len-m-1));
        // if(A == 0){SampEn = 100;}
        // else {SampEn = log(B/A);}
        
        if(A == 0){SampEn = 100000;}
        else {SampEn = int(1000*log(B/A));}
               
}
