#include "db.hpp"
#include<list>


int main()  {

    std::list<Person*> PW;

    load(PW);
    while(1)    {    
        switch(interface()) {
            case 'x':
                return 0;
            case 'a':
                addStudent(PW);
                break;
            case 'b':
                addEmpoyee(PW);
                break;
            case 'c':
                delStudent(PW);
                break;
            case 'd':
                delEmployee(PW);
                break;
            case 'e':
                serchName(PW);
                break;
            case 'f':
                serchPesel(PW);
                break;                
            case 'g':
                print(PW);
                break;
            case 'h':
                sortPesel(PW);
                print(PW);
                break;
            case 'i':
                sortName(PW);
                print(PW);
                break;
            case 'j':
                sortSalary(PW);
                print(PW);
                break;
            case 'k':
                save(PW);
                break;
            default:
                break;
        }
    }
   
}