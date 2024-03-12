#include<bits/stdc++.h>
using namespace std;

struct point
{
    int x,y;

};

void print(point p)
{
    cout << p.x << " " << p.y << "\n";
}
void truyenthamtri(point p)
{
    p.x=5;
    p.y=10;

}
void truyenthambien(point& p)
{
    p.x=5;
    p.y=10;
}

point mid_point(const point& a, const point& b)
{
    point res;
    res.x = (a.x+b.x)/2;
    res.y = (a.y+b.y)/2;
    return res;
}
struct Rect
{
    int x,y,h,w;
    bool contains(const point& p)
    {
        int u = x+w;
        int v = y+h;
        return (x <= p.x && p.x <= u && y <= p.y && p.y <= v );
    }
};

struct Ship
{
    Rect hcn;
    string id;
    int dx,dy;
    void move()
    {
        hcn.x+=dx;
        hcn.y+=dy;
    }

};

void display(const Ship& ship)
{
    cout << ship.id << "\n";
    cout << ship.hcn.x << " " << ship.hcn.y << " " << ship.hcn.x + ship.hcn.w << " " << ship.hcn.y + ship.hcn.h << "\n";
}
int main()
{
    point p;
    p.x=10;
    p.y=12;
    print(p);
    truyenthamtri(p);
    print(p);
    truyenthambien(p);
    print(p);
    point a{8 , 9 };
    point b{10 ,11};
    print(mid_point(a,b));
    Rect hcn{1,1,15,15};
    cout << hcn.contains(a);

}
