#include <iostream>
#include <string>

class student {
public:
    int id;
    std::string name;
    std::string registration_number;
};

void takeInput(student& studentObj) {
    std::cout << "Enter student ID: ";
    std::cin >> studentObj.id;
    
    std::cout << "Enter student name: ";
    std::cin >> studentObj.name;
    
    std::cout << "Enter registration number: ";
    std::cin >> studentObj.registration_number;
}

void printstudentDetails(const student& studentObj) {
    std::cout << "ID: " << studentObj.id << std::endl;
    std::cout << "Name: " << studentObj.name << std::endl;
    std::cout << "Reg_No: " << studentObj.registration_number << std::endl;
}

int main() {
    student studentObj;

    takeInput(studentObj);

    std::cout << "\nstudent Details:" << std::endl;
    printstudentDetails(studentObj);

    return 0;
}
