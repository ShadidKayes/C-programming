/**14.1.1. Write a function that reads two integers and display Addition**/
#include <stdio.h>
int f(int a , int b)
{
    int add=0;
    scanf("%d %d",&a,&b);
    add = a + b;
    return add ;
}
int main()
{
    int a , b , sum=0;
    sum = f (a,b);
    printf("The ans is - %d",sum);
    return 0;
}
