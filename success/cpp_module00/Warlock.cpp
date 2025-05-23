#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;

}
Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
}
//getter
std::string Warlock::getName() const
{
    return (_name);
}
std::string Warlock::getTitle() const
{
    return (_title);
}
void Warlock::setTitle(std::string const& title)
{
    _title = title;
}
void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}
