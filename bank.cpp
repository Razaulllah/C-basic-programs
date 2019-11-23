#include <iostream>

using namespace std;

class account
{
	public:
		int setbalance(int x);
		void getbalance();
		void credit(int a);
		void debit(int b);
		void printdata();
	private:
		int balance;
};

int account::setbalance(int x)
{
	if (x > 0)
		return balance = x;
	
	else
		return balance = 0;
}

void account::getbalance()
{
	cout << "Now your balance is : " << balance << endl;
}

void account::credit(int a)
{
	balance = balance + a;
}

void account::debit(int b)
{
	balance = balance - b;
}

void account::printdata()
{
	char ch;
	do
	{
		int a, b, num;
		cout << "1. to add balance to your account " << endl;
		cout << "2. to withdraw balance from your account " << endl;
		cin >> num;
		
		switch (num)
		{
			case 1:
				cout << "\nEnter balance to add : ";
				cin >> a;
				credit(a);
				getbalance();
				break;
				
			case 2:
				cout << "\nEnter balance to withdraw : ";
				cin >> b;
				debit(b);
				getbalance();
				break;
				
			default:
				cout << "Invalid input " << endl;
				break;
		}
		
		cout << "----------------------------------------" << endl;
		cout << "If you want to continue press Y or y " << endl;
		cin >> ch;
		
	} while (ch == 'y' || ch == 'Y');
}

int main()
{
	account acc;
	cout << "Current balance : " << acc.setbalance(1000) << endl;
	acc.printdata();
	return 0;
}
