#pragma once
#include<iostream>
#include "stdafx.h"
#include <string>
using namespace std;

class bankAccount{
private:
	string name;
	int id;
	float balance;
	int * transactions;
	int cap;
	int currentTransaction;
	int balancelimit;
	void setname(string n);
	void setid(int i);
	void withdraw(int w);
	void deposit(int d);
public:
	bankAccount(string n, int i);
	void print()const;
	void setBalanceLimit(int bl);
	void setBalance(int b);
	void withdraw(int w);
	~bankAccount();
};