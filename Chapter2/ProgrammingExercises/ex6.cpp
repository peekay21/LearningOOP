/*Write a c++ program that will ask for a temperature in Celcius and display it in Farenheit.*/
#include<iostream>
using namespace std;
int main()
{
    float f, c;
    cout<<"Enter temperature in celcius : ";
    cin >> c;

    f =((c*9)/5) + 32; 
    cout<<"Farenheit: "<<f<<"\n";
    return 0;
}