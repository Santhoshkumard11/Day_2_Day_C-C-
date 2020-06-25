//Program to check the given string is anagram or not
#include<stdio.h>
#include<malloc.h>
int main()
{
    char *str1,*str2;
    int size1,size2,count=1;
    printf("Enter the size of the first string:"); scanf("%d",&size1);
    printf("Enter the size of the second sting:"); scanf("%d",&size2);

    str1 = (char*) malloc(size1 *sizeof(char)); str2 = (char*) malloc(size2 *sizeof(char));
    //First string input
    printf("\nEnter the first string:");
    for(int itr=0;itr<size1;itr++)
    {
        scanf("%c",&str1[itr]);
    }
    //Second string input
    printf("\nEnter the second string:");
    for(int itr2=0;itr2<size2;itr2++)
    {

        scanf("%c",&str2[itr2]);
    }

    //checking the condition
    for(int itr1=0;itr1<size2;itr1++)
    {
        for(int itr2=0;itr2<size1;itr2++)
        {
            if(str2[itr1]==str1[itr2])
            {
                count++;
            }
        }
    }

    if(count==size2)
        printf("\n Given string is anagram");
    else
        printf("\n Given string is not an anagram");
    //printf("%d",count);
    return(0);
}
/*
Input:
Enter the size of the first string:5
Enter the size of the second sting:3

Enter the first string:earth

Enter the second string:the

Output:
Given string is anagram
*/
