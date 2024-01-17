#include<iostream>
using namespace std;

int main()
{
    // Declarations of variables
    float number1, number2, sum, average;
    //take input of two number 
    cout <<"Enter two numbers: ";
    cin >> number1;
    cin >> number2;
    
    // Perform the operations
    sum = number1 + number2;
    average = sum / 2;
    
    // Display the output
    cout <<" Sum = " << sum << "\n";
    cout <<"Average = " << average << "\n";
    
    return 0;
    
}