#include <stdio.h>

int main() 
{
int a = 3,b = 5,c = 22,d = 7,e = 13;
float w = (a + b + c + d + e)/5.0; 
	printf("%f\n",w);
}

void Array_sort(int *array, int n)
{
int i=0, j=0, temp=0;
	for (i=0; i<n; i++)
	{
		 for(j=0; j<n-1; j++)
		 {	
			if(array[j]>array[j+1])
			{
			temp        =array[j];
			array[j]    =array[j+1];
			array[j+1]  =temp; }
}
}
for(i=0; i<n; i++)
{	printf("\narray_1[%d] : %d",i,array[i]);
}}
float Find_median(int array[], int n)
{
	float median=0;
	if (n%2 == 0)
		median = 
