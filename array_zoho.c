//                                                  print the max in the array for the given window size
#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *array,size,window_size,big=0;

    printf("\nEnter the size:"); scanf("%d",&size);
    size++;
    array = (int*) malloc(size*sizeof(int));

    printf("\nEnter the array:");

    for(int itr=0;itr<size-1;itr++)
    {
        scanf("%d",&array[itr]);
    }

    array[--size]=100000;


    printf("\nEnter the window_size:");scanf("%d ",&window_size);
    printf("\n");

    for(int itr=0;itr<size;itr++)
    {
        for(int itr1=itr;itr1<(window_size+itr);itr1++)
        {

            if(array[itr1]==100000)
                goto ext;
            if(big<array[itr1])
            {

                big=array[itr1];

            }

        }
        printf("%d ",big);big=0;

    }
    ext:
        size=size;
    return(0);
}


/*
Input:
Enter the size:5

Enter the array:1 2 3 4 5

Enter the window_size:2

Output:
2 3 4 5


Created By Santhosh Kumar (Hackey2San)
*/
