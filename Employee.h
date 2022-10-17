#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
	virtual double calculateWeeklySalary() = 0;
	virtual double calculateWeeklyHealthCare() = 0;
	virtual double calculateWeeklyVacationDays() = 0;
	Employee();
	Employee(double hours, double wage, int vacation, double salary, double healthcare, double healthcarePercent, double vacationPercent);
	void setHoursWorked(double hours);

protected:
	double hoursWorked;
	double hourlyWage;
	double vacationDays;
	double weeklySalary;
	double weeklyHealthcare;
	double healthcarePercentage;
	double vacationPercentage;

};
#endif

