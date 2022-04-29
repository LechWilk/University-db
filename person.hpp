#include<string>
#include<iostream>

class Person    {

    public:
        std::string getName() const;
        std::string getAddress() const;
        std::string getLastName() const;
        std::string getFirstName() const;
        long getPesel() const;
        bool isMale() const;
        bool isFemale() const;
        virtual unsigned getId() const = 0;
        virtual float getSalary() const = 0;
        virtual void setSalary(float)   {return;};

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

        Person(const std::string fName, const std::string lName, std::string address, long pesel, Sex sex, Engagement engagement)
        :   fName_(fName)
        ,   lName_(lName)
        ,   address_(address)
        ,   pesel_(pesel)
        ,   sex_(sex)
        ,   engagement(engagement)
        {
//            std::cout<<"Dodałem człowieka "<<lName<<'\t'<<static_cast<int>(engagement)<<'\t'<<'\n';            
        }

        Person(const std::string fName, const std::string lName)
        :   Person(fName,lName,"",0,Sex::none,Engagement::none)
        {}

        const Engagement engagement; // = Engagement::none;


    private:
        std::string fName_;
        std::string lName_;
        std::string address_;
        long pesel_;
        Sex sex_;

};