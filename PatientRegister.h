#ifndef PATIENTREGISTER_H
#define PATIENTREGISTER_H

#include <string>

class Patient {

    public:
        
        void setId(std::string Id);
        void setPatientName(std::string Name); // Add a patient to the register
        void setPatientdob(std::string DOB);
        void setAdmissionHistory(std::string History);


        std::string name;
        std::string getId();
        std::string getPatientName();
        std::string getDob();
        int getVolume();
        std::string getHistory();

    private:
        std::string dob;
        std::string id;
        int volume;
        std::string history;

};


#endif