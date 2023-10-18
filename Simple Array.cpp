#include <iostream>

using namespace std;

const int MAX_SIZE = 100; 

int main() {
    string arr[MAX_SIZE];
    int size = 0;

    while (true) {
        cout << "Array Operations Menu:" << endl;
        cout << "1. Create array" << endl;
        cout << "2. Read array" << endl;
        cout << "3. Update array" << endl;
        cout << "4. Delete array" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:  
                cout << "Enter the size of the array (1-" << MAX_SIZE << "): ";
                cin >> size;

                if (size < 1 || size > MAX_SIZE) {
                    cout << "Invalid size. Please enter a size between 1 and " << MAX_SIZE << "." << endl;
                    break;
                }

                cout << "Enter " << size << " elements: ";
                for (int i = 0; i < size; i++) {
                    cin >> arr[i];
                }
                cout << "Array created successfully." << endl;
                break;

            case 2:  // Read array
                if (size == 0) {
                    cout << "Array is empty. Please create an array first." << endl;
                } else {
                    cout << "Array elements: ";
                    for (int i = 0; i < size; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3: 
                if (size == 0) {
                    cout << "Array is empty. Please create an array first." << endl;
                } else {
                    cout << "Enter the index to update (0-" << (size - 1) << "): ";
                    int index;
                    cin >> index;

                    if (index < 0 || index >= size) {
                        cout << "Invalid index. Please enter an index between 0 and " << (size - 1) << "." << endl;
                        break;
                    }

                    cout << "Enter the new value: ";
                    cin >> arr[index];
                    cout << "Element at index " << index << " updated successfully." << endl;
                }
                break;

            case 4:  
                size = 0;
                cout << "Array deleted." << endl;
                break;

            case 5:  // Exit
                cout << "Exiting the program." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}

