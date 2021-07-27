#include "db.hpp"
#include<list>


int main()  {

    std::list<student> PW;
    auto poz = PW.begin();

    PW.emplace_back(student("Jan","Kapela",12345));
    PW.emplace_back(student("Cezary","Graf",24680));
    PW.emplace_back(student("Rafał","Zaorski",97531));
    PW.emplace_back(student("Sławomir","Mentzen",33333));
    PW.emplace_back(student("Fill","Konieczny",55555));
    PW.emplace_back(student("Andrzej","Duda","Warszawa, al.Krakowskie Przedmieście 1",75124534987,11111,'M'));
    PW.emplace_back(student("Adrian","ZanPWerg","Warszawa, ul. Kryształowa 6",81033074987,99789,'M'));
    PW.emplace_back(student("Krystyna","Pawłowicz","Warszawa, ul. Srebrna 77",350820514977,88888,'K'));
print(PW);
    
}