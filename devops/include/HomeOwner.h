#ifndef HOMEOWNER_H
#define HOMEOWNER_H

#include <string>

class HomeOwner
{
private:
    std::string name;

public:
    HomeOwner(const std::string &n);
    std::string getName() const;
};

#endif
