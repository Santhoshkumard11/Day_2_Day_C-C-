#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main()
{

    char *array,*dup;
    int size,count=0;
    printf("\n Enter the size:");  scanf("%d",&size);

    array = (char*) malloc(size*sizeof(char));

    dup = (char*) malloc(sizeof(char)*size);
    printf("\nEnter the array:");
    for(int itr=0;itr<size;itr++)
    {
        scanf("%c",&array[itr]);
    }
    for(int itr=0,itr3=0,itr4=1;itr<size;itr++)
    {
        dup[itr3]=array[itr];
        for(int itr2=0;;itr2++)
        {

        if(array[itr]==array[itr2])
        {
            count++;
        }
        else
        {
            goto ext;
        }

        }
        ext:
        dup[itr4]=count;
        itr3 +=2;
        itr4 +=2;
        count=0;
    }

    for(int itr=0;itr<strlen(dup);itr++)
    {
        printf("%c",dup[itr]);
    }

    return(0);
}
