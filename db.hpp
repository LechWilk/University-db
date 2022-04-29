#include<iostream>
#include<list>
#include<array>
#include"person.hpp"

char interface();

void addStudent(std::list<Person*>& db);
void addEmployee(std::list<Person*>& db);

void delStudent(std::list<Person*>& db);
void delEmployee(std::list<Person*>& db);

void print(const std::list<Person*>& db);
void printBreak(int);

void save(const std::list<Person*>& db);
void load(std::list<Person*>& db);
//void fullFill(std::list<Person*>& db);
void serchName(const std::list<Person*>& db);
void serchPesel(const std::list<Person*>& db);
void sortPesel(std::list<Person*>& db);
void sortName(std::list<Person*>& db);
void sortSalary(std::list<Person*>& db);
void modSalary(std::list<Person*>& db);

bool compPesel(const Person* s1, const Person* s2);
bool compName(const Person* s1, const Person* s2);
bool validPesel(long);
