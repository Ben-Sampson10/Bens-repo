#ifndef SYSTEM_H_
#define SYSTEM_H_

#include "Account.h"

#include <vector>

class System{

    public:


        std::vector<Account> accountList;

        System();

        void createAccount(Account account);

        bool logIn(Account account);

};



#endif