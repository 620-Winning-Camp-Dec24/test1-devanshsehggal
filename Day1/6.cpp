#include <iostream>
using namespace std;

double salary(double stipend) {
    return stipend;
}

double salary(double basic, double bonus) {
    return (basic + bonus);
}

double salary(double basic, double bonus, double pi) {
    return (basic + bonus + pi);
}

int main() {
    int choice;
    cout << "Select the Employee Level:\n";
    cout << "1. Intern\n2. Regular Employee\n3. Manager\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double stipend, sal;
            cout << "Enter basic stipend: ";
            cin >> stipend;
            sal = salary(stipend);
            cout << "Salary for Intern: " << sal << endl;
            break; 
        }
        case 2: {
            double basic, bonus, sal;
            cout << "Enter basic salary: ";
            cin >> basic;
            cout << "Enter bonus amount: ";
            cin >> bonus;
            sal = salary(basic, bonus);
            cout << "Salary for Regular Employee: " << sal << endl;
            break; 
        }
        case 3: {
            double basic, bonus, pi, sal;
            cout << "Enter basic salary: ";
            cin >> basic;
            cout << "Enter bonus amount: ";
            cin >> bonus;
            cout << "Enter performance incentives: ";
            cin >> pi;
            sal = salary(basic, bonus, pi);
            cout << "Salary for Manager: " << sal << endl;
            break; 
        }
        default: {
            cout << "Invalid choice!" << endl;
            break;
        }
    }
    return 0;
}
