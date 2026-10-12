#include <iostream>

int main() {
    int balance = 100; // Startgeld (Starting gold)
    int choice = 0; // Variable für die Auswahl (Variable for the choice)

    // Begrüßung des Nutzers (Welcome message to the user)
    std::cout << "--- Welcome to the Mini-Bank ---\n";

    // Hauptschleife für die Bankoperationen (Main loop for bank operatorations)
    while (choice != 3) {
        std::cout << "\nBalance: " << balance << " Gold\n";
        std::cout << "1. Deposit Gold\n2. Withdraw Gold\n3. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;

        // Falls die Eingabe keine Zahl war (If the input was not a number)
        if (std::cin.fail()) {
            std::cin.clear();           // 1. Fehlerzustand zurücksetzen (Reset error state)
            std::cin.ignore(100, '\n'); // 2. Den falschen Buchstaben aus dem Speicher löschen (Clear the wrong character from the buffer)
            std::cout << "Invalid input! Please enter a number.\n";
            continue;                   // 3. Springt sofort zum Start der Schleife (Jump immediately to the start of the loop)
        }

        // Auswahl der Optionen ob man einzahlen oder abheben möchte (Selection of options whether to deposit or withdraw)
        if (choice == 1) {
            int amount;
            std::cout << "Enter deposit amount: ";
            std::cin >> amount;
            balance += amount;
        } 
        else if (choice == 2) {
            int amount;
            std::cout << "Enter withdrawal amount: ";
            std::cin >> amount;
            if (amount <= balance) {
                balance -= amount;
            } else {
                std::cout << "Not enough Gold!\n"; // Fehlermeldung, wenn nicht genug Gold vorhanden war (Error message if not enough gold was available)
            }
        }
    }

    std::cout << "Goodbye!\n";
    return 0;
}
