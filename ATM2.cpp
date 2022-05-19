#include<bits/stdc++.h>
#include <conio.h>
using namespace std;

class atm{
    private:
        long int account_no;
        string name;
        int pin;
        int balance;
        string mobile_no;
    
    public:
        void setData(long int account_no_a , string name_a , int pin_a, double balance_a, string mobile_no_a){
            account_no =account_no_a;
            name = name_a;
            pin = pin_a;
            balance = balance_a;
            mobile_no = mobile_no_a;
        }
    
    long int getaccountno(){
        return account_no;
    }
    string getname(){
        return name;
    }
    int getpin(){
        return pin;
    }
    double getbalance(){
        return balance;
    }
    string getmobile(){
        return mobile_no;
    }
    
    // change mobile no.
    void setmob(string mob_prev, string mob_new){
        if(mob_prev == mobile_no) {
            cout << "successfully updated mobile no";
            getch();
        }
        else{
            cout<< " INCORRECT!! OLD MOBILE NO.";
            getch();
        }
    }
    // cash withdrawal
    // withdraw amount_a and decrease balance
    void cashwidr(int amount_a){
        if(amount_a > 0 && amount_a < balance){
            balance = balance - amount_a;
            cout << "COLLECT CASH" << endl;
            cout << "AVAILABLE BALANCE: " << balance;
            getch();
        }
        else{
            cout << "INSUFFICIENT BALANCE";
            getch();
        }
    }
    void deposit(int amount_b){
    	if(amount_b > 0 && amount_b < balance){
    		balance = balance + amount_b;
    		cout << "MONEY HAVE BEEN DEPOSITED"<<endl;
    		cout << "AVAILABLE BALANCE: " << balance;
    		getch();
		}
	}
};


int main(){
    	int choice = 0, enterPIN;		
	long int enterAccountNo;

	system("cls");
	atm user1;
	user1.setData(2109120, "Test", 1111, 8500, "+52 9995471601");

	do
	{
		system("cls");

		cout << endl << "****Welcome to MauATM*****" << endl;
		cout << endl << "Enter Your Account No. ";	  
		cin >> enterAccountNo;
		cout << endl << "Enter PIN: ";				  
		cin >> enterPIN;


		if ((enterAccountNo == user1.getaccountno()) && (enterPIN == user1.getpin()))
		{
			do
			{
				int amount = 0;
				string oldMobileNo, newMobileNo;

				system("cls");
				// user Interface
				cout << endl << "**** Welcome to ATM *****" << endl;
				cout << endl << "Select Options ";
				cout << endl << "1. Check Balance";
				cout << endl << "2. Cash withdraw";
				cout << endl << "3. Deposit";
				cout << endl << "4. Show User Details";
				cout << endl << "5. Update Mobile no.";
				cout << endl << "6. Exit" << endl;
				cin >> choice;						

				switch (choice)					
				{
				case 1:		
					// check current balance in bank account						
					cout << endl << "Your Bank balance is : " << user1.getbalance(); 
																					
					getch();
					break;

				case 2:									
					cout << endl << "Enter the amount :";		
					cin >> amount;
					// calling cashWithdraw function 
					user1.cashwidr(amount);			
					 // passing the withdraw amount							    
					break;
				case 3:
					cout << endl << "Enter the amount to deposit: ";
					cin >> amount;
					user1.deposit(amount);
					break;
				case 4:	
					// getting and printing user detail									
					cout << endl << "*** User Details are :- ";
					cout << endl << "-> Account No " << user1.getaccountno();
					cout << endl << "-> Name      " << user1.getname();
					cout << endl << "-> Balance   " << user1.getbalance();
					cout << endl << "-> Mobile No. " << user1.getmobile();
													
					getch();
					break;

				// change mobile number
				case 5:		
					// take old mobile no						   
					cout << endl << "Enter Old Mobile No. ";
					cin >> oldMobileNo;							
						
					// take new mobile no
					cout << endl << "Enter New Mobile No. ";
					cin >> newMobileNo;							

					user1.setmob(oldMobileNo, newMobileNo);
					break;
							
				case 6:
					// exit application
					exit(0);						

				default:	
					// handle invalid user inputs						
					cout << endl << "Enter Valid Data !!!";
				} 

			} while (1);									
		}

		else
		{
			cout << endl << "User Details are Invalid !!! ";
			getch();
		}
	} while (1);									

	return 0;
}
