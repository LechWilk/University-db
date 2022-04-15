#include<iostream>
#include<list>
#include<array>
#include"student.hpp"

uint8_t interface();
void print(const std::list<Student>& db);
void save(const std::list<Student>& db);
void load(std::list<Student>& db);
void fullFill(std::list<Student>& db);
void addStudent(std::list<Student>& db);
void serchName(const std::list<Student>& db);
void serchPesel(const std::list<Student>& db);
void sortPesel(std::list<Student>& db);
void sortName(std::list<Student>& db);
void delStudent(std::list<Student>& db);
void printBreak(int);

bool compPesel(const Student& s1, const Student& s2);
bool compName(const Student& s1, const Student& s2);
bool validPesel(long);
