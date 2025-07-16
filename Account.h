#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>

class Account{

    public:

        Account(std::string username, std::string password);

        std::string userName;

        std::string getPassword();

    private:

        std::string password;



};



#endif