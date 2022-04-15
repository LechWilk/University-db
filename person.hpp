#include<string>

class Person    {

    public:
        std::string getName() const;
        std::string getAddress() const;
        std::string getLastName() const;
        std::string getFirstName() const;
        long getPesel() const;
        bool isMale() const;
        bool isFemale() const;
        
        enum class Engagement   {
            none,
            student,
            employee
        };

        enum class Sex  {
            none,
            male,
            female
        };

        Person(const std::string fName, const std::string lName, std::string address, long pesel, Person::Sex sex)
        :   fName_(fName)
        ,   lName_(lName)
        ,   address_(address)
        ,   pesel_(pesel)
        ,   sex_(sex)
        {}

        Person(const std::string fName, const std::string lName)
        :   Person(fName,lName,"",0,Sex::none)
        {}

        static const Engagement function;


    private:
        std::string fName_;
        std::string lName_;
        std::string address_;
        long pesel_;
        Sex sex_;

};