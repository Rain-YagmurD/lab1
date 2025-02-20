#include <iostream>

using namespace std;

int main()
{
    //Q1
    string name_of_user;

    cout << "What is your name?\n";
    cin >> name_of_user;
    cout << "Hello " << name_of_user << ".\n";

    string student_ID;

    cout << "What is your Student ID?\n";
    cin >> student_ID;
    cout << "Your ID is " << student_ID << ".\n";

    //Q2
    double var1, var2, sum, diff, prod;

    cout << "Enter first number: ";
    cin >> var1;
    cout << "Enter second number: ";
    cin >> var2;

    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;

    cout << "Variable 1: " << var1 << ", Variable 2: " << var2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;

    //Q 3

    string name;
    double lab, midterm, final_g, last_score;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter Lab grade: ";
    cin >> lab;
    cout << "Enter Midterm grade: ";
    cin >> midterm;
    cout << "Enter Final grade: ";
    cin >> final_g;

    last_score = (lab * 0.25) + (midterm * 0.35) + (final_g * 0.40);

    cout << "Name: " << name << endl;
    cout << "Lab: " << lab << endl;
    cout << "Midterm: " << midterm << endl;
    cout << "Final: " << final_g << endl;
    cout << "Last Score: " << last_score << endl;

    //Q 4
    cout << "*\n**\n***\n**\n*\n";


}
