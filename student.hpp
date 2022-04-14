#include<string>
#include"person.hpp"

class Student   : public Person {
    public:
        Student(const std::string fName, const std::string lName, std::string address, long pesel, const unsigned id, char sex)
        :   Person(fName,lName,address,pesel,sex)
        ,   id_(id)
        ,   function(student)
        {}
        Student(const std::string fName, const std::string lName, const unsigned id)
        :   student(fName, lName, "", 0, id, none)
        {}
        unsigned getId() const {return id_}
 
    private:
        unsigned id_;
};
