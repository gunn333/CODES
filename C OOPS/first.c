#include<stdio.h>
#include<string.h>

// user-defined data type
struct student{
    int rollno;
    char name[100];
    float cgpa;
}s1;

int main(){
   
    s1.rollno = 333;
    s1.cgpa = 9.9;
    strcpy(s1.name,"Gunn");

     printf("Student name = %s\n", s1.name);
     printf("Student rollno = %d\n", s1.rollno);
     printf("Student name = %0.2f\n", s1.cgpa);
    return 0;
}

