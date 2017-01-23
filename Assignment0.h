#include <iostream>
#include <iomanip>
#include <string>


class Student {
    int passed = 0, failed = 0;
    char grade = ' ', choice = 'N';

    public:
    void setGrade(){
        std::cout << "Please enter student grade: ";
        std::cin >> grade;
    }

    void calResult() {
        if (grade == 'A' || grade == 'a'|| grade =='B' || grade == 'b' || grade == 'c' || grade == 'C'){
            ++passed;
        }
        else {
            ++failed;
        }
    }

    void displayResult() {
        std::cout << "\nNumber of Students who passed: " << passed << std::endl;
        std::cout << "Number of Students who failed: " << failed << std::endl;
    }




};
