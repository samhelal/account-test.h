/* (Modified Account Class) Modify class Account (Fig. 3.8) to
provide a member function called money from an Account .
does not exceed the withdraw that withdraws
Ensure that the withdrawal amount Account ’s balance. If it does, the balance
should be left unchanged and the member function should 
display a message indicating "Withdrawal amount exceeded account balance."
member function Modify class (Fig. 3.9) to test AccountTest withdraw
(c++ how to program) */
//class can add name ,deposite and withdraws
#include <string>

class account {
    public :
    account (std::string accountName , int accountBalance):
    name (accountName){
        if(accountBalance > 0){
            balance = balance + accountBalance ;
        }
    }
    void setName( std::string accountName){
        name = accountName ;
    }
    std::string getName() const {
        return name ;
    }
    void deposite(int depositAmount) {
        if(depositAmount>0){
            balance = balance + depositAmount ;
        }
    }
    void withdraw ( int withdrawAmount ){ 
        if (withdrawAmount <=balance){           //to make sure the withdraw amount does not exceed the balance
            balance = balance - withdrawAmount ;
        }
    }

    int getBalance () const {
        return balance ;
    }

    private :
    std::string name ;
    int balance{0} ;
};
