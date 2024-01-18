/*Write a function power() to raise a number m to a power n. The function takes a 
double value for m and int value for n, and returns the result correctly. Use a 
default value of 2 for n to make the function to calculate squares when this argument
is omitted. Write a main that gets the values of m and n from the user to test the function.
*/
#include<iostream>
#include<cmath>
inline double power(double p, int n=2)
{
    return pow(p,n);
}
using namespace std;
int main()
{
    double p;
    int n;
    cout<<"Enter p, n: ";
    cin>>p>>n;

    cout<<"Power(P,n) = "<<power(p,n)<<endl;


    return 0;
}