#include <iostream>
#include <cmath>
using namespace std;
class coord
{
public:
    int x;
    int y;
};
int main()
{
    cout << "NAME : ANANT TRIPATHI\nROLL NO. : 2105692\nCSE 16" << endl;
    coord point[2];
    cout << "ENTER x AND y ORDINATE OF TWO POINT : ";
    for (int i = 0; i < 2; i++)
    {
        cin >> point[i].x >> point[i].y;
    }
    float dist;
    dist = sqrt(pow(point[1].x - point[0].x, 2) + pow(point[1].y - point[0].y, 2));
    cout << "DISTANCE BETWEEN POINT IS : " << dist << endl;
    return 0;
}