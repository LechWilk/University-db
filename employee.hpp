#include "student.hpp"

class Emplyee   : public student {

    float salary_;   
    static char function = 'E'; 

    public:
        Employee (const std::string fName, const std::string lName, std::string address, long Pesel, char sex)
        :   fName_(fName), lName_(lName), address_(address), Pesel_(Pesel), sex_(sex)
        {}
        Employee (const std::string fName, const std::string lName)
        :   Employee(fName, lName, "", 0, 'X')
        {}

        float getSalary() const;
        
};