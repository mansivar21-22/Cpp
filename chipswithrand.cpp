#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    bool player1turn = true;
    bool gameover = false;
    int chipsInpile = 0;
    int chipsTaken = 0;

    srand(time(0));

    //cout<< "how many chips would you like in your starting pile?\n";

    chipsInpile = (rand() % 100) + 1;
    cout<<"this round will start with "<< chipsInpile << "chips in the pile\n";
    return 0;
}