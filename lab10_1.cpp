#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    cout <<"Press Enter 3 times to reveal your future.";
    cin.ignore();
    cin.ignore();
    cin.ignore();
    int x;
    string i;
    srand(time(0));
    x = rand()%8;
    
    switch(x)
    {
        case 1 :
           i="A";
           break;
        case 2 :
           i="B+";
           break;
        case 3 :
           i="B";
           break;
        case 4 :
           i="C+";
           break;
        case 5 :
           i="C";
           break;
        case 6 :
           i="D+";
           break;
        case 7 :
           i="D";
           break;
        case 8 :
           i="F";
           break;
        case 9 :
           i="W";
           break;
    }
    cout <<"You will get "<<i<< " in this 261102";
}