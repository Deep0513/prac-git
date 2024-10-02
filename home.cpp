#include <iostream>
#include <string>
#include "dataentry.cpp"
#include "billing.cpp"
#include <limits> 
using namespace std;

int main() {
	
    int choice;
    dataentry de; 
    Billing billobj;
    
    string username, password;
    
    cout << "------: Welcome mohini's store :------" << endl;
    cout << "1. Admin " << endl;
    cout << "2. data entry " << endl;
    cout << "3. billing" << endl;
    cout << endl;
    
    do {
        cout << "Enter your choice : ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "pranit" << endl;
                cout << "Deepali" << endl;
                cout << "Mohini" << endl;
                cout << "Abhishek" << endl;
                break;
            case 2:
                cout << "enter username" << endl;
                cin >> username;
                cout << "enter password" << endl;
                cin >> password;
                de.login(username, password);
                break; 
            case 3:
                cout << "enter username" << endl;
                cin >> username;
                cout << "enter password" << endl;
                cin >> password;
                billobj.blogin(username, password);
                break; 
            default:
                cout << "Invalid choice" << endl;
                // Clear input buffer
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
        }
    } while (choice < 1 || choice > 3);

    return 0;
}

