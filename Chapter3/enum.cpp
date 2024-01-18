/*The enum keyword is used to enumerates a list of words by assigning the values 0,1,2,3 and so on.

Syntax:

enum shape{circle, square, triangle}
enum colour{red, blue, green, yellow}
enum position{off, on}

by default, starting value is 0. i.e circle =0, red =0, off =0.




*/
#include<iostream>
using namespace std;

// Shape is an enum. circle =0, rectangle =1, triangle =2
enum shape{
        circle, 
        rectangle,
        triangle
    };

int main()
{
    int code;
    cout<<"Enter a shape: ";

    cin>>code;

    switch(code)
    {
        case circle:
            cout<<"Circle\n";
            break;
        case rectangle:
            cout<<"Rectangle\n";
            break;
        case triangle:
            cout<<"Triangle\n";
            break;
        default:
            cout<<"Wrong code.\n";
    }

    return 0;

}