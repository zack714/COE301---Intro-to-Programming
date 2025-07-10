// aruba_hw7_prob3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Health, damage, healing

#include <iostream>
#include <random>
#include <string>
using namespace std;

void attack(double, double, int);

int main()
{
    double uHealth = 100.0;
    double cHealth = 100.0;
    int move;
    

    srand(time(NULL));

    cout << "Hello! " << endl;
    while (uHealth != 0 && cHealth != 0) {
        cout << "Enter your value for move: ";
        cin >> move;
        while (move < 1 || move>3) {
            cout << "That is an invalid input. Move must be 1, 2, or 3. Please enter one of those integers." << endl;
            cin >> move;
        }

        attack(uHealth, cHealth, move);
        if (cHealth == 0 || uHealth == 0) {
            break;
        }

        int cMove = rand() % 3 + 1;
        attack(cHealth, uHealth, cMove);
    }
    if (uHealth == 0) {
        cout << "The computer defeated the user. Its health was " << cHealth <<
            "." << endl;
    }
    else if (cHealth == 0) {
        cout << "The user defeated the computer. The User's health was " << uHealth << "." << endl;
    }

    return 0;

    
}

void attack(double& attackerHealth, double& defenderHealth, int move) {
    double defH = defenderHealth;
    double attH = attackerHealth;
    int attack;
    int heal;

    switch (move) {
    case 1:
        attack = rand() % 30 + 15;
        defH -= double(attack);
        cout << "The defender lost " << attack << " health points!" << endl;
    case 2:
        attack = rand() % 50;
        defH -= double(attack); cout << "The defender lost " << attack << " health points!" << endl;
        cout << "The defender lost " << attack << " health points!" << endl;
    case 3:
        heal = rand() % 15 + 5;
        attH += double(heal);
        cout << "The attacker gained " << heal << " health points!" << endl;
    }
    if (attH > 100) {
        attH = 100;
    }
    else if (defH <= 0) {
        defH = 0;
    }
}

