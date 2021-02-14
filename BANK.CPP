#include<iostream>
#include<stdio.h>
using namespace std;

class Bank
{
private:

int acno;
long balance;
char name[30];
public:
 void openaccount()
 {
 cout<<"account no:";
 cin>>acno;
 cout<<"name:";
 cin>>name;
 cout<<"balance:";
 cin>>balance;
 }
 void showaccount()
 {
 cout<<"account no:"<<acno<<endl;
 cout<<"name:"<<name<<endl;
 cout<<"balance:"<<balance<<endl;
 }
  void deposit()

  {long amt;
  cout<<"enter amount you want to deposit:";
  cin>>amt;
  balance=balance+amt;
  cout<<"update balance:"<<balance<<endl;
  }
  void withdraw()
  {
  long amt;
  cout<<"enter amount you want to withdraw:";
  cin>>amt;
  if(amt<=balance)
    balance=balance-amt;
  else
  cout<<"less balance......";
  }
  int search(int);
  };
  int Bank::search(int a)
  {
  if(acno==a)
  {
  showaccount();
  return(1);
  }
  return(0);
  }
  int main()
  {

  int i,found=0,ch,a;
  Bank c[3];
  for(i=0;i<=2;i++)
  {
  c[i].openaccount();
  }
  do{

     cout<<"1:Display All\n2:by account no:\n3.deposit\n4.withdraw\n5.exit"<<endl;
     cout<<"ur choice?";
     cin>>ch;
     switch(ch)
     {
     case 1:
     for(i=0;i<=2;i++)
     {
     c[i].showaccount();
     }
     break;
     case 2:
     cout<<"account no:";
     cin>>a;
     for(i=0;i<=2;i++)
     {
     found=c[i].search(a);
     if(found)
     break;
     }
     if(!found)
     cout<<"record not found:";
     break;
     case 3:
     cout<<"account no to deposit Amount:";
     cin>>a;
     for(i=0;i<=2;i++)
     {
     found=c[i].search(a);
     if(found)
     {
     c[i].deposit();
     break;
     }
    }
     if(!found)
     cout<<"record not found:";
     break;
     case 4:
     cout<<"account no to withdraw Amount:";
     cin>>a;
     for(i=0;i<=2;i++)
     {
     found=c[i].search(a);
     if(found)
     {
     c[i].withdraw();
     break;
     }
    }
     if(!found)
     cout<<"record not found:"<<endl;
     break;
case 5:
cout<<"Have a Nice Day"<<endl;
break;
default:
cout<<"wrong option"<<endl;
}
//getc();
}
while(ch!=5);
return 0;
}
