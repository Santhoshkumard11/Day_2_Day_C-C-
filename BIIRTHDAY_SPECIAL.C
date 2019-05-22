#include<stdio.h>
//#include<graphics.h>
#include<time.h>
#include<conio.h>

int main()
{
    int mat[7][12]={{0,0,0,1,0,1,0,0,2,0,0,2},
		    {0,0,1,0,0,0,0,0,2,0,0,2},
		    {0,1,0,0,0,0,0,0,2,0,0,2},
		    {1,0,0,1,1,1,0,0,2,2,2,2},
		    {0,1,1,1,0,1,0,0,2,0,0,2},
		    {0,0,0,0,0,1,0,0,2,0,0,2},
		    {0,0,0,0,0,1,0,0,2,0,0,2}};
	 int itr,itr2,itr3;
			//clrscr();
		printf("\n\n\n\n");

	for(itr=0;itr<7;itr++,printf("\n"))
	{
	    for(itr2=0;itr2<12;itr2++)
	    {
		//printf("1");
		for(itr3=0;itr3<5;itr3++)
		{
		    printf(" ");

		}
		if(mat[itr][itr2]==1)
		{   textcolor(2+BLINK);
		    cprintf("G");
		    textcolor(3+BLINK);
		    delay(200);
		}
		else if(mat[itr][itr2]==2)
		{
		    textcolor(4+BLINK);
		    cprintf("H");
		    textcolor(8+BLINK);
		    delay(200);
		}
		else
		    cprintf(" ");
		    textcolor(3+BLINK);
		    delay(200);

	    }
	}
	printf("\n\n\n\n\t\t\t");
	cprintf("S");textcolor(9+BLINK);delay(200);
	cprintf("    I");textcolor(5+BLINK);delay(200);
	cprintf("    N");textcolor(7+BLINK);delay(200);
	cprintf("    D");textcolor(4+BLINK);delay(200);
	cprintf("    H");textcolor(4+BLINK);delay(200);
	cprintf("    U");textcolor(9+BLINK);delay(200);
	getch();
    return(0);
}
