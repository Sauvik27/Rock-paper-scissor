#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   while(1){
    void win(string,string);
    string com(int);
    int random();
    string w;
    cout << "\nLets play rock paper scissor" << endl;
    cout << "write one" << endl;
    cin>>w;
    int b=random();
    string n=com(b);
    cout<<"\nComputer select "<<n;
    win(w,n);
    
}}
string com(int x)
{   string m;
    if(x == 1||x==6||x==9)
    {
        m="rock";
    }
    else if(x == 2||x==4||x==8)
    {
        m="paper";
    }
    else
    {
        m="scissor";
    }
    return m;
}
int random()
{
      srand(time(NULL));

    int min = 1;
    int max = 9;
    int num = (min + (rand() % (int)(max - min + 1)));
    return num;
}
void win(string w,string n)
{
    if(w==n)
    {
        cout<<"\nits a tie.\n";
    }
    else if(w=="rock" && n=="paper")
    {
        cout<<"\ncomputer wins"<<endl;
    }
    else if(w=="rock" && n=="scissor")
    {
        cout<<"\nYou win"<<endl;
    }
    else if(w=="paper" && n=="rock")
    {
        cout<<"\nYou win"<<endl;

    }
    else if(w=="paper" && n=="scissor")
    {
        cout<<"\ncomputer wins"<<endl;

    }
        else if(w=="scissor" && n=="rock")
    {
        cout<<"\ncomputer win"<<endl;

    }
    else if(w=="scissor" && n=="paper")
    {
        cout<<"\nyou wins"<<endl;

    }
}
