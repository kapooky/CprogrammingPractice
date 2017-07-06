#include <stdio.h>
// Creates array of size n, and inserts number into the n slots, then prints number backwards.
int main()
{

    //Declare int to determine size of array
    int a;
    printf("Size of int = %ld bytes \n", sizeof(a));

    scanf("%d", &a);
    //printf("\n %d", a);

    //create an array of size a
    int array[a];
    //printf("\nSize of array: %ld", sizeof(array));


    int i;
    //insert desired number into the array
    for(i = 0; i < (sizeof(array)/(sizeof(int))); ++i){
        printf("Insert the number in here: ");
        scanf("%d",&array[i]);

    }
    //Reverse the ordering
    for(i = (sizeof(array)/(sizeof(int))) - 1 ; i >= 0 ; i--){
        printf("\n %d",array[i]);
    }




    return 0;
}

