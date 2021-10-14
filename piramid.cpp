#include <stdio.h>

void quick_sort(int a[200], int first, int last){

        int i,j,pivot,t;

        if(first<last){

            pivot=first;

            i=first;

            j=last;



        while(i<j){

            while(a[i]<=a[pivot] && i<j){

                i++;

            }

            while(a[j]>a[pivot]){

                j--;

            }

            if(i<j){

                t=a[i];

                a[i]=a[j];

                a[j]=t;

            }

        }

            t=a[pivot];

            a[pivot]=a[j];

            a[j]=t;

            quick_sort(a,first,j-1);

            quick_sort(a,j+1,last);

}

}

int main(){

   int i, n, a[200];



   printf("How many elements are u going to enter: ");

   scanf("%d",&n);



   printf("Enter %d elements: ", n);

   for(i=0;i<n;i++)

      scanf("%d",&a[i]);



         printf("\narray is: ");

   for(i=0;i<n;i++)

      printf(" %d",a[i]);

      printf("\n");



   quick_sort(a,0,n-1);



   printf("Sorted array is : ");

   for(i=0;i<n;i++)

      printf(" %d",a[i]);



}

