#include <iostream>
using namespace std;

float areaofcircle(float radius)
{
    return 3.14 * radius * radius;
}
float areaoftriangle(float height, float width)
{
    return 0.5 * height * width;
}
float areaofrectangle(float height, float breath)
{
    return height * breath;
}
int main()
{
    float fullarea = areaofrectangle(10, 10) + areaoftriangle(5, 12);
    float subarea =areaofcircle(2) + areaofrectangle(3, 7) + areaoftriangle(2, 3);
    cout << fullarea - subarea << endl;
}