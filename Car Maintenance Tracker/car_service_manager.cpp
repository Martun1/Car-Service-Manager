#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

struct Repair {
    string section;
    string type;
    string date;
    int mileage;
};

struct Car {
    string brand;
    string model;
    vector<Repair> repairs;
};

vector<Car> cars;

// Зареждане на данни от файл
void loadData() {
    ifstream file("car_service.txt");
    if (!file.is_open()) return;
    string line;
    Car currentCar;
    while (getline(file, line)) {
        if (line == "---") {
            cars.push_back(currentCar);
            currentCar = Car();
        } else if (currentCar.brand.empty()) {
            stringstream ss(line);
            getline(ss, currentCar.brand, ',');
            getline(ss, currentCar.model, ',');
        } else {
            stringstream ss(line);
            Repair r;
            getline(ss, r.section, ',');
            getline(ss, r.type, ',');
            getline(ss, r.date, ',');
            string mileageStr;
            getline(ss, mileageStr, ',');
            r.mileage = stoi(mileageStr);
            currentCar.repairs.push_back(r);
        }
    }
    // Последната кола
    if (!currentCar.brand.empty()) cars.push_back(currentCar);
    file.close();
}

// Записване във файл
void saveData() {
    ofstream file("car_service.txt");
    for (auto &car : cars) {
        file << car.brand << "," << car.model << "\n";
        for (auto &r : car.repairs) {
            file << r.section << "," << r.type << "," << r.date << "," << r.mileage << "\n";
        }
        file << "---\n";
    }
    file.close();
}

// Добавяне на автомобил
void addCar() {
    Car c;
    cout << "Brand: "; cin >> c.brand;
    cout << "Model: "; cin >> c.model;
    cars.push_back(c);
    cout << "Car added successfully!\n";
}

// Добавяне на ремонт
void addRepair() {
    if (cars.empty()) {
        cout << "No cars available. Add a car first.\n";
        return;
    }
    cout << "Select car:\n";
    for (int i=0; i<cars.size(); i++)
        cout << i+1 << ". " << cars[i].brand << " " << cars[i].model << "\n";
    int choice; cin >> choice;
    if (choice < 1 || choice > cars.size()) {
        cout << "Invalid choice.\n";
        return;
    }
    Repair r;
    cout << "Section (Engine/Chassis/Body/Electronics): "; cin >> r.section;
    cout << "Repair type (Oil/Filters/Belts/SparkPlugs/etc.): "; cin >> r.type;
    cout << "Date (DD/MM/YYYY): "; cin >> r.date;
    cout << "Mileage: "; cin >> r.mileage;
    cars[choice-1].repairs.push_back(r);
    cout << "Repair added successfully!\n";
}

// Показване на история
void showHistory() {
    if (cars.empty()) {
        cout << "No cars available.\n";
        return;
    }
    for (auto &car : cars) {
        cout << "\n=== " << car.brand << " " << car.model << " ===\n";
        if (car.repairs.empty()) cout << "No repairs yet.\n";
        for (auto &r : car.repairs) {
            cout << r.section << " | " << r.type << " | " << r.date << " | " << r.mileage << " km\n";
        }
    }
}

int main() {
    loadData();
    int choice;
    do {
        cout << "\n1. Add Car\n2. Add Repair\n3. Show Repair History\n4. Save & Exit\nChoice: ";
        cin >> choice;
        switch(choice) {
            case 1: addCar(); break;
            case 2: addRepair(); break;
            case 3: showHistory(); break;
            case 4: saveData(); cout << "Data saved. Exiting.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while(choice != 4);
    return 0;
}
