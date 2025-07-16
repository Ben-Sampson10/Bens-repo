#include "System.h"

System::System(){
}


void System::createAccount(Account account){


    accountList.push_back(account);
}



bool System::logIn(Account account){

    int i = 0;

    while(i < accountList.size()){
        if(accountList[i].userName == account.userName && accountList[i].getPassword() == account.getPassword()){
            return true;
        }
    }

    return false;

}