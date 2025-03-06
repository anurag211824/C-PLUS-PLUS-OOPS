#include <iostream>

using namespace std;
class Bank_account
{
public:
    string name_of_depositor;
    int account_number;
    string type_of_account;
    float balance_amount;
    float remaining_amount;
    float amount_to_be_withdrawn;
    void assign_intial_values()
    {
        cout << "enter name of depositor:";
        cin >> name_of_depositor;
        cout << "enter account number:";
        cin >> account_number;
        cout << "enter the type of acount:";
        cin >> type_of_account;
    }
    void deposit_an_amount()
    {
        cout << "enter the amount to be deposited:";
        cin >> balance_amount;
    }
    void withdraw_an_amount()
    {

        if (balance_amount >= amount_to_be_withdrawn)
        {
            cout << "enter the amount to be withdrawn:";
            cin >> amount_to_be_withdrawn;
            remaining_amount = balance_amount - amount_to_be_withdrawn;
        }
    }
    void display_name_and_balance()
    {
        cout << "name of account holder:" << name_of_depositor << endl;
        cout << "amount withdrawn:" << amount_to_be_withdrawn << endl;
        cout << "remaining balance:" << remaining_amount << endl;
    }
};

int main()
{

    Bank_account anurag;
    anurag.assign_intial_values();
    anurag.deposit_an_amount();
    anurag.withdraw_an_amount();
    anurag.display_name_and_balance();
    return 0;
}