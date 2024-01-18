/*Write a function thtat performs the same operation as that of Exercise 4.7 but
takes an int value for m. Both the functions should have the same name. Write a 
main that calls both the functions. Use the concept of function overloading.
*/
#include<iostream>
#include<cmath>

using namespace std;

double power(double p, int n=2)
{
    return pow(p,n);
}

int power(int p, int n=2)
{
    return pow(p,n);
}

int main()
{
    double p;
    int n;
    cout<<"Enter double p, int n: ";
    cin>>p>>n;

    cout<<"Power(P,n) = "<<power(p,n)<<endl;

    int p1;
    cout<<"Enter int p, int n: ";
    cin>>p1>>n;

    cout<<"Power(P1,n) = "<<power(p1,n)<<endl;


    return 0;
}