#include<string>

class student   {
    std::string fName_;
    std::string lName_;
    std::string address_;
    unsigned Pesel_;
    unsigned Id_;
    char sex_;   

    public:
        student(const std::string fName, const std::string lName, std::string address, unsigned Pesel, const unsigned Id, char sex)
        :   fName_(fName), lName_(lName), address_(address), Pesel_(Pesel), Id_(Id), sex_(sex)
        {}
        student(const std::string fName, const std::string lName, const unsigned Id)
        :   student(fName, lName, "", 0, Id, 'X')
        {}
        std::string getName();
        std::string getAddress();
        unsigned getId();
        unsigned getPesel();
        bool isMale();

};
