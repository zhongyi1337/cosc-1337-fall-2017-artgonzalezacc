#ifndef _PAYROLL_H
#define _PAYROLL_H

double getOvertimeHours(double totalHours);
double getRegularHours(double totalHours);
double getGrossPay(double regularHours, double overtimeHours, double hourlyRate);
double getGrossPay(double salary);

#endif