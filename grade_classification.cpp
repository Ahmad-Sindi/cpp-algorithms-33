// Algorithm Challenge
// 33 Program to classify a student's grade into A, B, C, D, or Fail

#include <iostream>
using namespace std;

int main()
{
    float grade;

    // Ask the user to enter their grade
    cout << "Enter your grade: ";
    cin >> grade;

    // Validate input to ensure grade is between 1 and 100
    while (grade > 100 || grade < 1)
    {
        cout << "Invalid grade. Please enter a value between 1 and 100: ";
        cin >> grade;
    }

    // Grade classification
    if (grade >= 90)
    {
        cout << "Grade: A\n";
    }
    else if (grade >= 80)
    {
        cout << "Grade: B\n";
    }
    else if (grade >= 70)
    {
        cout << "Grade: C\n";
    }
    else if (grade >= 60)
    {
        cout << "Grade: D\n";
    }
    else
    {
        cout << "You failed.\n";
    }

    return 0;
}
