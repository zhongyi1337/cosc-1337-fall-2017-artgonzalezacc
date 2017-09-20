#include"Payroll.h"
#include <sstream>
#include<iostream>
#include<iomanip>
double ot(double hours)
{
	double ot = 0;
	if (hours > 40)
	{
		ot = hours - 40;
	}
	return ot;
}

double regularpay(double reg_hours, double pay_rate)
{
	double regularpay;
	regularpay = reg_hours*pay_rate;
	return regularpay;
}


double otpay(double pay_rate, double ot)
{
	double grosspay;
	const double vt_rate = 1.5;
	grosspay = ot*vt_rate*pay_rate;

	return grosspay;
}

double grosspay(double regularpay, double otpay)
{
	double grosspay = regularpay + otpay;
	return grosspay;
}

double grosspay(double salary)
{
	const double period = 26;
	double grosspay = salary / period;
	return grosspay;
}

double getFIT(double grosspay)
{
	const double fit_rate = 0.15;
	double fit = grosspay * fit_rate;
	return fit;

}
double getFICASSN(double grosspay)
{
	const double ssn_rate = 0.062;
	double ssn = grosspay * ssn_rate;
	return ssn;
}

double getFICAMED(double grosspay)
{
	const double med_rate = 0.0145;
	double med = grosspay * med_rate;
	return med;
}

double getNetpay(double grosspay, double fit, double ssn, double med)
{
	double netpay = grosspay - fit - ssn - med;
	return netpay;
}

string contoStr(double db) {
	string str;
	stringstream ss;
	ss << db;
	str = ss.str();
	return str;
}

void printout(string  results[])
{
	cout << left << setw(30) << "Name" << right << setw(10) << "Hours" << setw(10) << "OT Hours" << setw(10) << "Rate";
	cout << setw(10) << " OT Rate" << setw(14) << "Regular Pay" << setw(10) << "OT Pay" << setw(10) << "Grosspay";
	cout << setw(10) << "FICA SSN" << setw(10) << "FICA Med" << setw(10) << "FIT" << setw(10) << "Net Pay" << endl;
	for (int i = 0; i < 3; i++ )
	{
		cout << left << setw(30) << results[0+i*12] << right << setw(10) << results[1 + i * 12] << setw(10) << results[2 + i * 12] 
			<< setw(10) << results[3+ i * 12] << setw(10) << results[4 + i * 12] << setw(14) << results[5 + i * 12]
			<< setw(10) << results[6 + i * 12] << setw(10) << results[7 + i * 12] << setw(10) << results[8 + i * 12] << setw(10) 
			<< results[9 + i * 12] << setw(10) << results[10 + i * 12] << setw(10) << results[11 + i * 12] << endl;
	}
}
