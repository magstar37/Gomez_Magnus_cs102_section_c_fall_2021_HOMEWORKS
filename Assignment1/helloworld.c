#include <stdio.h>


void swap(int *p,int *q) {
	int t;
	t=*p;
	*p=*q;
	*q=t;
}

void sort(int r[],int n) {
	int i,j,temp;
	for(i = 0;i < n-1;i++) {
		for(j = 0;j < n-i-1;j++) {			             
			if(r[j] > r[j+1])
				swap(&r[j],&r[j+1]);
		}
	}
}
int mode(int m[],int length) {
	int maxValue = 0, maxCount = 0, i, j;
	for (i = 0; i < length; ++i) {
		int count = 0;

		for (j = 0; j < length; ++j) {
			if (m[j] == m[i])
				++count;
		}

		if (count > maxCount) {
			maxCount = count;
			maxValue = m[i];
		}
	}

	return maxValue;
}



int main() 
{
	int a = 3,b = 5,c = 22,d = 5,e = 13;
	float w = (a + b + c + d + e)/5.0; 
	printf("Mean = %f\n",w);

	int r[] = {a,b,c,d,e};
	int n = 5;
	int sum,i;
	sort(r,n);

	printf("Median = %d\n ", r[(n+1)/2 - 1]);
	printf("Mode = %d\n ", mode(r,n));    

	return 0;


}
