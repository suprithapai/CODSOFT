#include<stdlib>
#include<iostream>
using namespace std;
int main()
{
    int guessnum;
    srand(time(0));
    int randomnumber=rand()%100+1;
    while(randomnumber!=guessnum)
    {
        cout<<"Guess the number ";
        cin>>guessnum;
        if(guessnum<randomnumber)
        {
            cout<<"TOO LOW!!TRY AGAIN!";
        }
        else if(guessnum>randomnumber)
        {
            cout<<"TOO HIGH!!TRY AGAIN!";
        }
        else
        {
            cout<<"YAY! YOU GUESSED IT!!";
        }
    }
}
