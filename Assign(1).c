#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int regd;
	char name[50], branch[50] ,hobbies[100];
	printf("Enter Your Name:");
	gets(name);
	printf("\nEnter Your branch:");
	gets(branch);
	printf("\nEnter Your hobbies:");
	gets(hobbies);
 printf("\nEnter Your Regd No(only last three digits):");
 scanf("%d",&regd);
 printf("\nName:%s", name);
 printf("\nBranch:%s", branch);
 printf("\nhobbies :%s", hobbies);
 printf("\nRegd. No:%d",regd);
 return 0;
}
