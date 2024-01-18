/*Write a program to input an integer value from keyboard and display on screen "WELL DONE" that many times*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin >>n;
    for(int i=0;i<n;i++){
        cout<<"WELL DONE\n";
    }
    return 0;
}