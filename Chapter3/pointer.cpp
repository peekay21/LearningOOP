#include<iostream>
using namespace std;
int main()
{

    int *ip;
    int x=10;
    ip = &x;

    cout<<"Address of "<<*ip<<" "<<ip<<"\n";
    cout<<*ip<<endl;

    *ip = 20;
    cout<< *ip<<endl;
    cout<<"Address of "<<*ip<<" "<<ip<<"\n";
    return 0;
}