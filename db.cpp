#include"db.hpp"

uint8_t interface()    {
    char komenda;
    
    std::cout<<"Menu bazy studentów PW:"<<'\n'<<
    "1: Dodaj"<<'\n'<<
    "2: Drukuj bazę"<<'\n'<<
    "3: Wyszukaj po nazwisku"<<'\n'<<
    "4: Wyszukaj po numerze PESEL"<<'\n'<<
    "5: Sortuj po numerze PESEL"<<'\n'<<
    "6: Sortuj po nazwisku"<<'\n'<<
    "7: Usuń"<<'\n'<<
    "0: Wyjście"<<'\n';

    do  {    
        std::cin>>komenda;
        komenda-=48;
        if(komenda>7) std::cout<<"nie ma takiego numeru....."<<'\n';
        else break;
    } while(1);

    return komenda;
}

void print(const std::list<student>& db)    {
    std::string temp_sex;
    printBreak(107);

    for(const auto &s:db)  {
        temp_sex=s.isMale() ? "M" : temp_sex=s.isFemale() ? "K" : "";

        std::cout.width(10);
        std::cout<<std::left<<"|| " +std::to_string(s.getId());
        std::cout.width(30);
        std::cout<<"|| " +s.getName();
        std::cout.width(5);
        std::cout<<"|| " +temp_sex;
        std::cout.width(45);
        std::cout<<"|| " +s.getAddress();
        std::cout.width(15);
        std::cout<<"|| " +std::to_string(s.getPesel())<<"||";
        std::cout<<'\n';
    }
    printBreak(107);
}

void printBreak(int len)    {
    std::cout.fill('=');
    std::cout.width(len);
    std::cout<<'='<<'\n';
    std::cout.fill(' ');
}

void fullFill(std::list<student>& db)   {

    db.emplace_back(student("Jan","Kapela",12345));
    db.emplace_back(student("Cezary","Graf",24680));
    db.emplace_back(student("Rafal","Zaorski",97531));
    db.emplace_back(student("Slawomir","Mentzen",33333));
    db.emplace_back(student("Fill","Konieczny",55555));
    db.emplace_back(student("Andrzej","Duda","Warszawa, al.Krakowskie Przedmiescie 1",75124534987,11111,'M'));
    db.emplace_back(student("Adrian","Zandberg","Warszawa, ul. Krysztalowa 6",81033074987,99789,'M'));
    db.emplace_back(student("Krystyna","Pawlowicz","Warszawa, ul. Srebrna 77",35082051497,88888,'K'));
}

void addStudent(std::list<student>& db)  {
    std::string firstN, lastN, address;
    char sex;
    long nrPesel;
    unsigned index;

    std::cin.get();

    std::cout<<"imię: ";
    std::getline(std::cin,firstN);
 
    std::cout<<"nazwisko: ";
    std::getline(std::cin,lastN);
   
    std::cout<<"Adres: ";
    std::getline(std::cin,address);
    
    std::cout<<"PESEL: ";
    std::cin>>nrPesel;
    
    std::cout<<"Płeć M/K: ";
    std::cin>>sex;

    student newStudent(firstN, lastN, address, nrPesel, db.size()+1, sex);

    db.emplace_back(newStudent);    
}

void serchName(const std::list<student>& db)   {

}
void serchPesel(const std::list<student>& db)  {

}
void sortPesel(std::list<student>& db)   {

}
void sortName(std::list<student>& db)    {
    
}
void delStudent(std::list<student>& db)  {
    
}