#include<iostream>
#include<list>
#include"student.hpp"

uint8_t interface();
void print(const std::list<student>& db);
void save(const std::list<student>& db);
void fullFill(std::list<student>& db);
void addStudent(std::list<student>& db);
void serchName(const std::list<student>& db);
void serchPesel(const std::list<student>& db);
void sortPesel(std::list<student>& db);
void sortName(std::list<student>& db);
void delStudent(std::list<student>& db);
void printBreak(int);


bool compPesel(const student& s1, const student& s2);
bool compName(const student& s1, const student& s2); 