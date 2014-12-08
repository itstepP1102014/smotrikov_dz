#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result = 1,p=0,L,x;

    printf("Enter your \"L\" :");
    scanf("%d",&L);

    printf("Enter your \"x\" :");
    scanf("%d",&x);
    while (result<=L){
        result *=x;
        ++p;
    }
    printf("result =%d",p);
}
