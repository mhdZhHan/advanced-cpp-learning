// ATM Application
#include<iostream>
using namespace std;

void show_menu(){
    cout<<"********MENU********"<<endl;
    cout<<"1. Check balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"********************"<<endl;
}

int main(){
    // check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;

    do {
        show_menu();
        cout<<"Option: ";
        cin>>option;
        system("clear");
        switch(option){
            case 1: 
                cout<<"Balance is: ₹ "<<balance<<endl;
                break;
            case 2: 
                cout<<"Deposit amount: ";
                double deposit_amount;
                cin>>deposit_amount;
                balance += deposit_amount;
                cout<<deposit_amount<<" Is added successfully"<<endl;
                break;
            case 3:
                cout<<"Withdraw amount: ";
                double withdraw_amount;
                cin>>withdraw_amount;
                if(withdraw_amount<=balance)
                    balance -= withdraw_amount;
                else
                    cout<<"Not enough money"<<endl;
                break;
        }
    }while(option != 4);

    return 0;
}
