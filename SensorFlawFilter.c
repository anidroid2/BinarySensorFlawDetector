#include <stdio.h>

#define set(a,b) a|=(1<<b)
#define clr(a,b) a&=(~(1<<b))
#define chk(a,b) a&(1<<b)

#define bool int 
#define true 1
#define false 0
int main(int argc, char **argv)
{
	if(argc!=2)  //Runprogram only when one argument is passed.
	{
		printf("Incorrect format\n Please enter only one argument i.e. Input\n");
		return 0;	
	}
	unsigned char input=atoi(argv[1]),output;
	//Define input and output variables.
	//atoi() converts string to int. 
	printf("Input is %d \n",input);
	
	int i,flag=0,temp=0,max=0,total=0,max_temp;
	int big=0,big_temp=0;
	bool isFault=0;
	//Initilize 
	
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
	printf("RESULT:\nmax   = %d \nbig   = %d \ntotal =%d\n",max,big,total);
	if(isFault==true)
	{
		printf("Anomality Detected\n");
	}
	else
	{
		printf("Anomaly Not Detected\n");
		return 0;
	}	
	//Filtering Start
	for(i=0;i<big;i++)
	{
		set(output,max-i);
	}
	//Filtering End
	printf("FILTERED OUTPUT  \t  %d \n\n",output);
	getchar();
	return 0;
}
