#include<stdio.h>
int main()
{
int n;
printf(" Enter a number of element:");
scanf("%d",&n);
printf(" Enter a element:\n");
int a[n],i,j,temp;
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
    if(a[i]>a[j])
    {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;


    }

  }

}
printf("Sorting:\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}

