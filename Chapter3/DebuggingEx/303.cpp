#include<iostream>
using namespace std;
int main()
{
    int i =5;
    while(i)
    {
        switch(i)
        {
            default: cout<<"Default\n";
            case 4: cout<<"4\n";
            case 5: cout<<"5\n";
            break;
            case 1: cout<<"1\n";break;
            case 2: cout<<"2\n";
            case 3: cout<<"3\n";
            break;
        }
        i--;
    }
    return 0;
}