#include <iostream>
#include <string>
#include <math.h>

using namespace std; 

class Number 
{ 
  
    // Data Members 
    int x;
    int y;
    int z; 

    Number() 
    { 
        x = 0;
        y = 0 ;
        z = 0; 
    } 

    // Member Functions() 

    void CalculateResult(int x, int y, int z)
    {
        cout<<"result of (x+y+z)^2 is "<< pow((x+y+z),2);
    }

}; 

int main() { 
  
    //initilizing the variables

    int x;
    int y;
    int z; 

    //getting the values of x y z
    cin>> x; 
    cin>>  y;
    cin>>  z;

    Number number(); 

    number.CalculateResult(x,y,z);

    return 0; 
} 