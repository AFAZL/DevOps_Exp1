#include<stdio.h>
struct student{
int rollno;
char name[20];
float per;
};
int main()
{
struct student s[5];
int i,j,temp;
for(i=0;i<=5;i++)
{
printf("Enter details of %d students\n",i+1);
printf("Roll no.:-\n");
scanf("%d",&s[i].rollno);
printf("Name:-\n");
scanf("%s",&s[i].name);
printf("Percentage:-\n");
scanf("%f",&s[i].per);
}
int arr[5];
for(i=0;i<=5;i++)
{
arr[i]=s[i].rollno;
}
for(i=0;i<5;i++)
{
for (j=0;j<5;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(i=0;i<=5;i++)
{
printf("Enter details of %d students",i+1);
printf("Roll no.:-%d\n",&s[i].roll no);
printf("Name:-%s\n",&s[i].name);
printf("Percentage:-%f\n",&s[i].per);
}


