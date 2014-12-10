#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int start_num,end_num,random_number;
    char user_answer;
    printf("Enter start number :\n");
    scanf("%d",&start_num);
    printf("Enter start end :\n");
    scanf("%d",&end_num);
    while(user_answer!='y')
    {
        random_number = rand()%(end_num-start_num+1)+start_num;
        printf("Your number is %d ? (y-yes , l-less,g-great)\n",random_number);
        scanf(" %c",&user_answer);
        if (user_answer == 'l'){
            start_num = random_number+1;
        }
        if (user_answer == 'g'){
            end_num = random_number-1;
        }
    }


    return 0;
}
