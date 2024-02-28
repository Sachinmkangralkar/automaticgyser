#include "HomeOwner.h"

HomeOwner::HomeOwner(const std::string &n) : name(n) {}

std::string HomeOwner::getName() const
{
    return name;
}
