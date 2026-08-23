/**14.2.1. Write a function that reads two integers and display Substraction**/
#include<stdio.h>
int f(int a , int b)
{
    int sub=0;

    scanf("%d %d",&a,&b);

    sub = a - b;

    return sub;
}


int main()
{
    int a , b , sum = 0;

    sum =f(a,b);

    printf("The number is = %d",sum);

    return 0;
}
