#include "GameMap.h"
#include <fstream>
#include <iostream>
using namespace std;

GameMap::GameMap()
{
    //ctor
    PlayerCell = NULL;
    LoadMapFromFile();
    isGameOver = false;
}

void GameMap::Draw()
{

    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << cells[i][j].id;
        }
        cout << endl;
    }
}

bool GameMap::SetPlayerCell(int PlayerX, int PlayerY)
{
    if(cells[PlayerY][PlayerX].IsBlocked() == false)
    {
        if(cells[PlayerY][PlayerX].id == '$')
        {
            DrawVictory();
            isGameOver = true;
            return true;
        }
        else
        {
            if(PlayerCell != NULL)
            {
                PlayerCell->id = 0;
            }

            PlayerCell = &cells[PlayerY][PlayerX];
            PlayerCell->id = 5;

            return true;
        }
    }
    else
    {
        return false;
    }

   // cout << "Las coordenandas del jugador están en; " << PlayerX << "," << PlayerY << endl;
}

void GameMap::DrawIntro()
{
    string line;
    ifstream MyFile("Intro.txt");

    if(MyFile.is_open())
    {

        while(getline(MyFile, line))
        {
            cout << line << endl;
        }
        cin >> line;
        Draw();
    }
    else
    {
        cout << "FATAL ERROR: INTO COULD NOT BE OPEN!!!" << endl;
    }
}

void GameMap::DrawVictory()
{
    string line;
    ifstream MyFile("Ending.txt");

    if(MyFile.is_open())
    {

        while(getline(MyFile, line))
        {
            cout << line << endl;
        }
        cin >> line;
    }
    else
    {
        cout << "FATAL ERROR: Victory COULD NOT BE OPEN!!!" << endl;
    }
}

void GameMap::LoadMapFromFile()
{
    /*ofstream FileCreated("Map.txt");

    if(FileCreated.is_open())
    {

    }
    else
    {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE CREATED!!!" << endl;
    }*/

    string line;
    int row = 0;
    ifstream MyFile("Map.txt");

    if(MyFile.is_open())
    {

        while(getline(MyFile, line))
        {
            for(int p = 0; p < line.length(); p++)
            {
                if(line[p] == '0')
                {
                    cells[row][p].id = 0;
                }
                else
                {
                    cells[row][p].id = line[p];
                }

            }

            row++;
        }

    }
    else
    {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE OPEN!!!" << endl;
    }
}
