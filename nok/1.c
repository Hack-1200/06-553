#include <stdio.h>	
long int nok(int,int);	
long int nod(int,int,int);
int main()
{
	long int a,b,c,d;
    printf("Enter first number: ");
    scanf("%ld",&a);
    printf("Enter second number: ");
    scanf("%ld",&b);
    if(a<0||b<0||a==b) return 0;
    printf("NOK is %ld\n",c=nok(a,b));
    printf("NOD is %ld\n",nod(a,b,c));
    
	return 0;
}
long int nok(int a,int b)
{
	long int c=0;
	if(a>b){
    int i=1,c=a;
    while(c%b!=0)c+=a;
    	return c;
    }
    else if(b>a){
     int i=1,c=b;
    while(c%a!=0)c+=b;
    	return c;
    }
}
long int nod(int a,int b,int c)
{ 
		return a*b/c;
}
