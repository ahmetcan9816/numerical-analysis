#include<stdio.h>

int main(){
	float X[200],Y[200];
	float L, SumPolinom, ip;
	int n, i, j;
	
	 printf("Enter number of value: ");
	 scanf("%d", &n);
	 printf("Enter value:\n");
	 for(i = 0; i < n; i++)
	 {
		  printf("X[%d] = ", i);
		  scanf("%f", &X[i]);
		  printf("Y[%d] = ", i);
		  scanf("%f", &Y[i]);
	 }
	 printf("Interpolation point: ");
	 scanf("%f", &ip);

	for(i = 0; i < n; i++)
	{
		L=1;
		
		for(j = 0; j < n; j++)
		{
			if(i != j)
			{
				L *= (ip - X[j]) / (X[i] - X[j]);	
			}
		}
		SumPolinom += L*Y[i];
	}
	
	printf("Interpolated at %f is %f",ip,SumPolinom);

}
