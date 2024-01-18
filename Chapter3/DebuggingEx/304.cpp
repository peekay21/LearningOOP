#include<iostream>
using namespace std;
#define pi 3.14

int squareArea(int &);
int circleArea(int &);


int main()
{
    int a =10;
    cout<<squareArea(a)<<" Square \n";
    cout<<circleArea(a)<<" Circle \n";
    cout<<a<<endl;
    return 0;
}

int squareArea(int &a)
{
    return a*a;
}

int circleArea(int &a)
{
    return pi * a * a;
}