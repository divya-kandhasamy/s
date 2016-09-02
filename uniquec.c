#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k=0;
int a[10],b[10];
printf("enter the limit");
scanf("%d",n);
printf("Enter the numbers");
for(i=0;i<n;i++)
scanf("%d",a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j] && a[i]!='\0')
{
b[k++]=a[i];a[j]='\0';
break;
}
}
}
for(i=0;i<k;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==b[j])m++;
}
if(m==0)printf("%d",a[i]);
}
getch();
}
