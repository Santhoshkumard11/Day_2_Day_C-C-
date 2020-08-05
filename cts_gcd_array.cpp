#include<iostream>
using namespace std;

int gcd(int num1,int num2)
{
    int result;
    for(int itr=0;itr<num1 && itr<num2;itr++)
    {
        if(num1%itr==0 && num2%itr==0)        
        {
            result=itr;
        }
    }

    return(result);
}

int main()
{
    int size,result=1;
    cin>>size;
    int arr[size];
    for(int itr=0;itr<size;itr++)
    {

        cin>>arr[itr];
    }

for(int itr=0;itr<size;itr++)
{
    result=gcd(result,arr[itr]);
}
cout<<result;


    return(0);
}

//solved by santhoshgoku

