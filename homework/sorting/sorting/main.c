#include <stdio.h>
#include <stdlib.h>
void buble(int array[] , int size); // buble

int main()
{
    int array[1000],size;
    size = 10;
    for(int i = 0; i<size; ++i)
    {
        scanf("%d",&array[i]);
    }
    // call sorting function
     //buble(array,size);
      //selection (array,size);
    //
    for(int i = 0; i<size; ++i)
    {
        printf("%d -> ",array[i]);
    }
    return 0;
}

// buble
void buble(int array[] , int size)
{
    for(int i = 0; i<size; ++i)
    {
        for(int j = 0; j<size-i-1; ++j)
        {
            if (array[j] > array[j+1])
            {
                int c =  array[j] ;
                array[j] = array[j+1];
                array[j+1] = c;
            }
        }
    }
}
// end buble

// selection
void selection(int array[] , int size)
{

    for(int i=0; i<size-1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        int c = array[i];
	array[i] = array[min];
	array[min] = c;
    }
}
//end selection
