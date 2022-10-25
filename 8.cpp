#include <iostream>
using namespace std;
class DF;
class DM{
    public:
    double m;
    double cm;
    DM()
    {
        m=0;
        cm=0;
    }
    void set()
    {
        cout << "meters: ";
        cin >> m;
        cm = m * 100;
    }
    void display()
    {
        cout << "meters: " << m << endl;
        cout << "centimeters: " << cm << endl;
    }
    friend void sum(DM x,DM a, float b);
    friend void sum(DM a,DF b);
    friend void sum(DM x, DM y, DF z);
    friend void sum(DF x, DF y, DM z);
};
class DF{
    public:
    double ft;
    double inc;
    DF()
    {
        ft = 0;
        inc = 0;
    }
    void set()
    {
        cout << "feet: ";
        cin >> ft;
        inc = ft  * 12;
    }
    void display()
    {
        cout << "meters: " << ft << endl;
        cout << "centimeters: " << inc << endl;
    }
    friend void sum(DM x,DM a, float b);
    friend void sum(DM a,DF b);
    friend void sum(DM x, DM y, DF z);
    friend void sum(DF x, DF y, DM z);
};
void sum(DM x, DM a, float b)
{
    x.m = a.m + b;
    x.cm = (a.m + b)* 100;
    cout << "meters: " << x.m << endl;
    cout << "centimeters: " << x.cm << endl;
}
void sum(DM x, int a, DM b)
{
    x.m = a + b.m;
    x.cm = (b.m + a)* 100;
    cout << "meters: " << x.m << endl;
    cout << "centimeters: " << x.cm << endl;
}
void sum(DM x, DM y, DF z)
{
    x.m = y.m +(z.ft * 0.3048);
    x.cm = (y.m +(z.ft * 0.3048))*100;
    cout << "meters: " << x.m << endl;
    cout << "centimeters: " << x.cm << endl;
}
void sum(DF x, DF y, DM z)
{
    x.ft = y.ft + (z.m * 3.28084);
    x.inc = (y.ft + (z.m * 3.28084))*12;
    cout << "feet: " << x.ft << endl;
    cout << "inches: " << x.inc << endl;
}
int main()
{
    DM DM1;
    DM DM2;
    DM1.set();
    sum(DM2 ,DM1,10.5);

    DM DM3;
    DM DM4;
    DM3.set();
    sum(DM4, 10.5, DM3);

    DM DM5;
    DF DF1;
    DF1.set();
    sum(DM5, DM1, DF1);

    DF DF2;
    DM DM6;
    DM6.set();
    sum(DF2, DF1, DM6);
}
