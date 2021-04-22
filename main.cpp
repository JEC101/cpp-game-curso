#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
    bool isGameOver = false;
    Player Hero;

    cout << "Inicia el juego" << endl;

    while(isGameOver == false)
    {
        //aca es el loop del juego
        Hero.CallIpunt();
    }

    return 0;
}
