/**14.2.2. Write a function that reads two integers and returns Substraction
**/
#include<stdio.h>
int f(int a, int b)
{
    int sub = 0;

    sub = a - b;

    return sub;

}


int main()
{
    int a = 6 , b = 4, sum = 0;

    sum = f(a,b);

    printf("The number is = %d",sum);

    return 0;
}
