#include"student.hpp"

std::string student::getAddress()   const {
    return student::address_;
}

std::string student::getName()  const {
    return student::fName_+' '+student::lName_;
}

long student::getPesel() const{
    return student::Pesel_;
}

unsigned student::getId()  const{
    return student::Id_;
}

bool student::isMale()  const{
    if(student::sex_=='M') return true;
    return false;
}

bool student::isFemale()  const{
    if(student::sex_=='K') return true;
    return false;
}