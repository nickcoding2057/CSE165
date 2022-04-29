// This is the basic class for the birds
// x and y are coordinates
// hp is how many hits it takes to kill
// value is how many points it is worth
// isHit tells if the incoming shot landed

using namespace std;
#include <stdlib.h>

class Bird{
    public:
    Bird();
    Bird(float a, float b);
    bool isHit(float a, float b);
    float x, y, hp, value, trajX, trajY;
    void updateTrajectory(x += trajX; y += trajY;);
}

Bird::Bird()
{
    trajX = rand() % 100;
    trajY = rand() % 100;
    x = y = 100;
    hp = 1;
    value = 5;
}

// Non-default constructor for creating a bird with a x,y coordinate
Bird::Bird(float a, float b)
{
    x = a;
    y = b;
    hp = 1;
    value = 5;
}

bool Bird::isHit(float a, float b)
{
    if (x == a && y == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

