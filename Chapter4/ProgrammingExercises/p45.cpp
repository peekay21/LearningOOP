/*Write a macro that obtains the largest of three numbers.*/
#include<iostream>
using namespace std;

#define find_max(a,b,c) ((a>b)?((a>c)?a:c):((b>c)?b:c))
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: a, b,c: ";
    cin>>a>>b>>c;
    cout<<"Maximum among three numbers: "<<find_max(a,b,c)<<endl;
    return 0;
}