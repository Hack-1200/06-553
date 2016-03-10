#include <stdio.h>
#include <stdlib.h>
int cicl(char*);
char* sum(char*,char*);
int main()
{
	char *str1,*str2;
    str1=(char*)malloc(sizeof(char));
    str2=(char*)malloc(sizeof(char));
    
    printf("Enter first number: ");
    cicl(str1);
    printf("\nEnter second number: ");
    cicl(str2);
    printf("\n%s",str1);

    free(str1);
    free(str2);
	return 0;
}

int cicl(char *num)
{
	int c=getchar();
    int len=1;
    while(c!=10)
    {
    	num=(char*)realloc(num,(len+1)*sizeof(char));
    	num[len-1]=c;
    	len++;
    	c=getchar();
    }
    num[len]='\0';
    return 0;
}
char* sum(char *num1,char *num2)
{
	char *ans;
	int len=1,a=0,b=0;
	int n1=sizeof num1/sizeof num1[0];
	int n2=sizeof num2/sizeof num2[0];
	ans=(char*)malloc(sizeof(char));
	a=n1-1;
	b=n2-1;
	while()
}