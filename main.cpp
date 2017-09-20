#include <iostream>
#include <sstream>
#include <iomanip>
#include "Payroll.h"

using namespace std;

int main() {
    enum employeeCategory { hourly = 104, salary = 115 };

    double totalHours = 0, hourlyRate = 0, grossPay=0, regularHours = 0, overtimeHours = 0;
    char category, choice;
    stringstream ss;

    do
    {

        do
        {
            cout << "Enter employee category h or s: ";
            cin >> category;
        } while(! (int(category) == hourly || int(category) == salary));

        if (int(category) == hourly)
        {
            do
            {
                cout << "Enter total hours worked [0-60]: ";
                cin >> totalHours;
            } while (totalHours < 0 || totalHours > 60);

            do
            {
                cout << "Enter hourly rate [0-50]: ";
                cin >> hourlyRate;
            } while (hourlyRate < 0 || hourlyRate > 50);

            regularHours = getRegularHours(totalHours);
            overtimeHours = getOvertimeHours(totalHours);
            grossPay = getGrossPay(regularHours, overtimeHours, hourlyRate);
        }
        else if (int(category) == salary)
        {
            double yearly_salary;
            cout << "Enter yearly salary: ";
            cin >> yearly_salary;
            grossPay = getGrossPay(yearly_salary);
        }

        ss<<setw(8)<<regularHours<<setw(8)<<overtimeHours<<setw(8)<<grossPay<<endl;
        cout << "Enter y for another record: ";
        cin >> choice;

    } while (choice == 'y');

    cout<<ss.str();

    return 0;
}