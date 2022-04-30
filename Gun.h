using namespace std;
#include <math.h>

class Gun{
    public:
    float x, y;
    float r;
    Gun(){r = 25; x = 0; y = 0;}
    void rotate(int theta);
}

void Gun::rotate(int theta)
{
    x = r* cos(theta);
    y = r* sin(theta);
}