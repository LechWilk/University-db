#include"db.hpp"

void interface()    {


}

void print(std::list<student> db)    {
    std::string temp_sex;
    for(const auto &s:db)  {
        temp_sex=s.isMale() ? "mężczyzna" : temp_sex=s.isFemale() ? "kobieta" : "";
        std::cout<<"||  "<<s.getId()<<
        "  ||  "<<s.getName()<<
        "  ||  "<<temp_sex<<
        "  ||  "<<s.getAddress()<<
        "  ||  "<<s.getPesel()<<'\n';
    }
}