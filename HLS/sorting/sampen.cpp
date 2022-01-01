#include "sampen.hpp"
#include <string.h>
#include <math.h>
#include <stdio.h>
#define Length  100

void BubbleSortTest(float a[Length], int n, int position[Length])
{
    int i = 0;
    int j = 0;
    float tmp = 0;
    for (i = 0; i < n - 1; ++i)
    {
        for (j = 1; j < n - i; ++j)
        {
            if (a[j] < a[j-1])    /* exchange smaller one first */
            {
                tmp = a[j-1];
                a[j-1] = a[j];
                a[j] = tmp;
                /* record location */
                tmp = position[j-1];
                position[j-1] = position[j];
                position[j] = tmp;
            }
        }
    }
}


void sampen(float *in, int len, int& SampEn)
{
#pragma HLS INTERFACE s_axilite port=return bundle=sqrt
#pragma HLS INTERFACE s_axilite port=len bundle=sqrt
#pragma HLS INTERFACE s_axilite port=SampEn bundle=sqrt
#pragma HLS INTERFACE m_axi depth=100 port=in offset=slave bundle=input
#pragma HLS INTERFACE s_axilite port=in

len = 100;
        // float buff[9] = {90, 60, 50, 95, 85, 70, 80, 110, 70};
        float buff[Length];
        float a[Length];
        int b[Length];
        // float r = 21;
        float r = 0.15;
        
        int N = len;
        int m = 2;
        //int Samp;

        memcpy(buff, (const float*) in, len * sizeof(float));
     
        for (int i = 0; i < len; i++){
                b[i] = i;
                a[i] = buff[i];
        }
        BubbleSortTest(a, Length, b);


        //
        int count1 = 0;
        int count2 = 0;
        int j;
        float limitIvalue;
        float difference2;
        float difference3;
        loop1:for(int i = 0; i < len - 1; i ++){
                j = i+1;  
                loopsearch:while(j < len){
                        #pragma HLS loop_tripcount min=0 max=len-1
                        limitIvalue = a[i] + r;
                        if( limitIvalue >= a[j]){
                                difference2  = abs(buff[b[i]+1] - buff[b[j]+1]);
                                if( (b[i] < len -1)  && (b[j] < len - 1) && (difference2 <= r) ){
                                        count1 = count1 + 1;
                                        difference3 = abs(buff[b[i]+2] - buff[b[j]+2]);
                                        if ( b[i] < len - 2 && b[j] < len - 2 && difference3 <= r ){
                                                count2 = count2 + 1;
                                        }
                                }
                        }
                        else {j = len - 1;}
                        j = j+1;
                }
        }
        //

        // count1 = count1 - len + m - 1;
        float B = (float)count1/((N-m+1)*(N-m));
        // count2 = count2 - len + m;
        float A = (float)count2/((N-m)*(N-m-1));
        if(A == 0){SampEn = 100000;}
        else {SampEn = int(1000*log(B/A));}
        if (SampEn < 0){SampEn = 0;}
}
