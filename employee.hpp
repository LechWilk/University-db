#include "person.hpp"

class Emplyee   : public Person {

    public:
        Employee (const std::string fName, const std::string lName, std::string address, long pesel, char sex, float salary)
        :   Person (fName, lName, address, pesel, sex)
        ,   salary_(salary)
        ,   function(employee)
        {}
        
        Employee (const std::string fName, const std::string lName)
        :   Employee(fName, lName, "", 0, none, 0)
        {}

        float getSalary() const {return salary_};

    private:
        float salary_;   
    
};