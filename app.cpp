#include<bits/stdc++.h>
#define cout std::cout
#define cin std::cin

class bank{
   char name[100],f_name[100],add[100],t;
   int balance;
   
   public:
   void Open_account();
   void Deposit_money();
   void Withdraw_money();
   void Display_account();
};

void bank :: Open_account(){
    cout<<"Enter your full name :: \n";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your father's name :: \n";
    cin.ignore();
    cin.getline(f_name,100);
    cout<<"Enter your address :: \n";
    cin.ignore();
    cin.getline(add,100);    
    cout<<"What type of account you want to open saving(s) or current(c) :: \n";
    cin>>t;
    cout<<"Enter amount you want to deposit :: \n";
    cin>>balance;
    cout<<"Your account is created \n";
}

void bank :: Deposit_money(){
    int a;
    cout<<"Enter amount you want to deposit :: \n";
    cin>>a;
    balance+=a;
    cout<<"Total balance :: \n"<<balance;
}

void bank :: Display_account(){
    cout<<"Full name :: \n"<<name;
    cout<<"Father's name :: \n"<<f_name;
    cout<<"Your address :: \n"<<add;
    cout<<"Account type :: \n"<<t;
    cout<<"Balance :: \n"<<balance;
}

void bank :: Withdraw_money(){
    int a;
    cout<<"Enter amount you want to withdraw :: \n";
    cin>>a;
    balance-=a;
    cout<<"Total balance :: \n"<<balance;
}


int main()
{
    int option;
    bank obj;    

    char x='y';
    while(x=='y' || x=='Y'){
        cout<<"1) Open account \n";
    	  cout<<"2) Deposit money \n";
   	  cout<<"3) Withdraw money \n";
    	  cout<<"4) Display account \n";
        cout<<"5) Exit \n";

        cout<<"Select an option from above \n";
        int option;
        cin>>option;
        if(option==1){
            cout<<"1) Open account \n";
            obj.Open_account();
        }
        else if(option==2){
            cout<<"2) Deposit money \n";
            obj.Deposit_money();
        }
        else if(option==3){
            cout<<"3) Withdraw account \n";
            obj.Withdraw_money();
        }
        else if(option==4){
            cout<<"4) Display account \n";
            obj.Display_account();
        }
        else if(option==5) exit(1);
        else{
            cout<<"Invalid input \n";
        }
        cout<<"Do you want to select next option press :: Y else press :: N \n";
        cin>>x;
        if(x=='n' || x=='N') exit(0);
    }
    
    return 0;
}
