#include <iostream>
#include <string>

class student {
public:
    int id;
    std::string name;
    std::string registration_number;

};

void takeInput(student& studentdent) {
    std::cout << "Enter studentdent ID: ";
    std::cin >> studentdent.id;
    
    
}

void printstudentdentDetails(const student& studentdent) {
    std::cout << "ID: " << studentdent.id << std::endl;
    std::cout << "Name: " << studentdent.name << std::endl;
    std::cout << "Reg_No: " << studentdent.registration_number << std::endl;

}

int main() {
    student studentdent;

    takeInput(studentdent);

    std::cout << "\nstudentdent Details:" << std::endl;
    printstudentdentDetails(studentdent);

    return 0;
}