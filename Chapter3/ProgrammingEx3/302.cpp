/*Write a function that creates a vector of user-given size M using new operator.*/
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter size M ";
    cin >> m;

    char * str = new char[m];
    
    for(int i=0;i<m;i++)
    {
        str[i] +='a';
    }
    cout<<"String created using new operator - "<<str<<endl;
    return 0;
}