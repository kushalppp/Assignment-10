#include<stdio.h>
#include<stdlib.h>

main()
{
int roll,marks;
char str[10];
char str1[10];
FILE *fp ,*fc;
fp=fopen("student.txt","wb");
if(fp==NULL)
{
printf("can not open");
exit(1);
}
printf("enter a student name:,roll & grade\n");
scanf("%s",str);
scanf("%d",&roll);
scanf("%d",&marks);
fprintf(fp,"%s\n",str);
fprintf(fp,"%d\n",roll);
fprintf(fp,"%d\n",marks);
fclose(fp);
fc=fopen("student.txt","rb");
if(fc==NULL)
{
printf("can not open");
exit(1);
}
printf("student info\n");
printf("Student name ,roll no and marks:-");
while(!feof(fc)){
fscanf(fc,"%s",str1);
printf("%s\n",str1);
}
fclose(fc);
}

OUTPUT:-
enter a student name:,roll & grade
guru
10
100
student info
Student name ,roll no and marks:-guru
10
100
100
