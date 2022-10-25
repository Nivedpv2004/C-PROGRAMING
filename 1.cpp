#include <iostream>
using namespace std;
class complex{
    public:
    int a,b;
    complex(int tempa = 0, int tempb = 0)
    {
        a = tempa;
        b = tempb;
    }
    complex add(complex C1, complex C2)
    {
        complex temp;
        temp.a = C1.a + C2.a;
        temp.b = C1.b + C2.b;
        return temp;
    }
};
int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    complex C1(x,y);
    int c,v;
    cin >> c;
    cin >> v;
    complex C2(c,v);
    complex res; 
    res = res.add(C1, C2);
    cout << "sum of Two Complex numbers x = " << C1.a << " + "
    << "i" << C1.b << " and y = "<< C2.a << " + "
    << "i" << C2.b << " is sum = " << res.a << " + "
    << "i" << res.b;
}
