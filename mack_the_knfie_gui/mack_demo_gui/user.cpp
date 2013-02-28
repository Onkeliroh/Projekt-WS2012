#include "user.h"

user::user(std::string name, std::string password)
    :_name(name), _password(password)
{
    _secret.clear();
}
