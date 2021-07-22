#include<stdio.h>
#include<stdlib.h>

main()
{
int no;
int count=0;
FILE *fp;
char filename[100],c;
printf("enter a filename");
scanf("%s",filename);
fp=fopen(filename,"r");
if(fp==NULL)
{
printf(" can not open");
exit(1);
}
printf("enter no.that character should be print:-");
scanf("%d",&no);
c=fgetc(fp);
printf("%c",c);
while(!feof(fp))
{
c=fgetc(fp);
printf("%c",c);
count++;
if(count==no)
break;
}
fclose(fp);
}

OUTPUT:-
enter a filenamemy.txt
enter no.that character should be print:--10
guru ho hjlkji hghh

enter a filenamemy.txt
enter no.that character should be print:-5
guru h

