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
        cout << "Arriba" << endl;
        break;

    case 's':
        y = y + 1;
        cout << "Abajo" << endl;
        break;

    case 'd':
        x = x + 1;
        cout << "Derecha" << endl;
        break;

    case 'a':
        x = x - 1;
        cout << "Izquierda" << endl;
        break;
    }

    cout << "Mi jugador esta en las coordenadas: " << x << "," << y << endl;
}
