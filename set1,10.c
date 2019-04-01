#include <stdio.h>
int main()
{
   int n,m,a[100000],b[100000],i,j,count=0;
   scanf("%d%d",&n,&m);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<m;i++)
   {
       scanf("%d",&b[i]);
   }
   for(i=0;i<n;i++)
   {
    count=0;   
    for(j=0;j<m;j++)
      {
         if(a[i]==b[j])
         {
             count++;
         }
      }
   }
      if(count==1)
      {
          printf("yes");
      }
      else
      {
          printf("no");
      }
    return 0;
}
