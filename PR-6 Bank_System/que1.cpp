#include <iostream>
using namespace std;
class Bank
{
private:
    int accno;
    float amount;
    string name;

public:
    void setdetails(int accno, string name, float amount)
    {
        this->accno = accno;
        this->name = name;
        this->amount = amount;
    }
    int acNo()
    {
        return this->accno;
    }
    void getdetails()
    {
        cout << "Account No :- " << this->accno << endl;
        cout << "Account Holder Name :- " << this->name << endl;
        cout << "Account Amount :- " << this->amount << endl;
    }
    float depostieAmount()
    {
        float amount;
        cout << "Enter the amount you want to deposit :- ";
        cin >> amount;
        this->amount = this->amount + amount;
        return this->amount;
    }
    float withdrawamount()
    {
        float amount;
        cout << "Enter the amount you want to withdraw :- ";
        cin >> amount;
        this->amount = this->amount - amount;
        return this->amount;
    }
};
int main()
{
    Bank b[50];
    int cnt = 0;
    int ch, accno, ac_no;
    float amount;
    int acNo;
    int check;
    string name;
    while (1)
    {
        cout << "press 1 for create account" << endl;
        cout << "press 2 for deposite amount" << endl;
        cout << "press 3 for withdraw amount" << endl;
        cout << "press 4 for amount details" << endl;
        cout << "press 5 exit" << endl;

        cout << "Enter your choice :-";
        cin >> ch;

        if (ch == 5)
        {
            cout << "thank you!!" << endl;
            break;
        }

        switch (ch)
        {
        case 1:
            cout << "Enter the Acount Number :-";
            cin >> accno;
            cout << "Enter the Account Holder Name :-";
            cin >> name;
            cout << "Enter the Acount amount :-";
            cin >> amount;
            b[cnt++].setdetails(accno, name, amount);

            cout << "-----create Account -------" << endl;
            break;

        case 2:
            cout << "Enter the Account Number :-" << endl;
            cin >> ac_no;
            check = 0;

            for (int i = 0; i < cnt; i++)
            {
                if (b[i].acNo() == ac_no)
                {
                    check = 1;
                    b[i].depostieAmount();
                }
            }
            if (check == 0)
            {
                cout << "Please correct account number" << endl;
            }
            cout << "-------deposite amount ---------" << endl;
            break;

        case 3:
            cout << "Enter the Account Number :-" << endl;
            cin >> ac_no;

            for (int i = 0; i < cnt; i++)
            {
                if (b[i].acNo() == ac_no)
                {
                    b[i].withdrawamount();
                }
            }
            cout << "------------ withdraw amount ---------" << endl;
            break;
        case 4:
            cout << "Enter the Account Number :-" << endl;
            cin >> ac_no;
            check = 0;
            for (int i = 0; i < cnt; i++)
            {
                if (b[i].acNo() == ac_no)
                {
                    check = 1;
                    b[i].getdetails();
                    break;
                }
            }
            if (check == 0)
            {
                cout << "Not Found !!" << endl;
            }
            cout << "---------Amount Details-------" << endl;
            break;
        }
    }
}
