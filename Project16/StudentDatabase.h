#pragma once

#include <iostream>
#include <fstream>
#include "Student.h"
using namespace std;
class StudentDatabase
{
private:
    Student* students;
    int numStudents;

public:
    StudentDatabase();
    ~StudentDatabase();

    void addStudent();
    void print();
    const Student* getStudents() const;
    int getNumStudents() const;
    void saveToFile(const char* filename);
    void loadFromFile(const char* filename);
    void searchStudentById(int id);
};

