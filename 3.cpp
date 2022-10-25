#include <iostream>
using namespace std;
class Counter
{
    private:
    int Count;
    public:
    Counter Init(int tempc = 0)
    {
        Count = tempc;
    }
    void count()
    {
        Count++;
    }
    int display()
    {
        return Count;
    }
};

int main()
{
    cout << "1. Intialize count" << endl;
    cout << "2. Increment count" << endl;
    cout << "3. Display count" << endl;
    cout << "4. Exit" << endl;
    Counter C1;
    while(1)
    {
            int a;
    cin >> a;
        if(a == 1)
        {
            int c;
            cout << "Enter number to initialize : ";
            cin >> c;
            C1.Init(c);
        }
        else if(a == 2)
        {
            C1.count();
        }
        else if(a == 3)
        {
            int res;
            res = C1.display();
            cout << "Count = " << res << endl;
        }
        else if (a==4)
        {
            exit(1);
        }
    }
}
