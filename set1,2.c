#include <stdio.h>
int main()
{
int n,a[100000],i,j,temp=0,c=0,l;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
l=a[0];
for(i=0;i<n;i++)
{
    if(l==a[i])
    {
        c++;
    }
}
if(c==n)
{
    printf("%d",l);
}
else
{
for(i=0;i<n;i++)
{
    
    printf("%d",a[i]);
}
}
    return 0;
}
