/*Write a program to evaluate the following investment equation 
V = P(1+r)^n
and print the tables which would give the value of V for various combination of the following values of P, r, and n;
P : 1000, 2000, 3000,4000, 5000, 6000,7000, 8000, 9000,10000
r : 0.10, 0.12,0.13, 0.14,0.15, 0.16,0.17, 0.18,0.19, 0.2
n:1,2,3,4,5,6,7,8,9,10 */
#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    
    float P[10] = {1000, 2000, 3000,4000, 5000, 6000,7000, 8000, 9000,10000};
    float r[10] = {0.10, 0.12,0.13, 0.14,0.15, 0.16,0.17, 0.18,0.19, 0.2};
    float n[10] = {1,2,3,4,5,6,7,8,9,10};

    float V;
    for(int i=0;i<10;i++)
    {
        V = P[i] * pow((1 + r[i]),n[i]);
        cout<<P[i]<<setw(10)<<r[i]<<setw(10)<<n[i]<<setw(10)<<V<<endl;
    }
    
    return 0;
}