#include<iostream>
using namespace std;

struct point{
    float x, y;
    point(float x,float y)
    {
        this->x = x;
        this->y = y;
    }
}*p1,*p2,*p3;

point * sum(point *p1,point *p2)
{
    return new point(p1->x+p2->x, p1->y+p2->y);
}

int main()
{
    float x,y;
    cout << "Enter x coodinate of first point";
    cin >> x;
    cout << "Enter y coodinate of first point";
    cin >> y;
    p1 = new point(x,y);
    cout << "Enter x coodinate of second point";
    cin >> x;
    cout << "Enter y coodinate of second point";
    cin >> y;
    p2 = new point(x,y);
    p3 = sum(p1,p2);
    cout << "Third point is :- "<<"("<<p3->x<<","<<p3->y<<")\n";
    return 0;
}