//#include"person.hpp"

class Student   : public Person {
    public:
        Student(const std::string fName, const std::string lName, std::string address, long pesel, const unsigned id, char sex)
        :   Person(fName,lName,address,pesel,(sex=='M')?Person::Sex::male:(sex=='K')?Person::Sex::female:Person::Sex::none,Engagement::student) //to keep compatibility with "old" system of sex on char type.
        ,   id_(id)
        {
            std::cout<<"Dodałem studenta "<<lName<<'\t'<<"ID:"<<id<<'\t'<<static_cast<int>(engagement)<<'\t'<<'\n';
        }
        Student(const std::string fName, const std::string lName, const unsigned id)
        :   Student(fName, lName, "", 0, id, ' ')
        {}
        
        float getSalary() const override {return 0;};
        unsigned getId() const override {return id_;}

    private:
        unsigned id_;
};
