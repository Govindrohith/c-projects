#include <iostream>
using namespace std;

double initial_Checking = 0;
double initial_Savings = 0;

int main()
{
    cout << "Enter initial balance for checking account: ";
    cin >> initial_Checking;
    if (initial_Checking < 0)
    {
        cout << "Initial balance for Checking cannot be negative,Enter Amount greater than or equal to 0." << endl;
        initial_Checking = 0;
    }

    cout << "Enter initial balance for savings account: ";
    cin >> initial_Savings;
    if (initial_Savings < 0)
    {
        cout << "Initial balance for Savings cannot be negative,Enter Amount greater than or equal to 0." << endl;
    }

    char transaction_Type;
    double amount;
    if (initial_Checking >= 0 && initial_Savings >= 0)
    {

        do
        {
            cout << "Enter transaction type (deposit[d], withdrawal[w], transfer[t], Exit[e]): ";
            cin >> transaction_Type;

            if (transaction_Type == 'e' || transaction_Type == 'E')
                break;

            char account_Type;
            cout << "Enter account type (checking[c] or savings[s]): ";
            cin >> account_Type;

            cout << "Enter amount: ";
            cin >> amount;

            if (transaction_Type == 'd' || transaction_Type == 'D')
            {
                if (account_Type == 'c' || account_Type == 'C')
                {
                    if (amount > 0)
                        initial_Checking += amount;
                    else
                        cout << "Invalid amount for deposit." << endl;
                }
                else if (account_Type == 's' || account_Type == 'S')
                {
                    if (amount > 0)
                        initial_Savings += amount;
                    else
                        cout << "Invalid amount for deposit." << endl;
                }
                else
                {
                    cout << "Invalid account type." << endl;
                }
            }
            else if (transaction_Type == 'w' || transaction_Type == 'W')
            {
                if (account_Type == 'c' || account_Type == 'C')
                {
                    if (amount > 0 && amount <= initial_Checking)
                        initial_Checking -= amount;
                    else
                        cout << "Insufficient funds." << endl;
                }
                else if (account_Type == 's' || account_Type == 'S')
                {
                    if (amount > 0 && amount <= initial_Savings)
                        initial_Savings -= amount;
                    else
                        cout << "Insufficient funds." << endl;
                }
                else
                {
                    cout << "Invalid account type." << endl;
                }
            }
            else if (transaction_Type == 't' || transaction_Type == 'T')
            {
                if (account_Type == 'c' || account_Type == 'C')
                {
                    if (amount > 0 && amount <= initial_Checking)
                    {
                        initial_Checking -= amount;
                        initial_Savings += amount;
                    }
                    else
                    {
                        cout << "Insufficient funds." << endl;
                    }
                }
                else if (account_Type == 's' || account_Type == 'S')
                {
                    if (amount > 0 && amount <= initial_Savings)
                    {
                        initial_Savings -= amount;
                        initial_Checking += amount;
                    }
                    else
                    {
                        cout << "Insufficient funds." << endl;
                    }
                }
                else
                {
                    cout << "Invalid account type." << endl;
                }
            }
            else
            {
                cout << "Invalid transaction type." << endl;
            }

            cout << " Your Checking account balance: $" << initial_Checking << endl;
            cout << " Your Savings account balance: $" << initial_Savings << endl;
        } while (true);
    }

    return 0;
}
