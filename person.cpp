#include"person.hpp"

std::string Person::getAddress()   const {
    return Person::address_;
}

std::string Person::getName()  const {
    return Person::fName_+' '+Person::lName_;
}

std::string Person::getLastName() const{
    return Person::lName_;
}

std::string Person::getFirstName() const{
    return Person::fName_;
}

long Person::getPesel() const{
    return Person::pesel_;
}

bool Person::isMale()  const{
    if(Person::sex_==Sex::male) return true;
    return false;
}

bool Person::isFemale()  const{
    if(Person::sex_==Sex::female) return true;
    return false;
}