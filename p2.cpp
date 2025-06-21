#include <iostream>
using namespace std;
class Account
{
   protected:
   string name;
   int accNo;
   double balance;
   public:
   Account(string n,int no,double b):name(n),accNo(no),balance(b)
   {}
   void deposit(double amt)
   {
    balance += amt;
   }
   void show()
   {
    cout<<"Balance:"<<balance<<endl;
   }
   virtual void withdraw(double amt) = 0;
   };
   class SavAcct : public Account{
    public:
    SavAcct(string n,int no,double b):Account(n,no,b)
    {}
    void addInterest()
    {
        balance *= 1.04;
    }
    void withdraw(double amt)
    {
        if(amt <= balance)
        balance -= amt;
        else
        cout << "balance is not enough";
    }
};
class CurAcct : public Account
{
public:
    CurAcct(string n,int no,double b) : Account(n,no,b){}
    void withdraw(double amt)
    {
        if(amt <= balance)
        {
            balance -= amt;
            if (balance < 500)
            {
                balance -= 50;
                cout<<"penalty of rupees 50";
            }
        }
               else cout << "not enough balance";
    }
};         
int main()
         {
            SavAcct sa("Aniket",1,1000);
            sa.deposit(500); sa.addInterest(); sa.withdraw(300); sa.show();
            CurAcct ca("Rohan", 2, 600);
            ca.deposit(100); ca.withdraw(400); ca.withdraw(500); ca.show();
            return 0;
         }

        
    


   





