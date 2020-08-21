#include <iostream>
#include <string>
using namespace std; 

class Student 
{ 
  
    // Data Members 
    string studentName;
    string rollNo;
    int mathsMarks;
    int physicsMarks;
    int chemistryMarks; 



    Student(string studentName,string rollNo, int mathsMarks,int physicsMarks,int chemistryMarks) 
    { 
        studentName = studentName;
        rollNo = rollNo;
        mathsMarks = mathsMarks;
        physicsMarks = physicsMarks;
        chemistryMarks = chemistryMarks; 
    } 

    // Member Functions() 
    void printStudentDetails() 
    { 
        cout << "Name - "<<studentName;
        cout << "Roll No - "<<rollNo<<"\n Marks";
        cout << "Maths - "<<mathsMarks;
        cout << "Physics - "<<physicsMarks;
        cout << "Chemistry"<<chemistryMarks;
    } 

    void calculateCutoff()
    {
        cout<< ((mathsMarks/2) + (physicsMarks/4) + (chemistryMarks/4) );
    }

    void getDetals()
    {
        cout<<"Name of the student: "<<studentName;
        cout<<"Roll no - "<<rollNo;
    }


}; 
  
int main() { 
  
    //initilizing the variables

    string studentName; 
    string rollNo;
    int mathsMarks;
    int physicsMarks;
    int chemistryMarks; 

    cin>> studentName; 
    cin>>  rollNo;
    cin>>  mathsMarks;
    cin>>  physicsMarks;
    cin>>  chemistryMarks; 


    Student student(studentName,rollNo,mathsMarks,physicsMarks,chemistryMarks); 

    student.getDetals();

    // printall the details of the student
    student.printStudentDetails(); 

    //print the cutoff for the student
    student.calculateCutoff();

    return 0; 
} 