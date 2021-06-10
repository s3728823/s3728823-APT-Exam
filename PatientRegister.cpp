#include "PatientRegister.h"

std::string Patient::getPatientName() 
{
    return name;
}

void Patient::setPatientName(std::string Name)
{
    name = Name;
}

std::string Patient::getId() 
{  
    return id;
}

void Patient::setId(std::string Id)
{
    id = Id;
}

void Patient::setAdmissionHistory(std::string History)
{
    history = History;
}

std::string Patient::getHistory()
{
    return history;
}

void Patient::setPatientdob(std::string DOB)
{
    dob = DOB;
}

std::string Patient::getDob()
{
    return dob;
}

int Patient::getVolume() 
{
    return volume;
}
/*
void PatientInformation::setVolume()
{
    //Patients+volume;
}
*/