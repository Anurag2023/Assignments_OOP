#include<iostream>
#include<stdio.h>
using namespace std;

class account {
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balace can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{

	int openBalance;
	cout << "enter the amount you want to start A account with \n";
	cin >> openBalance;
	account A(openBalance);
	int paisa;
	cout << "enter the amount you want to add in A account \n";
	cin >> paisa;
	A.Credit(paisa);
	cout << A.getBalance() << "\n";
	double paisa1 ;
	cout << "enter the amount you want to remove in A account \n";
	cin >> paisa1;
	A.Debit(paisa1);
	cout << A.getBalance() << "\n";
	cout << "enter the amount you want to start B account with \n";
	cin >> openBalance;
	account B(openBalance);
	cout << "enter the amount you want to add in B account \n";
	cin >> paisa;
	B.Debit(paisa);
	cout << B.getBalance() << "\n";
	cout << "enter the amount you want to remove in B account \n";
	cin >> paisa1;
	B.Debit(paisa1);
	cout << B.getBalance() << "\n";






	return 0;
}
