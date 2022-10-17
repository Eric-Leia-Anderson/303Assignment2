#include "Nonprofessional.h"

/* This sets the hours worked for a Nonprofessional employee and uses the Employee function to do so. */
void Nonprofessional::setHoursWorked(double hours) {
	Employee::setHoursWorked(hours);
}

/* Calculates the number of vacation day earned. Nonprofessionals don't have set days and earn at a rate of 0.05.*/
double Nonprofessional::calculateWeeklySalary() {
	weeklySalary = hoursWorked * hourlyWage;
	return weeklySalary;
}

/* Multiplies the weekly salary by the percentage for healthacre. Nonprofessionals have a healthcare percentage of 0.08. */
double Nonprofessional::calculateWeeklyHealthCare() {
	return weeklySalary * healthcarePercentage;
}

/* Multiplies hours worked by hourly wage. Nonprofessionals have their own hours each week.*/
double Nonprofessional::calculateWeeklyVacationDays() {
	vacationDays += vacationPercentage * hoursWorked;
	return vacationDays;
}
