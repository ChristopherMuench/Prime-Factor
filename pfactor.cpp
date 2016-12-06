/*
Code written by Christopher Muench
October 29 2016
Language: C++
G++ (minGW) compiler
Stack header and include file not written by me, credit to
Mr. Larry Nyhoff
*/
#include <iostream>
using namespace std;

#include "Stack.h"

int main (void)
{

    int userNum = 0; //variable to get the number from user to be factored
    int divide = 2;

    Stack factorStack; //stack created - empty

    cout <<"Please enter a number to be factored: "<<endl;
    cin >>userNum;

    while (userNum != 1) //enter while loop to find factors while num != 1
    {
        if (userNum % divide == 0) //determine if divide is a factor of number
        {
            factorStack.push (divide); //push factor into stack
            userNum = userNum / divide; //divide usernum to new value
        }
        else
        {
            divide++; //increment divide to check next number
        }

    }

    factorStack.display (cout); //display stack of factors

    return 0;
}
