#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter your \"n\" : ");
    scanf("%d",&n);
    if (n == 0)
    {
        printf("The product = 0\n");
    }
    else
    {
        int replaced_n;
        int product=1;
        for (int i=1; i<=n; ++i)
        {
            scanf("%d",&die_n);
            product *=die_n;
        }
        printf("The product=%d",product);
    }
}
