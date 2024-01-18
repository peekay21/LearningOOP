/**/
#include<iostream>
using namespace std;
int main()
{
    float unit;
    string name;

    cout<<"Enter name, units:  ";
    cin>>name>>unit;
    float amount =50;

    float x;
    if(unit>0)
    {
        if(unit<=100)
        {
            amount = unit * 60;

        }
        else if(unit<=300)
        {
            x = unit -100;
            amount = x * 80 + 6000;
        }
        else
        {
            x= unit - 300;
            amount = x * 90 + 16000 + 6000;

        }

        if(amount>=300)
        {
            amount = amount * 1.15;
        }

    }

    cout<<name<<" charges of electricity bill is Rs. "<< amount<<endl;

    
    
    return 0;
}