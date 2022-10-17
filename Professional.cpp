#include "Professional.h"

/* This sets the hours worked for a Professional employee and uses the Employee function to do so. */
void Professional::setHoursWorked(double hours) {
	Employee::setHoursWorked(hours);
}

/* Calculates the number of vacation day earned. Professionals have a set number of vacation days at the beginning of the year and earn more at a rate of 0.05.*/
double Professional::calculateWeeklySalary() {
	weeklySalary = hoursWorked * hourlyWage;
	return weeklySalary;
}

/* Multiplies the weekly salary by the percentage for healthacre. Professionals have a healthcare percentage of 0.10. */
double Professional::calculateWeeklyHealthCare() {
	return weeklySalary * healthcarePercentage;
}

/* Multiplies hours worked by hourly wage. Professionals have 40 hours automatically.*/
double Professional::calculateWeeklyVacationDays() {
	vacationDays += vacationPercentage * hoursWorked;
	return vacationDays;
}