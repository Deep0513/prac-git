#include <iostream>
#include <string>
#include <vector>
using namespace std;



class Bill {
public:
    int id;
    string itemName;
    double quantity, mainPrice, itemPrice ;
    
    Bill(int iid, string itmname, double qnt, double price,double price1) : id(iid), itemName(itmname), quantity(qnt), mainPrice(price),itemPrice(price1) {}

    void generateBill() {
        cout << id << "\t" << itemName << "\t" << quantity << "\t" << itemPrice <<"\t "<<mainPrice<< endl;
    }
};

class Billing {
private:
    int id;
    string itmname;
    vector<Bill*> bills;
    double quantity, price;
    string custname, custphone;

public:
    Billing(string name = "", string phone = "") : custname(name), custphone(phone) {}

    void getdata() {
        cout << "Name: " << custname << endl;
        cout << "Phone: " << custphone << endl;
    }
void blogin(string uname, string pass) {
    if (uname == "pranit" && pass == "pranit") {
        cout << "Log in successful" << endl;
        cout << "Billing Options" << endl;
        cout << "1. Customer Detail" << endl;
        cout << "2. Exit" << endl;
        int choice2;
        cout << "Enter your choice: ";
        cin >> choice2;

        switch (choice2) {
            case 1: {
                string n, p;
                cout << "Enter customer name: ";
                cin >> n;
                cout << "Enter customer's phone number: ";
                cin >> p;
                Billing cd(n, p);
                cout << "\nThe customer details are: " << endl;
                cd.getdata();
                break;
            }
            case 2:
                cout << "Exiting..." << endl;
                return; // Exit the function immediately
            default:
                cout << "Invalid choice" << endl;
                return; // Exit the function immediately
        }
    } else {
        cout << "Username or password is incorrect" << endl;
        return; // Exit the function immediately
    }

    // Code for adding items to the bill
    char addMore;
    do {
        cout << "Enter item id: ";
        cin >> id;
        cout << "Enter item name: ";
        cin >> itmname;
        cout << "Enter item quantity: ";
        cin >> quantity;
        cout << "Enter item price: ";
        cin >> price;
        bills.push_back(new Bill(id, itmname, quantity, price));

        cout << "Do you want to add more items? (y/n): ";
        do {
            
            cin >> addMore;
            if (addMore != 'y' && addMore != 'n') {
                cout << "Invalid input. Please enter 'y' or 'n'." << endl;
            }
        } while (addMore != 'y' && addMore != 'n');
    } while (addMore == 'y');

    // Code for generating the bill
    cout << "\nYour bill is: " << endl;
    cout << "ID\tName\tQuantity\tttPrice" << endl;
    double totalPrice = 0.0;
    for (int i = 0; i < bills.size(); i++) {
        bills[i]->generateBill();
        totalPrice += bills[i]->itemPrice;
    }
    cout << "-------------------------------------------" << endl;
    cout << "Total price:\tttt" << totalPrice << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Thank you for shopping from Mohini's store" << endl;
    cout << "-------------------------------------------" << endl;
}
};

