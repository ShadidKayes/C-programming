/**14.1.2. Write a function that reads two integers and returns Addition**/
#include<stdio.h>
int f(int a , int b)
{
    int add = 0;

    add = a + b;

    return add;
}

int main()
{
    int a = 10 , b = 6 , sum=0;

    sum = f(a,b);

    printf("The ans is - %d",sum);

    return 0;

}
