#include <stdio.h>		
void main(void)
{
	int number,min=0,max=0;
	printf("Enter min number:");
    scanf("%d",&min);
    printf("Enter max number:");
    scanf("%d",&max);
    number=max;
    int primeNumbers[number];
    //printf("%d",sizeof primeNumbers/sizeof primeNumbers[0]);	
	primeNumbers[0]=2;
	number=0;
    for(int i=min;i<max;i+=2)
    {
    	int j=0,ok=1;
    	while(primeNumbers[j]*primeNumbers[j]<=i)
    	{
    		if(i%primeNumbers[j]==0)
    		{
    			ok=0;
    			break;
    		}
    		j++;
    	}
    	if(ok){
    		number++;
    		primeNumbers[number]=i;
    	}
    }
    //for(int i=0;i<sizeof primeNumbers/sizeof primeNumbers[0];i++) printf("\n%d\n",primeNumbers[i]);
	
	return;
}