#include "Payroll.h"

const double STANDARD_WEEK_HOURS = 40;
const double OVER_TIME_MULTIPLIER = 1.5;
const double SALARY_FREQUENCY = 26;

/**
 * Returns over time hours
 *
 * @param totalHours the total hours worked for one week
 * @return over time hours worked in one week
 */
double getOvertimeHours(double totalHours)
{
    double hours = 0;

    if(totalHours > STANDARD_WEEK_HOURS)
    {
        hours =  totalHours - STANDARD_WEEK_HOURS;
    }

    return hours;
}

/**
 * Returns regular payroll hours
 *
 * @param totalHours total hours worked for one week
 * @return regular payroll hours excluding over time hours
 */
double getRegularHours(double totalHours)
{
    double hours = totalHours;

    if(totalHours > 40)
        hours = 40;
    else if(totalHours < 0)
        hours = 0;

    return hours;
}

/**
  Returns gross pay for an hourly employee

  @param totalHours expects hours greater than 0
  @param hourlyRate expects a rate greater than 0
 * */
double getGrossPay(double regularHours, double overtimeHours, double hourlyRate)
{
    double grossPay = regularHours * hourlyRate + overtimeHours * hourlyRate * OVER_TIME_MULTIPLIER;

    return grossPay;
}

/**
 * Returns gross salary for a salaried employee for a salary frequency(biweekly)
 *
 * @param salary the yearly salary
 * @return the salary frequence(biweekly) salary
 */
double getGrossPay(double salary)
{
    return salary / SALARY_FREQUENCY;
}

