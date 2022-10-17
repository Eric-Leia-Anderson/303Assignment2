#ifndef NONPROFESSIONAL_H
#define NONPROFESSIONAL_H

#include "Employee.h"

class Nonprofessional : public Employee
{
private:
	double vacationPercent = 0.05;
	double healthcarePercent = 0.08;
public:
	Nonprofessional(double hours, double wage) : Employee(hours, wage, 0, 0, 0, 0.08, 0.05) {};
	Nonprofessional(double hours, double wage, int vacation, double salary, double healthcare) : Employee(hours, wage, vacation, salary, healthcare, 0.08, 0.05) {};
	double calculateWeeklySalary();
	double calculateWeeklyHealthCare();
	double calculateWeeklyVacationDays();
	void setHoursWorked(double hours);
};
#endif