//#include"person.hpp"

class Student   : public Person {
    public:
        Student(const std::string fName, const std::string lName, std::string address, long pesel, const unsigned id, char sex)
        :   Person(fName,lName,address,pesel,(sex=='M')?Person::Sex::male:(sex=='K')?Person::Sex::female:Person::Sex::none) //to keep compatibility with "old" system of sex on char type.
        ,   id_(id)
        {}
        Student(const std::string fName, const std::string lName, const unsigned id)
        :   Student(fName, lName, "", 0, id, ' ')
        {}
        
        float getSalary() const override {return 0;};
        unsigned getId() const override {return id_;}
 
        const Engagement engagement = Engagement::student;

    private:
        unsigned id_;
};
