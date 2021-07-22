#include<stdio.h>
#include<stdlib.h>

main()
{
int  count=0,spc=0,tab=0;
FILE *fp;
char ch;
fp=fopen("NEW.txt","r");

if(fp==NULL)
{
printf(" can not open");
exit(1);
}
while(!feof(fp))
{
ch=fgetc(fp);
count++;
if(ch==' ')
{
spc++;
}
if(ch=='	')
{
tab++;
}
if(ch=='  		')
{
line++;
}
}
printf(" \nchar in a file is %d",count);
printf(" \nspace is %d",spc);
printf(" \ntab is %d",tab);
fclose(fp);
}

OUTPUT:-
char in a file is 17
space is 2
tab is 1

