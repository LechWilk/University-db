//#include "person.hpp"

class Employee   : public Person {

    public:
        Employee (const std::string fName, const std::string lName, std::string address, long pesel, char sex, float salary)
        :   Person (fName, lName, address, pesel, (sex=='M')?Person::Sex::male:(sex=='K')?Person::Sex::female:Person::Sex::none) //to keep compatibility with "old" system of sex on char type.
        ,   salary_(salary)
        {}
        
        Employee (const std::string fName, const std::string lName)
        :   Employee(fName, lName, "", 0, ' ', 0)
        {}

        float getSalary() const {return salary_;};

        static const Engagement function = Engagement::employee;

    private:
        float salary_;   
    
};