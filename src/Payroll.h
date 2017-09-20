#ifndef _PAYROLL_H
#define _PAYROLL_H

#include <string>
using namespace std;
double ot(double hours);
double regularpay(double hours, double pay_rate);
double otpay(double pay_rate, double ot);
double grosspay(double regularpay, double otpay);
double grosspay(double salary);
double getFIT(double grosspay);
double getFICASSN(double grosspay);
double getFICAMED(double grosspay);
double getNetpay(double grosspay, double fit, double ssn, double med);
string contoStr(double db);
void printout(string results[]);

#endif
