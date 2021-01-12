#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
class bank
{
    char name[30];
    char account_type[30];
    int account_number;
    int balance;
public:
    bank();
    void inatialize();
    void deposit();
    void check();
    void display();
};
bank::bank()
{
    char *name = new char[30];
    char *account_type = new char[30];
    account_number = 0;
    balance = 0;
}
void bank::inatialize()
{
    cout << "\n Enter the Account holder name : ";
    fgets(name,sizeof(name),stdin);
    cout << "\n Enter Account type : ";
    cin>>account_type;
    cout << "\n Enter Account Number : ";
    cin >> account_number;
    cout << "\n Enter balance to deposit : ";
    cin >> balance;
}
void bank::deposit()
{
    int bal;
    cout << "\n Enter the amount to deposit : ";
    cin >> bal;
    balance += bal;
    cout << "\nAmount deposited Successfully\n";
    cout << "Your new balance is : " << balance << endl;
}
void bank::check()
{
    int bal;
    cout << "\n Your Balance:" << balance << "\nEnter amount to withdraw:";
    cin >> bal;
    if (bal <= balance)
    {
        balance -= bal;
        cout << "\nRemaining Balance:" << balance;
    }
    else
    {
        cout << "\n Your Account balance is Low";
        exit(0);
    }
}
void bank::display()
{
    cout << "\nName : " << name;
    cout << "\nBalance : " << balance;
}
int main()
{
    int ch;
    bank bnk;
    bnk.inatialize();
    do
    {
        cout << "\n1. Your Information\n2. Deposit\n3. Withdraw\n4. exit\nEnter your choice\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            bnk.display();
            break;
        case 2:
            bnk.deposit();
            break;
        case 3:
            bnk.check();
            break;
        case 4:
            exit(EXIT_SUCCESS);
            break;
        default:
            cout << "\n Wrong Choice";
            break;
        }
    } while (ch != 5);
    return 0;
}
