// Print the odd number of letters in a word

#include<stdio.h>
#include<stdlib.h>



int main()
{

    int size,front=0,rear=0;
    char *word;

    printf("Enter the size:"); scanf("%d",&size);

    word = (char*) malloc(size*sizeof(char));

    printf("\nEnter the word:");  scanf("%s",word);
    rear=size-1;

    //for moving to the next line
    for(int itr1=0;itr1<size;itr1++,printf("\n"))
    {
        //printing the characters in the line
        for(int itr=0,count=5;itr<size;itr++)
        {


            if(front==itr)
            {
                printf("%c",word[front]);
            }
            else if(rear==itr)
            {
                printf("%c",word[rear]);
            }
            else
            {
                printf(" ");
            }


        }
        front++;
        rear--;
    }
   // printf("%s",word);
    return(0);
}

/*
Input:
Enter the size:5

Enter the word:abced

Output:
a   d
 b e
  c
 b e
a   d


Created By Santhosh Kumar (Hackey2San)
*/
