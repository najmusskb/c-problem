#include <stdio.h>
int main()
{
    int num1,num2,sub,sum;

    printf("Enter a positive integer: ");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    sub=num1-num2;

    printf("enter the sum:%d\n Enter the sub:%d",sum,sub);

    return 0;
}
