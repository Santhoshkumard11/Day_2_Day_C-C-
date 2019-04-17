//                                      Array Arrangement
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *array,size,big_no=0,small_no=0,temp=0;
    printf("Enter the size:");
    scanf("%d",&size);
    array = (int*) malloc(size*sizeof(int));
    //Getting the array
    for(int itr=0;itr<(size);itr++)
    {
        scanf("%d",&array[itr]);
    }
    //Sorting the array in ascending order
    for(int itr=0;itr<(size);itr++)
    {
        for(int itr1=itr;itr1<(size);itr1++)
        {
            if(array[itr]>array[itr1])
            {
                temp=array[itr1];
                array[itr1]=array[itr];
                array[itr]=temp;
            }

        }
    }
    //printing the sorted array
    printf("Max:%d\nMin:%d\nRemaining Array Elements:",array[0],array[size-1]);

    for(int itr=1;itr<size-1;itr++)
    {
        printf("%d",array[itr]);

    }



    return(0);
}


/*
Input:
Enter the size:5
3
2
1
5
4

Output:
Max:1
Min:5
Remaining Array Elements:234

Created By Santhosh Kumar (Hackey2San)


*/
