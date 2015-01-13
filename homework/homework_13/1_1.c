#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int gcd(int a, int b) {
   int c;
   while (b) {
      c = a % b;
      a = b;
      b = c;
   }
   return abs(a);
 }
int main()
{
    int first_num,second_num;
    printf("Enter First num :");
    scanf("%d",&first_num);
    printf("Enter Second num :");
    scanf("%d",&second_num);
    printf("gcd = %d",gcd(first_num,second_num));
    printf("NOK = %d",first_num*second_num/gcd(first_num,second_num));
    return 0;
}
