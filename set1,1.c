#include <stdio.h>
int main()
{
   int n,a[100000],i,j,temp=0,count=0;
   scanf("%d",&n);
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
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            printf("%d ",a[i]);
            a[i]='$';
            a[j]='$';
            count++;
        }
    }
}
if(count==0)
{
    printf("unique");
}
    return 0;
}
