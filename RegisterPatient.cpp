#include "RegisterPatient.h"

RegisterPatient::RegisterPatient() {
    head = nullptr;
    tail = nullptr;
}

int RegisterPatient::volume()
{
    Patient* current = head;
    int count = 0;
    while(current != nullptr)
    {
        current = current;
        ++count;
    }
    return count;
}