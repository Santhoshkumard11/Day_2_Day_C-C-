//Pascals Triangle

#include<stdio.h>

int main()
{

    int input,input2,intr=2;
   // for(int i=0;i<211;i++)
    //    printf("*");
    printf("\nEnter the number for generating triangle:");
    scanf("%d",&input);
    input2 = input;
    //Loop for the total iteration
    for(int itr1=1;itr1<=input;itr1++,printf("\n"),(intr+=2),(input2--))
    {
        // Loop for spaces to be printed

        //printf("1");
        for(int itr2=1;itr2<=input2;itr2++)
        {
            printf(" ");
        }


        //For printing pyramind
        for(int itr3=1;itr3<intr;itr3++)
        {
        printf("*");

        }


    }

    getch();
    return(0);

}

/*
Input:
    4
Output:


    *
   ***
  *****
 *******


*/
//#Created By SANTHOSH KUMAR
//07/04/2019
