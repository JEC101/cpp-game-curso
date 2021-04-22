#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{
    GameMap Map;
    Player Hero;

    Map.DrawIntro();

    while(Map.isGameOver == false)
    {
        //aca es el loop del juego
        cout << "Mover: w, a, s, d" << endl;
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
