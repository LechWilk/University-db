#include "db.hpp"
#include<list>


int main()  {

    std::list<Student> PW;
    load(PW);
    while(1)    {    
        switch(interface()) {
            case 0:
                save(PW);            
                return 0;
            case 1:
                addStudent(PW);
                break;
            case 2:
                print(PW);
                break;
            case 3:
                serchName(PW);
                break;
            case 4:
                serchPesel(PW);
                break;
            case 5:
                sortPesel(PW);
                break;
            case 6:
                sortName(PW);
                break;
            case 7:
                delStudent(PW);
                break;
            case 8:
                save(PW);
                break;
        }
    }
   
}