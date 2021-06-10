#include "PatientRegister.h"
#include "Hospital.h"
#include <iostream>

int choice;

int main() {

    Hospital start = Hospital();

    std::cout << "Welcome to the Hospital System" << std::endl;
    std::cout << "----------------------------\n" << std::endl;

    start.HospitalMenu();

    while (choice != 1 && choice != 2 && choice != 3 && choice != 4)
      do { std::cin >> choice; //links back to int choice, this will read the users input
         if (choice ==1)
         {
            std::cout << "\n";
            start.Patients();
         }
         else if (choice==2)
         {
            std::cout << "\n";
            //start.RegPatient();
         }
         else if (choice==3)
         {
            std::cout << "\n";
         }
         else if (choice ==4)
         {
             exit (EXIT_FAILURE);
         }
         else
         {
            std::cout <<"Please enter a correct option" << std::endl;
            std::cout << "> ";
            std::cin.clear();
            std::cin >> choice; //links back to int choice, this will read the users input
         }
   }
   while(!std::cin.fail());

   exit (EXIT_FAILURE);
}

