#include <stdio.h>

int main()
{
    int value[5];               // declare an array of size 5
    int max_number=value[0];int max_number_index=0;         // declare var to store maximum number and index of number
    for (int i = 0; i < 5; i++) // taking input in  array, basically filling array
    {
        scanf("%d", &value[i]);
    }
    for (int i = 0; i < 5; i++) // printing array, just to see if array input is correct
    {
        printf("Element at index %d: %d\n", i, value[i]);
    }

    for (int i = 0; i < 5; i++) // calculating max in array
    {
        int element = value[i]; // accessing element at ith index
        if (element > max_number) // if current element is greater than  
        {
            max_number = element; 
            max_number_index=i;
        }
    }
    printf("max number is %d\n", max_number);
    printf("Max value position:%d",max_number_index);
    return 
    0;
}
