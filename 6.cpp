#include <iostream>
using namespace std;
class time
{
    private:
    int h, m, s;
    public:
    time()
    {
        h=0;
        m=0;
        s=0;
    }
    time(int a, int b, int c)
    {
        h=a;
        m=b;
        s=c;
    }
    void add(time t1, time t2)
    {
        s = t1.s + t2.s;
        if(s>59)
        {
            s = s - 60;
            m = m+1;
        }
        m = m + t1.m + t2.m;
        if(m>59)
        {
            m = m - 60;
            h++;
        }
        h = h + t1.h + t2.h;
        if(h>12)
        {
            h = h-12;
        }
    }
    void display()
    {
        cout << "Time: " << h << ":" << m << ":" << s ;
    }
};
int main()
{
    int a, b, c;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    time T1(a, b, c);
    a = b = c = 0;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    time T2(a, b, c);
    time T3;
    T3.add(T1, T2);
    T3.display();
}
