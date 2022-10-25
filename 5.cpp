#include <iostream>
using namespace std;
class tollbooth{
    private:
    unsigned int cars_no;
    double total;
    public:
    void init()
    {
        cars_no = 0;
        total = 0;
    }
    void car()
    {
        cars_no++;
        total = total + 0.50;
    }
    void nonpaycar()
    {
        cars_no++;
    }
    void display()
    {
        cout << "Total Cars = " << cars_no << endl;
        cout << "Total Cash = " << total << " dollars" << endl;
    }
};
int main()
{
    cout << "1. Paying Car" << endl;
    cout << "2. Non Paying Car" << endl;
    cout << "3. Escape" << endl;
    tollbooth day1;
    day1.init();
    while(1)
    {
        int a;
        cin >> a;
        if(a==1)
        {
            day1.car();
        }
        else if(a==2)
        {
            day1.nonpaycar();
        }
        else if(a==3)
        {
            day1.display();
            exit(1);
        }
    }
}
