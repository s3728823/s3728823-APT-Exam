#ifndef REGISTERPATIENT_H
#define REGISTERPATIENT_H

#include "PatientRegister.h"
#include "Hospital.h"
#include <string>

class RegisterPatient {

    public:

        RegisterPatient();
        int volume(); //return size of patient list
        void add_front();

    private:
        Patient* head;
        Patient* tail;

};


#endif