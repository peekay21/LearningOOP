/*An election is contested by five candidtates. The candidates are numbered 1 to 5 and the voting is done by marking the canidate number on the ballot paper. 
Write a program to read the ballots and count the voites cast for each canidate using an array variable count. In case, a number read is outside
the range 1 to 5, the ballot should be considered as a 'spoilt ballot', and the progeam should also
count the number of spoilt ballots.*/
#include<iostream>
using namespace std;
int main()
{
    int candidate[6]={0,0,0,0,0,0};
    int n;
    cout<<"Enter number of voters: ";
    cin>>n;
    int j;
    for(int i=0;i<n;i++)
    {
        cin>>j;
        if(j>=1 && j<=5)
        {candidate[j] +=1;}
    }   
    for(int i=1;i<=5;i++)
    {
        cout<<"Candidate "<<i<<" received "<<candidate[i]<<"votes.\n";
    }
    return 0;
}