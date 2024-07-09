#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void menu();

class Mgmt {
public:
    Mgmt() {
        menu();
    }
};

class customer_details {
public:
    static string name, gender;
    int age;
    int phoneNo;
    static int C_ID;
    char arr[100];

    void information() {
        cout << "Enter the customer id" << endl;
        cin >> C_ID;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter gender: ";
        cin >> gender;
        cout << "Details saved";
    }
};

int customer_details::C_ID;
string customer_details::name;
string customer_details::gender;

class ticket_registration {
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights() {
        string flightN[] = { "USA", "Australia", "UK", "Germany", "Italy" };
        cout << "Please enter the country number for which you want to book the flight: " << endl;
        cin >> choice;
        switch (choice) {
        case 1: {
            cout << "Welcome to USA Airlines" << endl;
            cout << "Please checkout the flight details below";

            cout << "1. USA Boeing 493" << endl;
            cout << "11/07/2024 8:00 AM 10Hrs Rs. 14000" << endl;
            cout << "2. USA Luftania" << endl;
            cout << "11/07/2024 11:00 AM 12Hrs Rs. 10000" << endl;
            cout << "3. USA Boeing 601" << endl;
            cout << "11/07/2024 6:00 AM 8Hrs Rs. 17000" << endl;
            cout << "4. USA Boeing 28" << endl;
            cout << "11/07/2024 5:00 PM 15Hrs Rs. 7500" << endl;

            cout << "" << endl;
            cout << "Enter the flight you want to book" << endl;
            cin >> choice1;
            if (choice1 == 1) {
                charges = 14000;
                cout << "You have booked USA Boeing 493" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 2) {
                charges = 10000;
                cout << "You have booked USA Luftania" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 3) {
                charges = 17000;
                cout << "You have booked USA Boeing 601" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 4) {
                charges = 7500;
                cout << "You have booked USA Boeing 28" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else {
                cout << "Invalid input" << endl;
                flights();
            }
            break;
        }
        case 2: {
            cout << "Welcome to Australian Airlines" << endl;
            cout << "Please checkout the flight details below";

            cout << "1. Australian Boeing 493" << endl;
            cout << "11/07/2024 8:00 AM 10Hrs Rs. 14000" << endl;
            cout << "2. Australian Luftania" << endl;
            cout << "11/07/2024 11:00 AM 12Hrs Rs. 10000" << endl;
            cout << "3. Australian Boeing 601" << endl;
            cout << "11/07/2024 6:00 AM 8Hrs Rs. 17000" << endl;
            cout << "4. Australian Boeing 28" << endl;
            cout << "11/07/2024 5:00 PM 15Hrs Rs. 7500" << endl;

            cout << "" << endl;
            cout << "Enter the flight you want to book" << endl;
            cin >> choice1;
            if (choice1 == 1) {
                charges = 14000;
                cout << "You have booked Australian Boeing 493" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 2) {
                charges = 10000;
                cout << "You have booked Australian Luftania" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 3) {
                charges = 17000;
                cout << "You have booked Australian Boeing 601" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 4) {
                charges = 7500;
                cout << "You have booked Australian Boeing 28" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else {
                cout << "Invalid input" << endl;
                flights();
            }
            break;
        }
        case 3: {
            cout << "Welcome to UK Airlines" << endl;
            cout << "Please checkout the flight details below";

            cout << "1. UK Boeing 493" << endl;
            cout << "11/07/2024 8:00 AM 10Hrs Rs. 14000" << endl;
            cout << "2. UK Luftania" << endl;
            cout << "11/07/2024 11:00 AM 12Hrs Rs. 10000" << endl;
            cout << "3. UK Boeing 601" << endl;
            cout << "11/07/2024 6:00 AM 8Hrs Rs. 17000" << endl;
            cout << "4. UK Boeing 28" << endl;
            cout << "11/07/2024 5:00 PM 15Hrs Rs. 7500" << endl;

            cout << "" << endl;
            cout << "Enter the flight you want to book" << endl;
            cin >> choice1;
            if (choice1 == 1) {
                charges = 14000;
                cout << "You have booked UK Boeing 493" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 2) {
                charges = 10000;
                cout << "You have booked UK Luftania" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 3) {
                charges = 17000;
                cout << "You have booked UK Boeing 601" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 4) {
                charges = 7500;
                cout << "You have booked UK Boeing 28" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else {
                cout << "Invalid input" << endl;
                flights();
            }
            break;
        }
        case 4: {
            cout << "Welcome to German Airlines" << endl;
            cout << "Please checkout the flight details below";

            cout << "1. German Boeing 493" << endl;
            cout << "11/07/2024 8:00 AM 10Hrs Rs. 14000" << endl;
            cout << "2. German Luftania" << endl;
            cout << "11/07/2024 11:00 AM 12Hrs Rs. 10000" << endl;
            cout << "3. German Boeing 601" << endl;
            cout << "11/07/2024 6:00 AM 8Hrs Rs. 17000" << endl;
            cout << "4. German Boeing 28" << endl;
            cout << "11/07/2024 5:00 PM 15Hrs Rs. 7500" << endl;

            cout << "" << endl;
            cout << "Enter the flight you want to book" << endl;
            cin >> choice1;
            if (choice1 == 1) {
                charges = 14000;
                cout << "You have booked German Boeing 493" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 2) {
                charges = 10000;
                cout << "You have booked German Luftania" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 3) {
                charges = 17000;
                cout << "You have booked German Boeing 601" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 4) {
                charges = 7500;
                cout << "You have booked German Boeing 28" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else {
                cout << "Invalid input" << endl;
                flights();
            }
            break;
        }
        case 5: {
            cout << "Welcome to Italian Airlines" << endl;
            cout << "Please checkout the flight details below";

            cout << "1. Italian Boeing 493" << endl;
            cout << "11/07/2024 8:00 AM 10Hrs Rs. 14000" << endl;
            cout << "2. Italian Luftania" << endl;
            cout << "11/07/2024 11:00 AM 12Hrs Rs. 10000" << endl;
            cout << "3. Italian Boeing 601" << endl;
            cout << "11/07/2024 6:00 AM 8Hrs Rs. 17000" << endl;
            cout << "4. Italian Boeing 28" << endl;
            cout << "11/07/2024 5:00 PM 15Hrs Rs. 7500" << endl;

            cout << "" << endl;
            cout << "Enter the flight you want to book" << endl;
            cin >> choice1;
            if (choice1 == 1) {
                charges = 14000;
                cout << "You have booked Italian Boeing 493" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 2) {
                charges = 10000;
                cout << "You have booked Italian Luftania" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 3) {
                charges = 17000;
                cout << "You have booked Italian Boeing 601" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else if (choice1 == 4) {
                charges = 7500;
                cout << "You have booked Italian Boeing 28" << endl;
                cout << "You can go back to the main menu" << endl;

            }
            else {
                cout << "Invalid input" << endl;
                flights();
            }
            break;
        }
        default: {
            cout << "Invalid input, shifting to the main menu" << endl;
            menu();
            break;
        }
        }
    }
};

int ticket_registration::choice;
float ticket_registration::charges;

class tickets : public ticket_registration, public customer_details {
public:
    void bills() {
        string destinationss = "";
        ofstream outf("Records.txt");
        {
            outf << "Customer ID: " << customer_details::C_ID << endl;
            outf << "Customer Name: " << customer_details::name << endl;
            outf << "Customer Gender: " << customer_details::gender << endl;
            outf << "\t Description" << endl << endl;
            if (ticket_registration::choice == 1) {
                destinationss = "USA";
            }
            else if (ticket_registration::choice == 2) {
                destinationss = "Australia";
            }
            else if (ticket_registration::choice == 3) {
                destinationss = "UK";
            }
            else if (ticket_registration::choice == 4) {
                destinationss = "Germany";
            }
            else if (ticket_registration::choice == 5) {
                destinationss = "Italy";
            }
            outf << "Destination\t\t" << destinationss << endl;
            outf << "Flight cost: \t\t" << ticket_registration::charges << endl;
        }
        outf.close();
    }

    void display() {
        ifstream ifs("Records.txt");
        {
            if (!ifs) {
                cout << "File error!" << endl;
            }
            while (!ifs.eof()) {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

void menu() {
    int mainChoice;
    int inChoice;
    int gotoMenu;
    cout << "\t                XYZ Airlines \n" << endl;
    cout << "\t ---------------Main Menu---------------" << endl;

    cout << "\t|                                       |" << endl;
    cout << "\t| Press 1 to add the Customer Details    |" << endl;
    cout << "\t| Press 2 for Flight Registration        |" << endl;
    cout << "\t| Press 3 for Tickets and Charges        |" << endl;
    cout << "\t| Press 4 to Exit                       |" << endl;
    cout << "\t|                                       |" << endl;
    cout << "\t|---------------------------------------|" << endl;

    cout << "Enter your choice: ";
    cin >> mainChoice;

    customer_details cd;
    ticket_registration tr;
    tickets t;

    switch (mainChoice) {
    case 1:
        cout << "-------------Customers-------------\n" << endl;
        cd.information();
        cout << "Press any key to go back to main menu: " << endl;
        cin >> gotoMenu;
        menu();
        break;
    case 2:
        cout << "------Book a flight using this system-------\n" << endl;
        tr.flights();
        break;
    case 3:
        cout << "------Get your ticket-------\n" << endl;
        t.bills();
        cout << "Your ticket is printed, you can collect it \n" << endl;
        cout << "Press 1 to display your ticket " << endl;
        cin >> gotoMenu;
        if (gotoMenu == 1) {
            t.display();
            cout << "Press any key to go back to main menu: " << endl;
            cin >> gotoMenu;
            menu();
        }
        else {
            menu();
        }
        break;
    case 4:
        cout << "\n\n\t________Thank You______" << endl;
        break;
    default:
        cout << "Invalid input, shifting to the main menu" << endl;
        menu();
        break;
    }
}

int main() {
    Mgmt Mobj;
    return 0;
}
