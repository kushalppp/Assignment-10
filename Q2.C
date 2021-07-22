#include<stdio.h>
#include<stdlib.h>

main()
{
FILE *fp ,*fc;
char ch;
fp=fopen("gu.txt","r");
fc=fopen("copy.txt","w");
if(fp==NULL )
{
printf("can not open");
exit(1);
}

while(!feof(fp))
{
ch=fgetc(fp);
fputc(ch,fc);
}
fclose(fp);
fclose(fc);

}



