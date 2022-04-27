#include"db.hpp"
#include"employee.hpp"
#include"student.hpp"
#include <fstream>


char interface()    {
    
    std::cout<<
    "***********************"<<'\n'<<
    "Menu bazy Studentów i Pracownikół PW:"<<'\n'<<
    "a: Dodaj studenta"<<'\n'<<
    "b: Dodaj pracownika"<<'\n'<<
    "c: Usuń studenta po indexie"<<'\n'<<
    "d: Usuń pracownika po PESELU"<<'\n'<<
    "e: Wyszukaj po nazwisku"<<'\n'<<
    "f: Wyszukaj po numerze PESEL"<<'\n'<<'\n'<<
    "g: Drukuj bazę"<<'\n'<<
    "h: Sortuj po nazwisku"<<'\n'<<
    "i: Sortuj po numerze PESEL"<<'\n'<<
    "j: Sortuj pracowników po zarobkach"<<'\n'<<'\n'<<    
    "k: Zapisz do pliku"<<'\n'<<
    "x: Wyjście"<<'\n'<<
    "***********************"<<'\n';
    char cmd;
    std::cin>>cmd;
    return cmd;
}

//  a

void addStudent(std::list<Person*>& db)  {
    std::string firstN, lastN, address;
    char sex,tn;
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

    while(!validPesel(nrPesel))    {
        std::cout<<"Błędny numer PESEL!\nCzy chcesz skorygować? (t/n)\n";
        std::cin>>tn;
        if(tn!='t') return;
        std::cout<<"Podaj nowy PESEL:";
        std::cin>>nrPesel;
    }
    
    nrPesel%100/10%2==1 ? sex='M' : sex='K';
    std::cout<<"Płeć: "<<sex<<'\n';

    for(auto& el:db)
        if (el->getId()>index)
            index=(el->getId());
    
    Person *newStudent = new Student(firstN, lastN, address, nrPesel, index+1, sex);

    db.emplace_back(newStudent);    
}


//==============================================================================================

//  b

void addEmployee(std::list<Person*>& db)  {
    std::string firstN, lastN, address;
    char sex,tn;
    long nrPesel;
    float salary;

    std::cin.get();

    std::cout<<"imię: ";
    std::getline(std::cin,firstN);
 
    std::cout<<"nazwisko: ";
    std::getline(std::cin,lastN);
   
    std::cout<<"Adres: ";
    std::getline(std::cin,address);
    
    std::cout<<"PESEL: ";
    std::cin>>nrPesel;

    std::cout<<"Zarobki: ";
    std::cin>>salary;

    while(!validPesel(nrPesel))    {
        std::cout<<"Błędny numer PESEL!\nCzy chcesz skorygować? (t/n)\n";
        std::cin>>tn;
        if(tn!='t') return;
        std::cout<<"Podaj nowy PESEL:";
        std::cin>>nrPesel;
    }
    
    nrPesel%100/10%2==1 ? sex='M' : sex='K';
    std::cout<<"Płeć: "<<sex<<'\n';

    Person *newEmployee = new Employee(firstN, lastN, address, nrPesel, sex, salary);

    db.emplace_back(newEmployee);    
}

//==============================================================================================

void print(const std::list<Person*>& db)    {
    std::string temp_sex;
//framework
    printBreak(127);
    std::cout.width(10);
    std::cout<<std::left<<"|| Index ";
    std::cout.width(36);
    std::cout<<"|| Imię i Nazwisko";
    std::cout.width(5);
    std::cout<<"||M/K";
    std::cout.width(45);
    std::cout<<"|| Adres ";
    std::cout.width(15);
    std::cout<<"|| PESEL";
    std::cout.width(15);
    std::cout<<"|| Kasa"<<"||";
    std::cout<<'\n';
    printBreak(127);

    for(const Person *s:db)  {
        temp_sex=s->isMale() ? "M" : temp_sex=s->isFemale() ? "K" : "";

        std::cout.width(10);

        if (s->engagement==Person::Engagement::student)
            std::cout<<std::left<<"|| " +std::to_string(s->getId());
            else std::cout<<std::left<<"||";
        
        std::cout.width(35);
        std::cout<<"|| " +s->getName();
        std::cout.width(5);
        std::cout<<"|| " +temp_sex;
        std::cout.width(45);
        std::cout<<"|| " +s->getAddress();
        std::cout.width(15);
        std::cout<<"|| " +std::to_string(s->getPesel());
        std::cout.width(15);
        
        if (s->engagement==Person::Engagement::employee)
            std::cout<<"|| " +std::to_string(s->getSalary())<<"||";
            else std::cout<<std::left<<"||"<<std::right<<"||";

        std::cout<<'\n';
    }
    printBreak(127);
}

void printBreak(int len)    {
    std::cout.fill('=');
    std::cout.width(len);
    std::cout<<'='<<'\n';
    std::cout.fill(' ');
}

void save(const std::list<Person*>& db)    {
    std::string temp_sex;
    std::ofstream fileDB("University-db.txt");
    for(const auto &s:db)  {
        temp_sex=s->isMale() ? "M" : temp_sex=s->isFemale() ? "K" : "";

        fileDB<<
        std::to_string(s->getId())<<'\t'<<
        s->getLastName()<<'\t'<<
        s->getFirstName()<<'\t'<<
        temp_sex<<'\t'<<
        s->getAddress()<<'\t'<<
        std::to_string(s->getPesel())<<'\n';
    }

}

void load(std::list<Person*>& db)   {
    std::ifstream fileDB("University-db.txt");
    std::string lineDB;
    std::string firstN, lastN, address;
    char sex;
    long nrPesel;
    unsigned index;

    int ppos,pos;
    while(1)    {
        pos=0;
        
        std::getline(fileDB,lineDB);
        if(lineDB.size()<1) break;
    
        pos = lineDB.find('\t',pos);
        index=std::stoul(lineDB.substr(0,pos));
         
        ppos=pos;
        pos = lineDB.find('\t',pos+1);
        lastN=lineDB.substr(ppos+1,pos-ppos-1);
     
        ppos=pos;
        pos = lineDB.find('\t',pos+1);
        firstN=lineDB.substr(ppos+1,pos-ppos-1);
        
        ppos=pos;
        pos = lineDB.find('\t',pos+1);
        sex=lineDB[ppos+1];
     
        ppos=pos;
        pos = lineDB.find('\t',pos+1);
        address=lineDB.substr(ppos+1,pos-ppos-1);
     
        nrPesel=std::stol(lineDB.substr(pos+1));

        Student newStudent(firstN, lastN, address, nrPesel, index, sex);
        db.emplace_back(&newStudent);

    }
}


bool validPesel(long pesel)  {
long modP=pesel;
std::array<int,11> p;
for(int i=10;i>=0;i--)   {
    p[i]=modP%10;
    modP=modP/10;
}
return (p[0]*1+p[1]*3+p[2]*7+p[3]*9+p[4]*1+p[5]*3+p[6]*7+p[7]*9+p[8]*1+p[9]*3+p[10]*1)%10==0;
}

void serchName(const std::list<Person*>& db)   {
    std::string givenName;
    int resoults=0;
    std::cout<<"Podaj proszę nazwisko szukanego Studenta. ";
    std::cin>>givenName;
    std::cout<<"Rezutaty:\n\n";

    for(auto& el:db)    {
        if(el->getLastName()==givenName)   {
            std::cout<<el->getId()<<'\n';
            std::cout<<el->getName()<<'\n';
            std::cout<<el->getAddress()<<'\n'<<'\n';
            resoults++;
        }
    }

    std::cout<<"Znaloziono "<<resoults<<" Studentów.\n\n";

}
void serchPesel(const std::list<Person*>& db)  {
    long givenPesel;
    int resoults=0;
    std::cout<<"Podaj proszę PESEL szukanego Studenta. ";
    std::cin>>givenPesel;
    std::cout<<"Rezutaty:\n\n";

    for(auto& el:db)    {
        if(el->getPesel()==givenPesel)   {
            std::cout<<el->getId()<<'\n';
            std::cout<<el->getName()<<'\n';
            std::cout<<el->getAddress()<<'\n'<<'\n';
            resoults++;
        }
    }

    std::cout<<"Znaloziono "<<resoults<<" Studentów.\n\n";

}

bool compPesel(const Person* s1, const Person* s2)  {
    return s1->getPesel()<s2->getPesel();
}

bool compName(const Person* s1, const Person* s2)  {
    return std::lexicographical_compare(s1->getLastName().begin(), s1->getLastName().end(),s2->getLastName().begin(),s2->getLastName().end());
}

bool compSalary(const Person* s1, const Person* s2)  {
    return std::lexicographical_compare(s1->getLastName().begin(), s1->getLastName().end(),s2->getLastName().begin(),s2->getLastName().end());
}

void sortPesel(std::list<Person*> &db)   {
    db.sort(compPesel);
}
void sortName(std::list<Person*> &db)    {
    db.sort(compName);
}
void sortSalary(std::list<Person*> &db)    {
    db.sort(compSalary);
}

void delStudent(std::list<Person*>& db)  {
    unsigned id=0;
    std::cout<<"Podaj proszę nr indeksu wykreślanego Studenta.";
    std::cin>>id;
    int n=0;
    for(auto& el:db)    if(el->getId()==id) n++;
    
    db.remove_if([id](const Person* s){    return s->getId()==id;   });     //WTF?!? Nie kumam o co kaman tej składni..
    
    std::cout<<"Usunięto "<<n<<" Studentów.\n\n";
}

void delEmployee(std::list<Person*>& db)  {

}