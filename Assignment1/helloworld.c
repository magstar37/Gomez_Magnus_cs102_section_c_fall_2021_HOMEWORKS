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
int mode(int m[],int f) {
int maxValue = 0, maxCount = 0, z, y;
	for (z = 0; z < f; ++z) {
	 int count = 0;
			          
	  for (y = 0; y < f; ++y) {
		 if (m[y] == m[z])
	           ++count;
						         }
				        
	 if (count > maxCount) {
	        maxCount = count;
	        maxValue = m[z];
								        }
					   }

	         return maxValue;
}



int main() 
{
int a = 3,b = 5,c = 22,d = 7,e = 13;
float w = (a + b + c + d + e)/5.0; 
	printf("Mean = %f\n",w);

	   int r[] = {a,b,c,d,e};
	   int n = 5;
	   int sum,i;
		sort(r,n);
		 n = (n+1) / 2 - 1;      
	          printf("Median = %d\n ", r[n]);
		     return 0;
	   int f = 5;
	      int m[] = {a,b,c,d,e};
  	 printf("Mode = %d\n ", mode(m,f));    


		     
}
