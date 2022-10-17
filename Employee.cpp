#include "Employee.h"
#include <iostream>
using namespace std;

/* This is a default constructor that sets the variables to 0. */
Employee::Employee() {
	hoursWorked = 0;
	hourlyWage = 0;
	vacationDays = 0;
	weeklySalary = 0;
	weeklyHealthcare = 0;
	healthcarePercentage = 0;
	vacationPercentage = 0;
}

/* This is another constructor that sets the variables to the parameters given. */
Employee::Employee(double hours, double wage, int vacation, double salary, double healthcare, double healthcarePercent, double vacationPercent) {
	hoursWorked = hours;
	hourlyWage = wage;
	vacationDays = vacation;
	weeklySalary = salary;
	weeklyHealthcare = healthcare;
	healthcarePercentage = healthcarePercent;
	vacationPercentage = vacationPercent;
}

/* This sets the hours worked for a Nonprofessional employee and uses the Employee function to do so. */
void Employee::setHoursWorked(double hours) {
	hoursWorked = hours;
}

