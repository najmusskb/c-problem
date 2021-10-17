#include<stdio.h>
int main()
{
    int i,j,n,a[100],x;
    printf("enter size =");
    scanf("%d",&n);
     printf("enter elements in array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array is");
      for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n-1-i;j++)
      {
          if(a[j]<a[j+1])
          {
              x=a[j];
              a[j]=a[j+1];
              a[j+1]=x;
          }
      }
  }

printf("\n sorted array =");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
