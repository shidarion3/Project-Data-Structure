#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 100; 

int main() {
    string names[MAX_SIZE];
    string addresses[MAX_SIZE];
    int ages[MAX_SIZE];
    char genders[MAX_SIZE];
    int numPeople = 0;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add a person" << endl;
        cout << "2. Display all people" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;
		cout << "\n\n";
        switch (choice) {
            case 1: 
                if (numPeople < MAX_SIZE) {
                    cout << "Enter name: ";
                    cin >> names[numPeople];
                    cout << "Enter address: ";
                    cin >> addresses[numPeople];
                    cout << "Enter age: ";
                    cin >> ages[numPeople];
                    cout << "Enter gender (M/F): ";
                    cin >> genders[numPeople];

                    numPeople++;
                    cout << "Person added successfully.\n\n" << endl;
                } else {
                    cout << "Array is full. Cannot add more people." << endl;
                }
                break;

            case 2:
                if (numPeople == 0) {
                    cout << "No people to display.\n\n" << endl;
                } else {
                    cout << "People Information:" << endl;
                    for (int i = 0; i < numPeople; i++) {
                        cout << "Person " << (i + 1) << ":" << endl;
                        cout << "Name: " << names[i] << endl;
                        cout << "Address: " << addresses[i] << endl;
                        cout << "Age: " << ages[i] << endl;
                        cout << "Gender: " << genders[i] << endl;
                        cout << "\n\n";
                    }
                }
                break;

            case 3: 
                cout << "Exiting the program." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}

