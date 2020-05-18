//                      Counting the number of occurrence of a digit
#include<stdio.h>

/*
int print_star(int n)
{
    if(n!=1)
    {
        print_star(n-1);
    }
    for(int itr=0;itr<n;itr++)
    {
        printf("*");
    }
    printf("\n");
    return(0);
}
*/


int main()
{
    int inc=1,size;
    scanf("%d",&size);
    int array[size];
    //Get the input from the user
    for(int itr=0;itr<size-1;itr++)
    {
        scanf("%d",&array[itr]);
    }
    //scanf("%[^\n]s",array);


    for(int itr=0;itr<=size-1;itr++)
    {
        for(int itr1=itr+1;itr1<=size-1;itr1++)
        {
           for(int itr3=0;itr3<(strlen(int_array);itr3++))
           {

               if(array[itr]==int_array[itr2])
               {
                    goto exc;
               }
           }
            if(array[itr]==array[itr1])
            {
               inc++;
            }


        }
        exc:
        printf("%d->%d \n",array[itr],inc);
        inc=0;
    }
    printf("%u",array[0]);

    return(0);
}

/*

Input:
    12325

Output:
    1->1
    2->2
    3->1
    5->1
*/
