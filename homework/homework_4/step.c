#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x,rez =1;
    signed int p;

    printf("enter x =");
    scanf("%d",&x);

    printf("enter p =");
    scanf("%d",&p);
    for (int i=1;<=p;++i){
        rez *=x;
    }
    if (p>0){
        printf("%d",rez);
    }else {
        printf("%f",1.0/rez);
    }
//system("cls");
    return 0;
}
