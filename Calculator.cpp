#include <iostream>
#include <string> 

int main () {
    double num1, num2;
    double answer = 0;
    std::string input1;
    char choice = ' ';

    while (choice != 'q') {
        std::cout << "What do you want to do? ( + (addition), - (subtraction), * (multiplication), / (division), q (quit)): ";
        std::cin >> choice;
        std::cin.ignore(1000, '\n');

        // Addition of numbers (2 Nummern addieren)
        if (choice == '+') {
            std::cout << "Enter your first number (or type 'answer' to use the previous result): ";
            std::cin >> input1;
            if (input1 == "answer") {
                num1 = answer;
            // preventing letters from being entered as numbers (verhindert, dass Buchstaben als Zahlen eingegeben werden)
            } else {
                try { num1 = std::stod(input1); } 
                catch (...) { std::cout << "Letters arent numbers, genius..." << std::endl; continue; }
            }

            std::cout << "Enter your second number: ";
            std::cin >> num2;           
            // preventing letters from being entered as numbers (verhindert, dass Buchstaben als Zahlen eingegben werden)
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Letters arent numbers, genius..." << std::endl;
                continue;
            }
            answer = num1 + num2;
            std::cout << "The total of " << num1 << " and " << num2 << " is: " << answer << std::endl;
        
        // Subractions of number (2 Nummern subtrahieren)
        } else if (choice == '-') {
            std::cout << "Enter your first number (or type 'answer' to use the previous result): ";
            std::cin >> input1;
            if (input1 == "answer") {
                num1 = answer;
            } else {
                try { num1 = std::stod(input1); } 
                catch (...) { std::cout << "Letters arent numbers, genius..." << std::endl; continue; }
            }

            std::cout << "Enter your second number for subtraction: ";
            std::cin >> num2;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Letters arent numbers, genius..." << std::endl;
                continue;
            }
            answer = num1 - num2;
            std::cout << "The total of " << num1 << " and " << num2 << " is: " << answer << std::endl;
            
        // Multiplication of numbers (2 Nummern multiplizieren)
        } else if (choice == '*') {
            std::cout << "Enter your first number (or type 'answer' to use the previous result): ";
            std::cin >> input1;
            if (input1 == "answer") {
                num1 = answer;
            } else {
                try { num1 = std::stod(input1); } 
                catch (...) { std::cout << "Letters arent numbers, genius..." << std::endl; continue; }
            }

            std::cout << "Enter your second number for multiplication: ";
            std::cin >> num2;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Letters arent numbers, genius..." << std::endl;
                continue;
            }
            answer = num1 * num2;
            std::cout << "The total of " << num1 << " and " << num2 << " is: " << answer << std::endl;

        // Division of numbers (2 Nummern dividieren)
        } else if (choice == '/') {
            std::cout << "Enter your first number (or type 'answer' to use the previous result): ";
            std::cin >> input1;
            if (input1 == "answer") {
                num1 = answer;
            } else {
                try { num1 = std::stod(input1); } 
                catch (...) { std::cout << "Letters arent numbers, genius..." << std::endl; continue; }
            }

            std::cout << "Enter your second number for division: ";
            std::cin >> num2;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Letters arent numbers, genius..." << std::endl;
                continue;
            }
            if (num2 != 0) {
                answer = static_cast<double>(num1) / num2;
                std::cout << "The total of " << num1 << " and " << num2 << " is: " << answer << std::endl;
            } else {
                std::cout << "you cant divide it by zero unless you want to create a singularity." << std::endl;
            }
        } else if (choice == 'q') {
            std::cout << "Okay, closing the calculator, you meanie..." << std::endl;
        } else {
            std::cout << "Choose a valid operation and not whatever you tried to do..." << std::endl;
        }
    }
    return 0;
}