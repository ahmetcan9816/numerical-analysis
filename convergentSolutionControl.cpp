#include<stdio.h>
#include<math.h>

//Author: Ahmet CAN
//Lecture: Numerical Analysis
//I checked whether the convergent solutions of the given matrix can be solved by the Jacobi and Gauss Seidel iteration methods.
//The absolute sum of the values in the diagonal cells must be greater than the absolute sum of the values in the other cells.
int main(){
	
	int m,n,i,j;
	int DiagonalCells=0;
	int NormalCells=0;
	int A[m][n];
	
	printf("Enter the number of rows: ");
	scanf("%d",&m);
	printf("Enter the number of columns: ");
	scanf("%d",&n);
	
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("A[%d][%d]:",i,j);
			scanf("%d",&A[i][j]);
		}
	}	
	
	for (i = 0; i < m; ++i) {
        for (j = 0; j < n; j++)
        {
        	printf("%2d ", A[i][j]);
		}
        	
    	printf("\n");
    }   	

	for(i = 0; i < m; i++)
	{
		DiagonalCells += abs(A[i][i]);
		
		for(j = 0; j < n; j++)
		{
			if(j != i)
			{
				NormalCells+=abs(A[i][j]);
			}
		}
	}
	printf("Sum of Diagonal values= %d \nSum of Normal values= %d\n", DiagonalCells, NormalCells);
	
	if(DiagonalCells > NormalCells)
		printf("The problem has convergent solutions in the Jacobi and Gauss Iteration method. ");
	else
		printf("The problem has no convergent solutions in the Jacobi and Gauss Iteration method.");
	
}
