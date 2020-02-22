#ifndef TEACHER_H
#define TEACHER_H

#include "person.h" //incluye su clase padre


class Teacher : public Person
{
private:
    vector<Student> listaAlumnos;

public:
    Teacher();
    ~Teacher();
};

#endif // TEACHER_H
