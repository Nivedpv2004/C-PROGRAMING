#include <iostream>
using namespace std;
class rectangle{
    private:
    int l,b;
    public:
    rectangle(int templ =0, int tempb =0)
    {
        l = templ;
        b = tempb;
    }
    int area()
    {
        int area;
        area = l * b;
        return area;
    }
    rectangle(rectangle &R)
    {
        l = R.l;
        b = R.b;
    }
    ~rectangle()
    {
        cout << "Destructor" << endl;
    }

};
int main()
{
    int x,y;
    cin >> x >> y;
    rectangle R1(x,y);
    rectangle R2 = R1;
    rectangle R3(5,8);
    cout << "Area of R1 = " << R1.area() << endl;
    cout << "Area of R2 = " << R2.area() << endl;
    cout << "Area of R3 = " << R3.area() << endl;
}