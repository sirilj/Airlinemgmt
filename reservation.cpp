#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Flight {
public:
    Flight(string id, int totalSeats) : flightID(id), totalSeats(totalSeats), bookedSeats(0) {}

    Flight(string id, int totalSeats, int bookedSeats) : flightID(id), totalSeats(totalSeats), bookedSeats(bookedSeats) {}

    string getFlightID() const {
        return flightID;
    }

    int getTotalSeats() const {
        return totalSeats;
    }

    int getAvailableSeats() const {
        return totalSeats - bookedSeats;
    }

    bool bookSeats(int seats) {
        if (seats <= getAvailableSeats()) {
            bookedSeats += seats;
            return true;
        } else {
            return false;
        }
    }

    int getBookedSeats() const {
        return bookedSeats;
    }

private:
    string flightID;
    int totalSeats;
    int bookedSeats;
};

class AirlineReservationSystem {
public:
    void addFlight(string flightID, int totalSeats) {
        flights.push_back(Flight(flightID, totalSeats));
    }

    void displayFlights() const {
        for (const auto &flight : flights) {
            cout << "Flight ID: " << flight.getFlightID() << ", Available Seats: " << flight.getAvailableSeats() << endl;
        }
    }

    bool bookFlight(string flightID, int seats) {
        for (auto &flight : flights) {
            if (flight.getFlightID() == flightID) {
                return flight.bookSeats(seats);
            }
        }
        return false; // Flight not found
    }

    void saveData() const {
        ofstream file("flights_data.txt");
        for (const auto &flight : flights) {
            file << flight.getFlightID() << " " << flight.getTotalSeats() << " " << flight.getBookedSeats() << endl;
        }
        file.close();
    }

    void loadData() {
        ifstream file("flights_data.txt");
        if (file.is_open()) {
            string flightID;
            int totalSeats;
            int bookedSeats;
            while (file >> flightID >> totalSeats >> bookedSeats) {
                flights.push_back(Flight(flightID, totalSeats, bookedSeats));
            }
            file.close();
        }
    }

private:
    vector<Flight> flights;
};

int main() {
    AirlineReservationSystem system;
    system.loadData(); // Load existing flight data

    int choice;
    string flightID;
    int seats;

    while (true) {
        cout << "1. Display Flights\n2. Book Flight\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.displayFlights();
                break;

            case 2:
                cout << "Enter Flight ID: ";
                cin >> flightID;
                cout << "Enter number of seats to book: ";
                cin >> seats;

                if (system.bookFlight(flightID, seats)) {
                    cout << "Booking successful!" << endl;
                } else {
                    cout << "Booking failed. Not enough available seats or invalid flight ID." << endl;
                }
                break;

            case 3:
                system.saveData(); // Save flight data before exiting
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
