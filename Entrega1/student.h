#ifndef STUDENT_H
#define STUDENT_H

#include "person.h" //incluye su clase padre

class Student : public Person //es necesario indicar que public Person es de donde hereda
{
public:
    Student();
    ~Student();


};

#endif // STUDENT_H
