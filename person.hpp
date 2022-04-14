#include<string>

class Person    {

    public:
        Person(const std::string fName, const std::string lName, std::string address, long pesel, char sex)
        :   fName_(fName)
        ,   lName_(lName)
        ,   address_(address)
        ,   pesel_(pesel)
        ,   sex_(sex)
        {}

        Person(const std::string fName, const std::string lName)
        :   Person(fName,lName,"",0,'')
        {}


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

        virtual static const Engagement function = none;

        std::string getName() const;
        std::string getAddress() const;
        std::string getLastName() const;
        std::string getFirstName() const;
        long getPesel() const;
        bool isMale() const;
        bool isFemale() const;

    Private:
        std::string fName_;
        std::string lName_;
        std::string address_;
        long pesel;
        Sex sex_;

}