//                                                         Number to Words
#include<stdio.h>
#include<stdlib.h>

void print_thos(int thos)
{
    switch(thos)
        {
            case 1 : printf(" Thousand ");break;
            case 2 : printf(" Two thousand ");break;
            case 3 : printf(" Three thousand ");break;
            case 4 : printf(" Four thousand ");break;
            case 5 : printf(" Five thousand ");break;
            case 6 : printf(" Six thousand ");break;
            case 7 : printf(" Seven thousand ");break;
            case 8 : printf(" Eight thousand ");break;
            case 9 : printf(" Nine thousand ");
            default: break;
        }
}

void print_hun(int hun)
{
    switch(hun)
        {
            case 1 : printf(" One hundred");break;
            case 2 : printf(" Two hundred");break;
            case 3 : printf(" Three hundred");break;
            case 4 : printf(" Four hundred");break;
            case 5 : printf(" Five hundred");break;
            case 6 : printf(" Six hundred");break;
            case 7 : printf(" Seven hundred");break;
            case 8 : printf(" Eight hundred");break;
            case 9 : printf(" Nine hundred");
            default: break;
        }


}

void print_ten(int ten)
{
    switch(ten)
        {
            case 1 : printf(" Ten");break;
            case 2 : printf(" Twenty");break;
            case 3 : printf(" Thirty");break;
            case 4 : printf(" Forty");break;
            case 5 : printf(" Fifty");break;
            case 6 : printf(" Sixty");break;
            case 7 : printf(" Seventy");break;
            case 8 : printf(" Eighty");break;
            case 9 : printf(" Ninety");
            default: break;
        }

}

//Print the unit digit
void print_digit1(int one)
{

switch(one)
    {

        case 1 : printf(" One");break;
        case 2 : printf(" Two");break;
        case 3 : printf(" Three");break;
        case 4 : printf(" Four");break;
        case 5 : printf(" Five");break;
        case 6 : printf(" Six");break;
        case 7 : printf(" Seven");break;
        case 8 : printf(" Eight");break;
        case 9 : printf(" Nine");
        default: break;
    }

}

void print_digit2(int ten,int one)
{
    if(one==0){
    print_ten(ten);
        goto ext;
    }
    else if(ten==1 && one!=0)
    {
            switch(one)
        {
            case 1 : printf(" Eleven");break;
            case 2 : printf(" Twelve");break;
            case 3 : printf(" Thirteen");break;
            case 4 : printf(" Fourteen");break;
            case 5 : printf(" Fifteen");break;
            case 6 : printf(" Sixteen");break;
            case 7 : printf(" Seventeen");break;
            case 8 : printf(" Eighteen");break;
            case 9 : printf(" Nineteen");
            default: break;

        }
        goto ext1;
    }
        else{
                print_ten(ten);

        }
    print_digit1(one);
    ext:
    ext1:
        ten=ten;
}


void print_digit3(int hun,int ten,int one)
{
    if(ten==0 && one==0){
        print_hun(hun);
    }
    else
    {
        print_hun(hun);
        if(one!=0)
        {
            printf(" and ");
        }
            print_digit2(ten,one);
        /*
        if(one==0)
        {
            print_digit2(ten,one);

        }
        else
        {

            print_digit2(ten,one);


        }
        */
    }
}


void print_digit4(int thos,int hun,int ten,int one)
{
    if(hun==0 && ten==0 && one==0)
    {

    print_thos(thos);
    }
    else
    {
        print_thos(thos);
        //printf(" and ");
        print_digit3(hun,ten,one);
        /*
        if(ten==0 && one==0)
        {
            print_digit3(hun,ten,one);
        }
        else
        {
            print_digit3(hun,ten,one);
        }
        */
    }

}

int main()
{
    printf("\t\t\t\tNumbers to Words in Rupees\n");

    char *array;int size,thos,ten,one,hun;
    printf("Enter the size:");
    scanf("%d",&size);

    array = (char*) malloc(size*sizeof(char));
    printf("\nEnter the number:");
    for(int itr=0;itr<size;itr++){
    scanf("%d",&array[itr]);
    }

    if(size==4){
    one=array[3];
    ten=array[2];
    hun=array[1];
    thos=array[0];
    }
    else if(size==3)
    {
        one=array[2];
    ten=array[1];
    hun=array[0];

    }
    else if(size==2)
    {

        one=array[1];
    ten=array[0];
    }
    else{
        one=array[0];
    }

    print_digit4(thos,hun,ten,one);

    printf("\n");
    return(0);
}

/*

Input:
Enter the size:4

Enter the number:1 2 4 5

Output:
Thousand  Two hundred and  Forty Five

Created By Santhosh Kumar (Hackey2San)
*/
