#include "Employee.h"
#include "Professional.h"
#include "Nonprofessional.h"
#include <iostream>
using namespace std;

int main() {
	//double wage, double vacationSetDays
	Professional* employee1 = new Professional(20.0, 25);

	//double hours, double wage
	Nonprofessional* employee2 = new Nonprofessional(20, 20.0);

	cout << "Week 1:                                       \n";
	cout << "Employee 1 is a professional. \n Salary: $" << employee1->calculateWeeklySalary() << endl;
	cout << "Healthcare: $" << employee1->calculateWeeklyHealthCare() << endl;
	cout << "Vacation: " << employee1->calculateWeeklyVacationDays() << endl;
	cout << "\n";

	cout << "Employee 2 is a nonprofessional. \n Salary: $" << employee2->calculateWeeklySalary() << endl;
	cout << "Healthcare: $" << employee2->calculateWeeklyHealthCare() << endl;
	cout << "Vacation: " << employee2->calculateWeeklyVacationDays() << endl;
	cout << "\n";

	cout << "Week 2:                                       \n";
	cout << "Employee 1 is a professional. \n Salary: $" << employee1->calculateWeeklySalary() << endl;
	cout << "Healthcare: $" << employee1->calculateWeeklyHealthCare() << endl;
	cout << "Vacation: " << employee1->calculateWeeklyVacationDays() << endl;
	cout << "\n";

	employee2->setHoursWorked(20);

	cout << "Employee 2 is a nonprofessional. \n Salary: $" << employee2->calculateWeeklySalary() << endl;
	cout << "Healthcare: $" << employee2->calculateWeeklyHealthCare() << endl;
	cout << "Vacation: " << employee2->calculateWeeklyVacationDays() << endl;
	cout << "\n";

	cout << "Week 3:                                       \n";
	cout << "Employee 1 is a professional. \n Salary: $" << employee1->calculateWeeklySalary() << endl;
	cout << "Healthcare: $" << employee1->calculateWeeklyHealthCare() << endl;
	cout << "Vacation: " << employee1->calculateWeeklyVacationDays() << endl;
	cout << "\n";

	employee2->setHoursWorked(18);

	cout << "Employee 2 is a nonprofessional. \n Salary: $" << employee2->calculateWeeklySalary() << endl;
	cout << "Healthcare: $" << employee2->calculateWeeklyHealthCare() << endl;
	cout << "Vacation: " << employee2->calculateWeeklyVacationDays() << endl;
	cout << "\n";

	cout << "Week 4:                                       \n";
	cout << "Employee 1 is a professional. \n Salary: $" << employee1->calculateWeeklySalary() << endl;
	cout << "Healthcare: $" << employee1->calculateWeeklyHealthCare() << endl;
	cout << "Vacation: " << employee1->calculateWeeklyVacationDays() << endl;
	cout << "\n";

	employee2->setHoursWorked(18);

	cout << "Employee 2 is a nonprofessional. \n Salary: $" << employee2->calculateWeeklySalary() << endl;
	cout << "Healthcare: $" << employee2->calculateWeeklyHealthCare() << endl;
	cout << "Vacation: " << employee2->calculateWeeklyVacationDays() << endl;
	cout << "\n";

}