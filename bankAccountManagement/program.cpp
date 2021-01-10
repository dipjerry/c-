#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class account
{
    char Customer_name[30];
    int Account_type;
    int account_number;
    int balance;
    int chk_mnth;

public:
    void initialize();
    void display();
    void deposit();
    void interest();
    void withdraw();
    void chk_balance();
    void check();
    void curr_acct(int);
    void sav_acct(int);
};
void account::initialize()
{
    bool status;
    cout << "\nEnter Customer Name : ";
    fgets(Customer_name, sizeof(Customer_name), stdin);
    do
    {
        cout << "\nSelect your account type : \n 1.Saving account \n 2.Current Account\n";
        cin >> Account_type;
        if ((Account_type != 1) && (Account_type != 2))
        {
            cout << "Invalid Choice!! ";
            status = true;
        }
    } while (status);
    cout << "Enter account number : ";
    cin >> account_number;
    cout << "Enter amount to deposit : ";
    cin >> balance;
}
void account::display()
{
    string acc_type;
    cout << setw(20) << left << "Customer Name : " << setw(50) << right << Customer_name << "\n";
    cout << setw(20) << left << "Account Number : " << setw(50) << right << account_number << "\n";
    if (Account_type == 1)
    {
        acc_type = "Saving";
    }
    else
    {
        acc_type = "Current";
    }
    cout << setw(20) << left << "Account Type : " << setw(50) << right << acc_type << "\n";
}
void account::check()
{
    int n;
    if (Account_type == 1)
    {
        cout << "Enter period in year : ";
        cin >> n;
        sav_acct(n);
    }
    else
    {
        cout << "Enter period in month : ";
        cin >> n;
        curr_acct(n);
    }
}
void account::deposit()
{
    int bal;
    cout << "\n Enter the amount to deposit : ";
    cin >> bal;
    balance += bal;
    cout << "\n Amount deposited Successfully\n";
    chk_balance();
};
void account::withdraw()
{
    int wtd;
    chk_balance();
    cout << "\nEnter amount to withdraw : ";
    cin >> wtd;
    if (wtd <= balance)
    {
        balance -= wtd;
        cout << "new ";
        chk_balance();
    }
    else
    {
        cout << "Your balance is low!!";
        return;
    }
};
void account::chk_balance()
{
    cout << "Balance :" << balance;
}
void account::sav_acct(int n)
{
    float new_balance = 0.0;
    display();
    new_balance = balance * (1 + ((2.5 / 100) * n));
    cout << setw(10) << left << "Interest in " << n << " year (2.5%): " << setw(43) << right << new_balance - balance << "\n";
    cout << setw(20) << left << "Balance : " << setw(50) << right << new_balance;
}
void account::curr_acct(int n)
{
    int penalty = 0;
    const int min_bal = 3000;
    display();
    if (balance < 3000)
    {
        penalty = balance - (75 * n);
    }
    cout << setw(10) << left << "Penalty for " << n << " month (Rs.75/m): " << setw(38) << right << penalty << "\n";
    if (penalty < 0)
    {
        cout << setw(20) << left << "Balance : " << setw(50) << right << balance + penalty;
    }
    else if (penalty > 0)
    {
        cout << "Balance : " << balance - penalty;
    }
    else
    {
        cout << "Balance : " << balance;
    }
}
int main()
{
    int ch;
    account ac;
    ac.initialize();
    do
    {
        cout << "\n1. Your Information\n2. Deposit\n3. Withdraw\n4. exit\nEnter your choice\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            ac.check();
            break;
        case 2:
            ac.deposit();
            break;
        case 3:
            ac.withdraw();
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
