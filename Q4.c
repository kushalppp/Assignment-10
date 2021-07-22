#include<stdio.h>
#include<stdlib.h>

main()
{
int choice;
char str[10];
char str1[10];
FILE *fp,*fc;
printf("MENU\n");
printf("1. Set buffer\n");
printf("2. print buffer\n");
printf("3. exit\n");
printf("enter a choice\n");
scanf("%d",&choice);

switch (choice)
{
case 1:
{
printf("set buffer\n");
fp=fopen("mystr.txt","w");
scanf("%s",str);
fputs(str,fp);
fclose(fp);
break;
}

case 2:
printf("buffer is\n");
fc=fopen("mystr.txt","r");
fgets(str1,10,fc);
printf("%s",str1);
fclose(fc);
break;

case 3:
printf("exit");
exit(1);
break;


default:
   printf("wrong choice");

}
}

OUTPUT:-
MENU
1. Set buffer
2. print buffer
3. exit
enter a choice
1
set buffer
GURU

MENU
1. Set buffer
2. print buffer
3. exit
enter a choice
2
buffer is
GURU

MENU
1. Set buffer
2. print buffer
3. exit
enter a choice
3
exit
