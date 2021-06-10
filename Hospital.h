#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <memory>
#include "PatientRegister.h"
#include "RegisterPatient.h"

class Hospital  
{

    public:
         
         void HospitalMenu();
         void Patients();
         //void RegPatient();

         
         Patient* patient = new Patient();

    private:

};

#endif