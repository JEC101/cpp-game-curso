#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();

        void CallIpunt();
        void ResetToSafePosition();

        int x, y;
        int lastX, lastY;


    protected:



    private:
};

#endif // PLAYER_H
