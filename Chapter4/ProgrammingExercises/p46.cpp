/*Write a inline function that obtains the largest of three numbers.*/
#include<iostream>
using namespace std;

inline int find_max(int a,int b,int c) 
{
    return ((a>b)?((a>c)?a:c):((b>c)?b:c));
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: a, b,c: ";
    cin>>a>>b>>c;
    cout<<"Maximum among three numbers: "<<find_max(a,b,c)<<endl;
    return 0;
}