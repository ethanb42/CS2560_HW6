

#include <iostream>
#include <string>
#include <exception>

class Employee {
private: 
	std::string name;
	int number;
	int hireDay;
	int hireMonth;
	int hireYear;
public: 
	//default constructor
	Employee() {
		name = "";
		number = 0; 
		hireDay = 0;
		hireMonth = 0; 
		hireYear = 0;
	}
	
	//primary constructor
	Employee(std::string n, int num, int day, int month, int year) {
		name = n;
		setNumber(num);
		//number = num;
		hireDay = day;
		hireMonth = month;
		hireYear = year;
	}

	//Exception class
	class  InvalidEmployeeNumber {
	private:
		int num;
	public:
		InvalidEmployeeNumber(int n) {
			num = n;
		}

		int getNum() {
			return num;
		}
	};

	//getter and setters
	std::string getName() {
		return name;
	}

	void setName(std::string n) {
		name = n;
	}

	int getNumber() {
		return number;
	}

	void setNumber(int n) {
		if (n < 0 || n>9999) {
			throw InvalidEmployeeNumber(n);
		}
		else {
			number = n;
		}
		
	}

	int getHireDay() {
		return hireDay;
	}

	void setHireDay(int d) {
		hireDay = d;
	}

	int getHireMonth() {
		return hireMonth;
	}

	void setHireMonth(int m) {
		hireMonth = m;
	}

	int getHireYear() {
		return hireYear;
	}

	void setHireYear(int y) {
		hireYear = y;
	}


};

class ProductionWorker: public Employee{
private:
	int shift;
	double payRate;

public:
	//default constructor
	ProductionWorker() : Employee() {
		shift = 1;
		payRate = 0.0;
	}
	//primary constructor
	ProductionWorker(std::string n, int num, int d, int m, int y, int s, double p) : Employee(n, num, d, m, y) {
		//shift = s;
		//payRate = p;
		setShift(s);
		setPayRate(p);
	}

	//Exceptions
	class InvalidShift {
	private:
		int val;
	public:

		InvalidShift(int s) {
			val = s;
		}

		int getShift() {
			return val;
		}
	};

	class InvalidPayRate {
	private:
		double pay;
	public: 
		InvalidPayRate(double p) {
			pay = p;
		}

		double getPayRate() {
			return pay;
		}


	};


	int getShift() {
		return shift;
	}

	void setShift(int s) {
		if (s != 1 && s != 2) {
			throw InvalidShift(s);
		}
		else {
			shift = s;
		}
		
	}

	double getPayRate() {
		return payRate;
	}

	void setPayRate(double p) {
		if (p < 0.0) {
			throw InvalidPayRate(p);
		}
		else {
			payRate = p;
		}
	}
};




//testing exception project
int main() {
	//create default valid production worker
	ProductionWorker worker;

	//display the workers default data
	std::cout << "Default Employee Data\nName: " << worker.getName() << "\nEmp Num: " << worker.getNumber()
		<< "\nHire Date: " << worker.getHireMonth() << "-" << worker.getHireDay() << "-" << worker.getHireYear()
		<< "\nShift: " << worker.getShift() << "\nPay: " << worker.getPayRate() << std::endl;

	//try to change to invalid number
	std::cout << "\nTrying to set employee number to -10" << std::endl;
	try {
		worker.setNumber(-10);
	}
	catch (Employee::InvalidEmployeeNumber e) {
		std::cout << "Invalid number, you entered " << e.getNum() << std::endl;

	}

		//try to change to invalid shift
	std::cout << "\nTrying to set Production Worker Shift to 3" << std::endl;
	try {
		worker.setShift(3);
	}
	catch (ProductionWorker::InvalidShift e) {
		std::cout << "Invalid shift number, you entered " << e.getShift() << std::endl;

	}
		//try to change to invalid pay
	std::cout << "\nTrying to set Production worker pay to -10" << std::endl;
	try {
		worker.setPayRate(-10);
	}
	catch (ProductionWorker::InvalidPayRate e) {
		std::cout << "Invalid pay rate, you entered " << e.getPayRate() << std::endl;
	}

		
	std::cout<< "\n\nTesting Finished" << std::endl;
	getchar();
	return 0;
}
