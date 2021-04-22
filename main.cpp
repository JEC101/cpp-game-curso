#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{
    bool isGameOver = false;
    GameMap Map;
    Player Hero;

    cout << "Inicia el juego" << endl;

    while(isGameOver == false)
    {
        //aca es el loop del juego
        Hero.CallIpunt();
        Map.Draw();
    }

    return 0;
}
