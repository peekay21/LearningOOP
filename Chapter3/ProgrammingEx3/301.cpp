/*Write a function using refrence varialbes as arguments to swap the values of a pair of integers.*/
#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;

    int temp=num1;
    num1 = num2;
    num2 = temp;
    cout<<"After swap the values are - "<<num1<<" "<<num2<<endl;



    return 0;
}