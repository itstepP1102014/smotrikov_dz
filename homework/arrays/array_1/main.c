#include <stdio.h>
#include <stdlib.h>
#include "array.h"
int main()
{
    int array_[10], num;
    int i,j,rezult;
    printf("ENTER NUM :");
    scanf("%d",&num);
    for (i=0;i<10;++i){
        scanf("%d",&array_[i]);
    }

    for (j=0;j<10;++j){
        printf("%d\n",array_[j]);
    }
    rezult = ArraySearh(array_,num);
    printf("Index = %d",rezult);
    return 0;
}
