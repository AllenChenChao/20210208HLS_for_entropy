#include "axi4_sampen.hpp"
#include<iostream>
int main()
{
	//float in[50];
	float out[50];
	int ct=0;
	int length=30;
	int samp;
	float in[9] = {90, 60, 100, 95, 85, 70, 80, 110, 70};
	/*
	for(int i=0;i<length;i++)
		in[i]=(float)(i*i);*/
	axi4_sampen(in,out,9,samp);
	for(int i=0;i<length;i++)
	{
		if(out[i]==(float)i)
			ct++;
	}
	std::cout<<samp<<std::endl;
	if(samp==223)
		std::cout<<"PASS"<<std::endl;
	else
		std::cout<<"FAIL"<<std::endl;
	return 0;
}
