// Adam Allard
// CISS_243_DEB_14-54
// NumDays class header file
// this class converts the number of hours worked to days based on an 8 hour working day

#ifndef NUMDAYS_H
#define NUMDAYS_H

class NumDays
{
private:
	double hours;
	double days;
public:
	// construcotrs 
	NumDays();
	NumDays(double);

	// setters 
	void setHours(double);
	void setDays(double);
	void convert();

	// getters 
	double getHours() const;
	double getDays() const;

	// operator overloaders 
	NumDays operator+(const NumDays &);
	NumDays operator-(const NumDays &);
	NumDays operator++();     // prefix ++ 
	NumDays operator++(int);  // postfix ++ 
	NumDays operator--();     // prefix -- 
	NumDays operator--(int);  // postfix -- 
};
#endif