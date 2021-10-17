
#include<stdio.h>
int main()
{
    int a[100],i,n,x,beg,end,mid,loc=0;

    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array element\n");

    for(i=0;i<n;++i)
        scanf("%d",&a[i]);

    printf("\nEnter the element to search:");
    scanf("%d",&x);

    beg=0;
    end=n-1;
mid=(beg+end)/2;
    while(beg<=end && a[mid]!=x)
    {

            if(x<a[mid])
                end=mid-1;
            else
                beg=mid+1;
        mid=(beg+end)/2;
    }
 if(a[mid]==x)
   printf("yes found loc=%d",mid+1);
    else

  printf("not found");

}
