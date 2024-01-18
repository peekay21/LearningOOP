/*Write a program to read two nuimber from the keyboard and display the larger value on the screen.*/
#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    if(num1>num2)
    {
        cout<<num1;
    }
    else{
        cout<<num2;
    }
    return 0;

}