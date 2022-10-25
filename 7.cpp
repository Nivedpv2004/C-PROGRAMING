#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class account{
    public:
    int acc_no;
    double balance;
    string name;
    string acc_type;
    int a;
    void deposit()
    {
        cout << "Amount to deposit: ";
        double amt;
        cin >> amt;
        balance += amt;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Acc_no: " << acc_no << endl;
        cout << "Balance = " << balance << endl;
    }
};
class curr_acct:public account{
    public:
    curr_acct(string n, int no, int x)
    {
        acc_no = no;
        name = n;
        a = x;
        if(x==1)
        {
            acc_type = "current";
        }
        else if(x==2)
        {
            acc_type = "savings";
        }
    }
    void cheque()
    {
        cout << "amount to withdraw: ";
        int f;
        cin >> f;
        if (balance < f)
        {
            cout << "Insuficient balance" << endl;
        }
        else
        {
            balance -= f;
        }
    }
    void imposepenalty()
    {
        if(balance < 300)
        {
            cout << "You have less balance than minium \n"
            "balance so peanlty has been imposed\n";
            balance-=50;
            cout << "balance = " << balance << endl;
        }
    }
};
class sav_acct:public account{
    public:
    sav_acct(string n, int no, int x)
    {
        acc_no = no;
        name = n;
        a = x;
        if(x==1)
        {
            acc_type = "current";
        }
        else if(x==2)
        {
            acc_type = "savings";
        }
    }
    void withdraw()
    {
        double a;
        cout << "Amount to withdraw: ";
        cin >> a;
        if(balance < a)
        {
            cout << "Insuficient balance" << endl;
        }
        else
        {
            balance -= a;
        }
    }
    void cal_interest()
    {
        int t;
        cout << "Enter number of years: ";
        cin >> t;
        balance = balance + (pow((1 + 10 / 100), t));
    }
};
int main()
{
    string name;
    int acc_no;
    int x;
    cout << "Name: ";
    cin >> name;
    cout << "Acc_no: ";
    cin >> acc_no;
    cout << "1. Current account" << endl;
    cout << "2. Savings account" << endl;
    cin >> x;
    if(x==1)
    {
        curr_acct curr(name, acc_no, x);
        while (1)
        {
            cout << "1. Deposit" << endl;
            cout << "2. cheque" << endl;
            cout << "3. check balance" << endl;
            cout << "4. exit" << endl;
            int c;
            cin >> c;
            if(c==1)
            {
                curr.deposit();
            }
            else if(c==2)
            {
                curr.cheque();
            }
            else if(c==3)
            {
                curr.display();
            }
            else if(c==4)
            {
                exit(1);
            }
            curr.imposepenalty();
            cout << "________________________________________" << endl;
        }
    }
    else if(x==2)
    {
        sav_acct sav(name, acc_no, x);
        while(1)
        {
            cout << "1. Deposit" << endl;
            cout << "2. withdraw" << endl;
            cout << "3. check balance" << endl;
            cout << "4. Amount after interest" << endl;
            cout << "5. exit" << endl;
            int b;
            cin >> b;
            if(b==1)
            {
                sav.deposit();
            }
            else if(b==2)
            {
                sav.withdraw();
            }
            else if(b==3)
            {
                sav.display();
            }
            else if(b==4)
            {
                sav.cal_interest();
                sav.display();
            }
            else if(b==5)
            {
                exit(1);
            }
            cout << "________________________________________" << endl;
        }
    }
};
