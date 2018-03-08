
//PROGRAM TO GENERATE MULTIPLICATION TABLE //

#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(i=1; i<=10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n*i);
    }
    
    return 0;
}

//compile using gcc -Wall multiplication_table.c -o multiplication_table.exe
