#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randForLetters(int r)
{
	    r=rand()%55+65;
		if(r>90&&r<97) r+=6;
		return r;
}		
int randForWord(int r)
{
	r=rand()%10+4;
	return r;
}
/*int searchWord(char d,char cd)
{
	cd = getc(ft);
	printf("%c",cd);
}*/
int main(void)
{
	FILE *fp,*ft;
	char c;
	char d;
	char cd;
	char fname[]="text.txt";
	int r=0;
	int sd=0;
	int sch=0;
	int l=0;
	int len=0;
	char *dr[10];
	srand(time(0));
	//printf("%d\n",rand());
	printf("Enter letter:");
	d=getchar();
	printf("Enter number of words:");
	while(!scanf("%d",&l)) printf("Максимум 999");
		//printf("%s",*dr);
	if((fp=fopen(fname,"w"))==NULL) return 1;

	
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<randForWord(r);j++) putc((c=randForLetters(r)),fp);
			putc(' ',fp);
	}
	fclose(fp);
	if((ft=fopen(fname,"r"))==NULL) return 1;
	//searchWord(d,cd);
	while((cd=getc(ft))!=EOF)
	{	
		if(sch>0&&cd==d)sd++;
		else sch=0;
		if(cd==' ') sch++; 
		printf("%c",cd);	
	}
	printf("\n%d\n",sd);
	fclose(ft);

	return 0;
}





















/*
    char *str;
    str=(char*)malloc(sizeof(char));
    int c=getchar();
    int len=1;
    while(c!=10)
    {
    	str=(char*)realloc(str,(len+1)*sizeof(char));
    	str[len-1]=c;
    	len++;
    	c=getchar();
    }
    str[len]='\0';
    printf("\n%s",str);
    free(str);*/