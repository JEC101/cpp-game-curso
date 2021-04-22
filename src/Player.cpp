#include "Player.h"
#include <iostream>
using namespace std;

Player::Player()
{
    x = 1;
    y = 1;
}

void Player::CallIpunt()
{
    char UserInput = ' ';

    cin >> UserInput;

    switch(UserInput)
    {
    case 'w':
        y = y - 1;
        break;

    case 's':
        y = y + 1;
        break;

    case 'd':
        x = x + 1;
        break;

    case 'a':
        x = x - 1;
        break;
    }
}
