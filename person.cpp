#include"person.hpp"

std::string person::getAddress()   const {
    return person::address_;
}

std::string person::getName()  const {
    return person::fName_+' '+person::lName_;
}

std::string person::getLastName() const{
    return person::lName_;
}

std::string person::getFirstName() const{
    return person::fName_;
}

long person::getPesel() const{
    return person::Pesel_;
}

bool person::isMale()  const{
    if(person::sex_==male) return true;
    return false;
}

bool person::isFemale()  const{
    if(person::sex_==female) return true;
    return false;
}