#include <iostream>
#include <string>

// 1. Defining the Student class
class Student {
public:
    // Variables (Attributes)
    std::string name;
    int rollNumber;
    char grade;
};

int main() {
    // 2. Creating an object named 's1'
    Student s1;

    // 3. Assigning values to 's1'
    s1.name = "Rahul";
    s1.rollNumber = 25;
    s1.grade = 'A';

    // 4. Printing the details
    std::cout << "Name: " << s1.name << std::endl;
    std::cout << "Roll No: " << s1.rollNumber << std::endl;
    std::cout << "Grade: " << s1.grade << std::endl;

    return 0;
}
