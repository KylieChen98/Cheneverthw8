#include<iostream>
#include "bankAccount.h"

using namespace std;

int main(int argc, char* argv[])
{
  bankAccount jackAccount("Jack Smith", 50.0);
  bankAccount jillAccount("Jill Brian", 100.0);
  bankAccount bankArray[3] = { bankAccount("Ralph Kramden", 10.0),
  bankAccount("Alice Kramden", 20.0), bankAccount("Ed Norton", 30.0) };

  jackAccount.deposit(30.0);
  jillAccount.deposit(30.0);
  for(int i=0; i<3; i++)
  {
    bankArray[i].deposit(30.0);
  }

  jackAccount.withdraw(20.0);
  jillAccount.withdraw(20.0);
  for(int i=0; i<3; i++)
  {
    bankArray[i].withdraw(20.0);
  }

  cout << "Printing Names and Balances of Each Account." << endl;
  cout << jackAccount.getName() << ": " << jackAccount.getBalance() << endl;
  cout << jillAccount.getName() << ": " << jillAccount.getBalance() << endl;
  for(int i=0; i<3; i++)
  {
    cout << bankArray[i].getName() << ": " << bankArray[i].getBalance() << endl;
  }

  cout << endl;
  cout << "bankApp Completed." << endl;
}
