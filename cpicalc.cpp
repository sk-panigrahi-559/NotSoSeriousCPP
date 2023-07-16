// CPI Calculator for IISER Berhampur
#include<iostream>
#include <string>
using namespace std;

int get_grade_point(string grade)
{
    int grade_point;
    if (grade == "AA")
    {
        grade_point = 10;
    }
    else if (grade == "AB")
    {
        grade_point = 9;
    }
    else if (grade == "BB")
    {
        grade_point = 8;
    }
    else if (grade == "BC")
    {
        grade_point = 7;
    }
    else if (grade == "CC")
    {
        grade_point = 6;
    }
    else if (grade == "CD")
    {
        grade_point = 5;
    }
    else if (grade == "O")
    {
        grade_point = 10;
    }
    else
    {
        grade_point = 0;
    }
    return grade_point;

}


int main()
{
    int number_of_subjects = 0;
    cout << "Number of subjects = ";
    cin >> number_of_subjects;
    cout << "Number of subjects given = " << number_of_subjects << endl;
    
    int credits_of_subjects[number_of_subjects] = {};
    string names_of_subjects[number_of_subjects] = {};
    string grades_obtained[number_of_subjects] = {};
    int grade_points_obtained[number_of_subjects] = {};
    int cpi = 0, points = 0, total_credits = 0;
    for (int i=0; i<number_of_subjects; i++)
    {
        string subject, grade;
        int credit;
        cout << "---------------------------------------------" <<endl;
        cout << "Name of Subject: ";
        cin >> subject;
        cout << "Grade: ";
        cin >> grade;
        cout << "Credit: ";
        cin >> credit;
        
        names_of_subjects[i] = subject;
        grades_obtained[i] = grade;
        credits_of_subjects[i] = credit;
        grade_points_obtained[i] = get_grade_point(grade);
    }
    cout << "---------------------------------------------" <<endl;
    cout << "Data entered as follows :-" << endl << endl << endl;
    cout << "Subject______Credits_____Grade_____Total"<< endl;
    
    for (int i = 0; i<number_of_subjects; i++)
    {
        cout << names_of_subjects[i] << "    |     " << 
        credits_of_subjects[i] << "    |     " << 
        grades_obtained[i] << "   |   " << 
        grade_points_obtained[i]*credits_of_subjects[i] <<endl;
        
        points+=grade_points_obtained[i]*credits_of_subjects[i];
        total_credits+=credits_of_subjects[i];
    }
    cpi = points/total_credits;
    cout << "---------------------------------------------" <<endl;
    cout << "Final CPI = " << cpi << endl;
    cout << "---------------------------------------------" <<endl;
    return 0;
}


