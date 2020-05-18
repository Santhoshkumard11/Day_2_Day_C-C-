#include<stdio.h>
void main()
{
    long int num,temp,reminder,ctr,end,copy;
    for(num=1;num<=1000000;num++)
    {
    end=0;
    temp=copy=num;
    for(;copy>0;)
    {
            reminder=copy%10;
            copy=copy/10;
            end=end+reminder*reminder*reminder;
    }
         if(end==temp)
            printf("%d\n",end);
    }
}
