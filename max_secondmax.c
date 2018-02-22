#include <stdio.h>
#include <stdlib.h>

 void max_secondmax(int *a, int n, int *max, int *second_max)
 {
    for(int counter = 0; counter < n; counter++)
    {
        if (*max < a[counter])
        {
            *second_max = *max;
            *max = a[counter];
        } else if(*second_max < a[counter])
        {
            *second_max = a[counter];
        }
    }
 }

int main()
{
    int *a, n, max = -99999, second_max = -99999, cntr = 0;

    printf("Insert a number greater than 2: \n");
    scanf("%d", &n);
    a = malloc(sizeof(int) * n);
    while(cntr < n)
    {
        printf( "\nEnter a number: ");
        scanf( "%d", a + sizeof(int) * cntr++); //&a[cntr++]
    }
    max_secondmax(a, n, &max, &second_max);
    printf("Max is %d, second max is %d\n", max, second_max);
}
