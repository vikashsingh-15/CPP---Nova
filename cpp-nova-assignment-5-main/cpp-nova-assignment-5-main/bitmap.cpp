#include "bitmap.h"

/*
    Method to calculate and return Result Grade for Student 
*/


char Student::CalculateGrade(){

    char grade;

    if (TotalMarks == -1)
        grade = '-';
    else if (TotalMarks > 100)
        grade = '#';
    else if (TotalMarks >= 85 && TotalMarks <= 100)
        grade = 'O';
    else if (TotalMarks >= 61 && TotalMarks <= 84)
        grade = 'A';
    else if (TotalMarks >= 40 && TotalMarks <= 60)
        grade = 'P';
    else
        grade = 'F';

    return grade;

   
  
}


/*
    This method returns the name of the student
*/

std::string Student::GetStudentName(){
  return StudentName;
}


/*
    This method returns the ID of the  student
*/

std::string Student::GetStudentId(){
   return StudentId;
}



/*
    Parameterized constructor for Engineering Student
*/

EngineeringStudent::EngineeringStudent(std::string name, std::string id,int thMarks, int prMarks){
        
    StudentName = name;
    StudentId = id;
    TheoryMarks = thMarks;
    PractialMarks = prMarks;
}
 


/*
    Method to calculate and return Total Marks for EngineeringStudent 
*/


void EngineeringStudent::CalculateMarks(){
    TotalMarks = TheoryMarks + PractialMarks;
}

/*
    Method to return Practical marks of the EngineeringStudent
*/

int EngineeringStudent::GetPracticalMarks(){
    return PractialMarks;
}



/*
    Method to return Theory marks of the EngineeringStudent
*/

char EngineeringStudent::GetTheoryMarks(){
   return TheoryMarks;
}


/*
    Method to get total marks for engineering student
*/

int EngineeringStudent::GetTotalMarks(){
    CalculateMarks();
    return TotalMarks;
}


/*
    Parameterized constructor for Architecture Student
*/

ArchitectureStudent::ArchitectureStudent(std::string name, std::string id,int dgMarks, int thMarks) {
    
    StudentName = name;
    StudentId = id;
    DesignMarks = dgMarks;
    ThesisMarks = thMarks;
   
}

/*
    Method to calculate and return Total Marks for ArchitectureStudent 
*/

void ArchitectureStudent::CalculateMarks(){
    TotalMarks = DesignMarks + ThesisMarks;
   
}

/*
    Method to return Design marks of the ArchitectureStudent
*/

int ArchitectureStudent::GetDesignMarks(){
    return DesignMarks;
}

/*
    Method to return Thesis marks of the ArchitectureStudent
*/
char ArchitectureStudent::GetThesisMarks(){
         return ThesisMarks;
}

/*
    This method returns the total marks for architecture student
*/

int ArchitectureStudent::GetTotalMarks(){
   CalculateMarks();
    return TotalMarks;
}