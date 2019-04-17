//                              Product of the elements in the array

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void prod_fun(int *input_array,int size)
{
    int temp=1;
    int *inter_array=(int*) malloc(size*sizeof(int));

    for(int itr=0;itr<(size);itr++)
        {
            for(int itr2=0;itr2<(size);itr2++)
            {

                if(itr==itr2)
                    {continue;}

                temp *=input_array[itr2];
            }
            inter_array[itr]=temp;
            temp=1;

        }

    //Printing the Result
    printf("\nThe Product array is:\n");
    for(int itr=0;itr<size;itr++)
    {
        printf("%d ",inter_array[itr]);
    }
}


int main()
{
    printf("\t\t\t\tProduct of the elements in the array");

   int size,*input_array,*inter_array,temp=1;
    printf("\nEnter size:");
    scanf("%d",&size);

    //Dynamic Memory Allocation
    input_array= (int*) malloc (size*sizeof(int));
    inter_array= (int*) malloc (size*sizeof(int));
    printf("\nEnter the array:");

    //Getting the Input Values
    for(int itr=0;itr<size;itr++)
    {
        scanf("%d",&input_array[itr]);
    }

    //function call
    prod_fun(input_array,size);

    printf("\n");
    return(0);
}

/*
                                        Product of the elements in the array

Input:
Enter size:5

Enter the array:1 2 3 4 5

Output:
The Product array is:
120 60 40 30 24

*/

