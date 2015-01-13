#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 double a_power(int step, double num) {
    double rezult = 1.0;
    if (step > 0 ){
        for (int i = 1 ; i<=step;++step){
            rezult *=num;
        }
    }else {
        for (int i = 1 ; i<=step;++step){
            rezult *=num;
        }
        rezult = 1/rezult;
    }
    return (double)rezult;
 }
int main()
{
    int step;
    double num;
     system("cls");
    printf("Enter  num :");
    scanf("%lf",&num);
    printf("Enter Step :");
    scanf("%d",&step);

    printf("rezult %f :",a_power(step,num));
    return 0;
}
