#include<stdio.h>
#include<math.h>

//Binary to Decimal FOR 32 BIT
//Iterative Solution
//1-Bit -> Sign Bit, 8-Bit ->Exponential, 23-Bit Fractional
//Formule: (-1)^s * 2^(c-127) * (1+f)

int main(){
	
	//Example for you: {0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //Decimal = 80
	int binaryNumber [32];
	int c=0;																												
	double f=1;
	double decimalNumber=1;
	int exponentialPart = 0;
	
	int j=-1; //for Fractional part
	
	for(int i=0; i<=31; i++)
	{
		printf("Enter %d. bit: ",i+1);
		scanf("%d",&binaryNumber[i]);
		
		
		if(i <= 8)
		{
			if(binaryNumber[i] == 1)
			c += pow(2,(8-i));
		}
		
		if(i >= 9)
		{
			if(binaryNumber[i] == 1)
			f += pow(2,j);		
			
			j--;
	   	}
	}
		
	
	c-=127; //From formule
	exponentialPart= pow(2,c);
	decimalNumber=exponentialPart*f;
	
		if(binaryNumber[0] == 1)
		decimalNumber*=-1;
		
	printf("Exponential Part = %f\n",exponentialPart);
	printf("Fractional Part = %f\n",f);
	printf("Decimal Number = %f\n",decimalNumber);
	

}
