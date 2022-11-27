#include<stdio.h>
#include<math.h>

//Author: Ahmet CAN
//Lecture: Numerical Analysis
//The secant method was introduced in response to the derivative cost of the Newton-Raphson method.

double function(double x){
	return pow(x,2)-4; //I choose this function
}

int main(){
	
	double arr[10];
	arr[0]=1;		//x0 = 1
	arr[1]=1.4;		//x1= 1.4
	
	
	for(int i=0; i <= 10; i++){
		
		if(arr[i] != arr[i+1]){ //It continue as long as no two consecutive roots are the same
		
			arr[i+2] = arr[i+1]-((function(arr[i+1])*(arr[i]-arr[i+1]))/(function(arr[i])-function(arr[i+1]))); //Secant Calculating
			
			printf("x%d result= %f \n",i,arr[i+2]);
		}
	}
}



