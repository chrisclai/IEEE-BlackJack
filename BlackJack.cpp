// Blackjack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include <stdlib.h>
#include <time.h>

int randnum()
{
    return rand() % 11 + 1;
}

int main()
{
    srand(time(0));
    string startvar = "";
    int score1 = 0;
    int score2 = 0;
    int randnum1 = 0;
    int randnum2 = 0;
    bool endgame = false;

    cout << "Welcome to BlackJack C++! Type \"start\" to begin playing! Have fun!" << endl;
    while (startvar != "start")
    {
        cin >> startvar;
    }
    cout << endl;

    cout << "Setting up game..." << endl;
    cout << "Each player gets two cards to start off the game. Here are the cards." << endl;
    randnum1 = randnum();
    randnum2 = randnum();
    score1 = randnum1 + randnum2;
    cout << "Player 1. You have drawn two cards: [" << randnum1 << "] and [" << randnum2 << "]. Your current score is: " << score1 << ". Try to keep this score at or under 21!" << endl;
    randnum1 = randnum();
    randnum2 = randnum();
    score2 = randnum1 + randnum2;
    cout << "Player 2. You have drawn two cards: [" << randnum1 << "] and [" << randnum2 << "]. Your current score is: " << score2 << ". Try to keep this score at or under 21!" << endl;
    cout << endl;

    while (score1 < 21 && score2 < 21 && endgame == false)
    {
        randnum1 = 0;
        randnum2 = 0;

        cout << "Player 1, would you like to take a card? (Yes/No)" << endl;
        while (startvar != "Yes" && startvar != "No")
        {
            cin >> startvar;
        }
        if (startvar == "Yes")
        {
            randnum1 = randnum();
            score1 += randnum1;
            cout << "You have recieved a card." << endl;
        }
        else
        {
            cout << "You have chosen not to take a card." << endl;
        }
        cout << endl;
        startvar = " ";

        cout << "Player 2, would you like to take a card? (Yes/No)" << endl;
        while (startvar != "Yes" && startvar != "No")
        {
            cin >> startvar;
        }
        if (startvar == "Yes")
        {
            randnum2 = randnum();
            score2 += randnum2;
            cout << "You have recieved a card." << endl;
        }
        else
        {
            cout << "You have chosen not to take a card." << endl;
        }
        cout << endl;
        startvar = " ";

        cout << "Here are the results!" << endl;
        if (randnum1 == 0)
        {
            cout << "Player 1, you have decided not to take a card. Your current score is: " << score1 << "." << endl;
        }
        else
        {
            cout << "Player 1, you chose a card! Your card is: [" << randnum1 << "]. Your current score is: " << score1 << "." << endl;
        }
        if (randnum2 == 0)
        {
            cout << "Player 2, you have decided not to take a card. Your current score is: " << score2 << "." << endl;
        }
        else
        {
            cout << "Player 2, you chose a card! Your card is: [" << randnum2 << "]. Your current score is: " << score2 << "." << endl;
        }
        cout << endl;

        if (randnum1 == 0 && randnum2 == 0)
        {
            endgame = true;
        }
    }

    if (score1 > 21 && score2 <= 21)
    {
        cout << "Oops! Player 1, you have busted! Player 2 wins!" << endl;
    }
    else if (score2 > 21 && score1 <= 21)
    {
        cout << "Oops! Player 2, you have busted! Player 1 wins!" << endl;
    }
    else if (score1 > 21 && score2 > 21)
    {
        cout << "Oops! Both players have busted! It's a tie!" << endl;
    }
    else
    {
        if (score1 > score2)
        {
            cout << "Player 1 wins with a score of: " << score1 << "! Congrats!";
        }
        else if (score2 > score1)
        {
            cout << "Player 2 wins with a score of: " << score2 << "! Congrats!";
        }
        else
        {
            cout << "It's a tie! Both players have a score of: " << score1 << "!";
        }
    }
    cout << endl;

    cout << "Thanks for playing BlackJack C++! Come again next time!" << endl;   
}
