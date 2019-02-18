#include "BankAccount.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s="John Doe";
	int i=549002;
	bankAccount myaccount(s,549002);
	cout<<"enter your balance"<<endl;
	int b;
	cin>>b;
	myaccount.setBalance(b);
	myaccount.withdraw(2000);
	myaccount.deposit(25000);
	myaccount.deposit(5000);
	return 0;
}