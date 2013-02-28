#ifndef USER_H
#define USER_H

#include <string>

class user
{
public:
    user(std::string name, std::string password);

    std::string _secret;
    std::string _name;
    std::string _password;
};

#endif // USER_H
