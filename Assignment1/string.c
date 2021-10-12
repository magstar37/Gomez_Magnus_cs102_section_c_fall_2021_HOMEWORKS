#include <stdio.h>
#include <string.h>
#define MAXLINE 1000
int main(void) {
	char line[MAXLINE];
	printf("Please enter your text:");
	fgets(line, sizeof(line), stdin);

	char line1[MAXLINE];
	printf("Please enter your text:");
	fgets(line1, sizeof(line1), stdin);
	
	
	char line2[MAXLINE];
	printf("Please enter your text:");
	fgets(line2, sizeof(line2), stdin);

 
		if (strcmp(line,line1)<0);{ /*checks if line is less that line1*/
			if(strcmp(line,line2)<0);{
				if(strcmp(line1,line2)<0);{
			 printf("%s\n",line);
			printf("%s\n",line1);
			printf("%s\n",line2);	}
				if else(strcmp(line1,line2)>0);{
					printf("%s\n",line);
					printf("%s\n",line2);
					printf("%s\n",line1);}
			}
			if else(strcmp(line,line2)>0);{
					printf("%s\n",line2);
					printf("%s\n",line);
					printf("%s\n",line1);
					};
					}
	
		if else(strcmp(line,line1)>0);{
			if(strcmp(line1,line2)<0);{
				if(strcmp(line,line2)<0);{
					printf("%s\n",line1);
					printf("%s\n",line);
					printf("%s\n",line2);
							}
				if (else(strcmp(line,line2)>0));{
					printf("%s\n",line1);
					printf("%s\n",line2);
					printf("%s\n",line);
					}
			else(strcmp(line1,line2)>0;{
					printf("%s\n",line2);
					printf("%s\n",line1);
					printf("%s\n",line);
				 
				 return 0;}};}


	/*printf("You typed %s\n", line);
	float f;
	scanf(line, "%f", &f);*/

