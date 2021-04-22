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

        //actualizado info del heroe a mapa
        if(Map.SetPlayerCell(Hero.x, Hero.y))
        {
            Map.Draw();
        }
        else
        {
            Hero.ResetToSafePosition();
            Map.Draw();
        }

        //se dibuja e mapa
        Map.Draw();
    }

    return 0;
}
