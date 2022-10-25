#include <iostream>
#define pi 3.14285
using namespace std;
class solid{
    private:
    float vol;
    public:
    void volume(int l)
    {
        vol = l*l*l;
    }
    void volume(float r)
    {
        vol = (4/3)*pi*r*r*r;
    }
    void volume(float r,float h)
    {
        vol = pi*r*r*h;
    }
    void volume(int l, int b, float h)
    {
        vol = l*b*h;
    }
    void display()
    {
        cout << vol;
    }
};
int main()
{
    int l, b;
    float h, r;
    cout << "1. Cube" << endl;
    cout << "2. Sphere" << endl;
    cout << "3. Cylinder" << endl;
    cout << "4. Rectangular Box" << endl;
    int a;
    cin >> a;
    solid shape;
    if(a==1)
    {
        cout << "length: ";
        cin >> l;
        shape.volume(l);
    }
    else if(a==2)
    {
        cout << "radius: ";
        cin >> r;
        shape.volume(r);
    }
    else if(a==3)
    {
        cout << "radius, height: ";
        cin >> r;
        cin >> h;
        shape.volume(r, h);
    }
    else if (a==4)
    {
        cout << "length, breadth, height: ";
        cin >> l;
        cin >> b;
        cin >> h;
        shape.volume(l, b, h);
    }
    shape.display();
}
