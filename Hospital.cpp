#include "Hospital.h"
#include <iostream>
#include <string>

void Hospital::HospitalMenu() {
   std::cout << "Hospital Menu" << std::endl;
   std::cout << "----" << std::endl;
   std::cout << "1. Patients" << std::endl;
   std::cout << "2. Register Patient" << std::endl;
   std::cout << "3. Discharged Patient List" << std::endl;
   std::cout << "4. Quit" << "\n" << std::endl;
   std::cout << "> ";
}


void Hospital::Patients() { 

    std::cout << "Patients List" << std::endl;

    patient->setPatientName("Gerald"); 
    std::cout << patient->getPatientName() << std::endl;

    patient->setId("1400521");
    std::cout << patient->getId() << std::endl;

    patient->setPatientdob("10-2-1965");
    std::cout << patient->getDob() << std::endl;

    patient->setAdmissionHistory("AdmDate - 14/01/2006, DiscDate - 14/04/2006, Hosp - Mercy Hospital");
    std::cout << patient->getHistory() << std::endl;

    std::cout << "> ";

}
/*
void Hospital::RegPatient() {
    std::cout << rpatient->volume() << std::endl;
}
*/