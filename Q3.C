#include<stdio.h>
#include<stdlib.h>

main()
{
FILE *fp ,*fc;
int n1 ,n2;
fp=fopen("gu.txt","r");
fc=fopen("copy.txt","r");

if(fp==NULL || fc==NULL)
{
printf("can not open");
exit(1);
}

fscanf(fp,"%d",&n1);
fscanf(fc,"%d",&n2);

printf("%d\n",n1);
printf("%d\n",n2);
if(n1==n2)
{
 printf("return 0");
}
else
 printf("return 1");

fclose(fp);
fclose(fc);

}

OUTPUT:-
12
13
return 1


