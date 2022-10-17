#ifndef PROFESSIONAL_H
#define PROFESSIONAL_H

#include "Employee.h"

class Professional : public Employee
{
public:
	Professional(double wage, int vacationSetDays) : Employee(40, wage, vacationSetDays, 0, 0, 0.10, 0.05) {};
	Professional(double hours, double wage, int vacation, double salary, double healthcare, int vacationSetDays) : Employee(hours, wage, vacation, salary, healthcare, 0.10, 0.05) {};
	double calculateWeeklySalary();
	double calculateWeeklyHealthCare();
	double calculateWeeklyVacationDays();
	void setHoursWorked(double hours);
private:
	double vacationPercent = 0.05;
	double healthcarePercent = 0.10;
};
#endif
