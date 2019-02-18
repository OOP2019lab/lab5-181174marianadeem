#include"BankAccount.h"
#include<iostream>
#include "stdafx.h"
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
	bankAccount::setBalance(b);
	int w;
	bankAccount::withdraw(2000);
	bankAccount::deposit(25000);
	bankAccount::deposit(5000);
	
}