// q1_18l1174.cpp : Defines the entry point for the console application.
//

#include"BankAccount.h"
#include<iostream>
#include "stdafx.h"
#include <string>
using namespace std;

void bankAccount::setname(string n)//it will set the accounts name
{
	name=n;
}
void bankAccount::setid(int i)//it will set accounts id
{
	id=i;
}
void bankAccount::setBalanceLimit(int bl)//it will set  balance limit
{
	int temp=balance;
	balance=bl;
	if(balance!=0)//it will copy the array if the balance limit has already been set before 
	{
		int *trackoftransactions=new int [bl];
		for(int i=0;i<temp;i++)
		{
			trackoftransactions[i]=transactions[i];
		}
		delete[]transactions;
		delete transactions;
		int *transactions=new int [bl];
		for(int i=0;i<temp;i++)
		{
			transactions[i]=trackoftransactions[i];
		}
		delete []trackoftransactions;
		delete trackoftransactions;
	}
}
void bankAccount::setBalance(int b)//it will set the balance
{
	balance=b;
}
bankAccount::bankAccount(string n, int i)//constructor
{	setname(n);
setid(i);
cap=10;
int * transactions=new int[cap];
int currentTransaction=0;
float balance=0;
int balanceLimit=20000;
}
void bankAccount::print()const//print the info about bank account
{
	cout<<"name"<<name<<endl;
	cout<<"id"<<id<<endl;
	cout<<"your balance is"<<balance;
	cout<<"total number of transactions taken place"<<currentTransaction;
	for(int i=0;i<currentTransaction;i++)
	{
		cout<<"transaction number"<<i<<transactions[i];
	}
}
void bankAccount::withdraw(int w)//withdraw amount from the account
{
	if(w<balance&&w<balancelimit)
	{
		balance=balance-w;
		transaction[currenttransaction]=-w;
		currenttransaction++;
		cout<<"transaction successful"<<endl;
	}
	else 
		cout<<"transaction unsuccessful:insufficient balance"<<endl;
}
void bankAccount::deposit(int d)//deposit amount  to the account
{
	if(d+balance<=balancelimit)
	{
		balance=balance+d;
		transaction[currenttransaction]=d;
		currenttransaction++;
		cout<<"transaction successful"<<endl;
	}
	else 
		cout<<"please increase the limit of balance"<<endl;
	int bl;
	cin>>bl;
	setBalanceLimit(int bl);
}
~bankAccount()//destructor
{
	cout<<"destructor has been invoked";
	delete[]transactions;
	delete transactions;
	string name="";
	int i=0;
	float balance=0;
	int cap=0;
	int currentTransaction=0;
	int balancelimit=0;
}





