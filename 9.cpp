#include <iostream>
using namespace std;

class engineer{
    private:
    int salary;
    int tax;
    public:
    engineer(int a)
    {
        salary = a;
    }
    void display()
    {
        cout << "Engineer salary: " << salary << " Income tax: " << tax << endl; 
    }
    friend class incometax;
};
class doctor{
    private:
    int salary;
    int tax;
    public:
    doctor(int b)
    {
        salary = b;
    }
    void display()
    {
        cout << "Docotrs salary: " << salary << " Income tax: " << tax << endl; 
    }
    friend class incometax;
};
class incometax{
    private:
    int tax;
    public:
    void calc(engineer &a)
    {
        tax = a.salary*0.1;
        a.tax = tax;
        cout << "Income Tax: " << tax << endl;
    }
    void calc(doctor &b)
    {
        tax = b.salary*0.1;
        b.tax = tax;
        cout << "Income Tax: " << tax << endl;
    }
};

int main()
{
    incometax qwerty;
    int sal_a;
    int sal_b;
    cout << "Engineers salary: ";
    cin >> sal_a;
    cout << "Doctors salary: " ;
    cin >> sal_b;
    engineer eng(sal_a);
    doctor doc(sal_b);
    qwerty.calc(eng);
    qwerty.calc(doc);
    eng.display();
    doc.display();
    //end
}
