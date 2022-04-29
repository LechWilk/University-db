//#include "person.hpp"

class Employee   : public Person {

    public:
        Employee (const std::string fName, const std::string lName, std::string address, long pesel, char sex, float salary)
        :   Person (fName, lName, address, pesel, (sex=='M')?Person::Sex::male:(sex=='K')?Person::Sex::female:Person::Sex::none,Engagement::employee) //to keep compatibility with "old" system of sex on char type.
        ,   salary_(salary)
        {
            std::cout<<"Dodałem pracownika "<<lName<<'\t'<<"Kasa:"<<salary<<'\t'<<static_cast<int>(engagement)<<'\t'<<'\n';            
        }
        
        Employee (const std::string fName, const std::string lName)
        :   Employee(fName, lName, "", 0, ' ', 0)
        {}

        float getSalary() const override {return salary_;};
        unsigned getId() const override {return 0;};

        const Engagement engagement = Engagement::employee;

    private:
        float salary_;   
    
};