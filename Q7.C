#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
int i,k;
FILE *fp,*fc;
char str[1000],ch;
fp=fopen("removechar.txt","r");
if(fp==NULL)
{
printf("can not open");
exit(1);
}
fread(str,sizeof(char),10,fp);
fclose(fp);
printf("enter a character that you want to remove from the file:-");
scanf("%c",&ch);
fc=fopen("removechar.txt","w");
fclose(fc);
for(k=0;k<=10;k++)
{
printf("%c",str[k]);
}
for(i=10;i>=0;i--)
{
if(str[i]!=ch)
{
fc=fopen("removechar.txt","a");
fputc(str[i],fc);
}
}
fclose(fc);
}


OUTPUT:-
enter a character that you want to remove from the file:-g
kushalguru
IN FILE:-kushaluru 


