/*Write a c++ program that will ask for a temperature in Fahrenheit and display it in Celsius.*/
#include<iostream>
using namespace std;
int main()
{
    float f, c;
    cout<<"Enter temperature in Farenheit: ";
    cin >> f;

    c = ((f - 32)*5)/9;
    cout<<"Celcius: "<<c<<"\n";
    return 0;
}