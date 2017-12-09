#include <iostream>
#include <stdio.h>
using namespace std;

const int MAX_NAME = 14 ;  //Assume Name Contains at most 14 Chars

struct Gender{
    bool male;              // 0 for male, 1 for female
    bool female;
};

struct Date{
    int year;
    int month;
    int day;
};

struct Student{
    int ID;
    char first_name[MAX_NAME+1];
    char last_name[MAX_NAME+1];
    Date birth_date;
    Gender gender;
    double GPA;
}; Student *s;

void InputStudent(Student *s){
    scanf("%i", s->ID);
    scanf("%s", s->first_name[MAX_NAME + 1]);
    scanf("%s", s->last_name[MAX_NAME + 1]);
    scanf("%i", s->birth_date.year);
    scanf("%i", s->birth_date.month);
    scanf("%i", s->birth_date.day);
    scanf("%i", s->gender.male);
    scanf("%i", s->gender.female);
    scanf("%a", s->GPA);
}

int main(){
    Student student;
    InputStudent(&student);
    return 0;
}
