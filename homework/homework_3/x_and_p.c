#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,p;
    printf("Enter your \"x\" : ");
    scanf("%d",&x);
    printf("Enter your \"p\" : ");
    scanf("%d",&p);
    if (x == 0 && p==0)
    {
        printf("result - udefiend");
    }
    else if (p == 0)
    {
        printf("result = 1");
    }
    else
    {
        int result=1;
        for (int i=1; i<=p; ++i)
        {
            result *=x;
        }
        printf("result = %d",result);
    }
}
