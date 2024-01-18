#include<iostream>
using namespace std;

int main()
{
    char s[] = "Pradip Kumar";
    //cout<<typeid(decltype(s)).name();
    for(int i=0;i<100;i++)
    {
        if(s[i]=='\0'){
            break;
        }
        else{
            cout<<s[i]<<"\n";
        }

    }
    return 0;
}