#include<iostream>
#include<string.h>
#include"header.h"
using namespace std;
int main()
{
    BankAccount myacc;
    myacc.setcurrentBalance(800000);/*Null constructor call*/
    myacc.Deposit(500);
    myacc.Display();
    cout <<endl;
    BankAccount sam(3456,"jam",200000);/*parameterized constructor call*/
    sam.Withdraw(1000);
    sam.Display();
    cout <<endl;
    BankAccount saman(sam);/*copy constructor call*/
    saman.Display();
    cout <<endl;
    //float e=myacc.Deposit(500);
    //cout <<e;
    //int a=myacc.getaccountNumber();
    //cout <<a<<endl;
    //string b=myacc.getaccountHolder();
    //cout <<b<<endl;;
    //float c=myacc.getcurrentBalance();
    //cout <<c<<endl;;
}
