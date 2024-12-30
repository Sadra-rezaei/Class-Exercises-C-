#include <iostream>
using namespace std;

main () {
    int num1 , num2 , choice;

    do {
        cout << "========== Calculator ==========\n\n" << "PLease Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "\n0. === Exit ===" << "\n1. Sum" << "\n2. Subtraction" << "\n3. Multiply" << "\n4. Division" << "\n\nWhat do you want to do? ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Result is: " << num1 + num2 << "\n";
                break;
            
            case 2:
                cout << "Result is: " << num1 - num2 << "\n";
                break;
            
            case 3:
                cout << "Result is: " << num1 * num2 << "\n";
                break;

            case 4:
                if (num2 == 0) {
                    cout << "\n==== Divided by zero!!! ====\n";
                    break;
                }
                else
                    cout << "Result is: " << (float) num1 / num2 << "\n";
        }


    } while (choice != 0);
}