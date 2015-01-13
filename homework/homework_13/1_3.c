#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int gcd(int a, int b)
{
    int c;
    while (b)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return abs(a);
}
int main()
{
    int n;
    int i=0;
    int j =0;
    printf("Enter N :");
    scanf("%d",&n);
    for ( i; i<=n; ++i)
    {

        for (j; j<=n; ++j)
        {
            if (gcd(i,j) == 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
            printf("\n");
        }

    }
    return 0;
}
