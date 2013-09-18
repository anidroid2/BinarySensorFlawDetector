
#include "stdio.h"

#define set(a,b) a|=(1<<b)
#define clr(a,b) a&=(~(1<<b))
#define chk(a,b) a&(1<<b)

int main()
{
	unsigned char input=0xDD,output=0;
	int i,flag=0,temp=0,max=0,total=0,max_temp;
	int big=0,big_temp=0;
	//bool isFault=0;
	int isFault=0;
	printf("Input was %d",input);	
	getchar();
	
	//Analyzing start
	for(i=0;i<8;i++)
	{
		temp=(chk(input,i))>>i;
		if(temp!=0)
		{
			total++;
			max_temp=i;
			big_temp++;
			if(big_temp>big)
			{
				big=big_temp;
				max=i;
			}
			
			
		}
		else
		{
		big_temp=0;
		max_temp=0;
		}
	}
	if(big<total)
	{
		isFault=1;
	}

	//Analyzing End
	printf("max is %d \n big is %d \n total is %d",max,big,total);
	getchar();

	//Filtering Start
	for(i=0;i<big;i++)
	{
		set(output,max-i);
	}
	//Filtering End
	printf("FILTERED OUTPUT  \t  %d \n",output);
	getchar();
	return 0;
}


