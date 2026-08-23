/**7.19.
		E E E E E
		D D D D
		C C C
		B B
		A
**/
#include<stdio.h>
int main()
{
    int r , c ;
    char alph= 'A',n;
    printf("Enter the caractor ");
    scanf("%c",&n);

    for(r = n ; r >= 1 ; r--){
            for(c = n ; c >= r ;c--){

            }
            printf("%c\n",alph--);

    }





    return 0;
}
