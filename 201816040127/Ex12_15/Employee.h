#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>

class Employee
{
public:
    Employee( const std::string &, const std::string &,const std::string &);
    virtual ~Employee(){}//virtual destructor

    void setFirstName( const std::string &);//set first name
    std::string getFirstName() const;//return first name

    void setLastName( const std::string &);//set last name
    std::string getLastName() const;//return last name

    void setSocialSecurityNumber( const std::string &);//set SSN
    std::string getSocialSecurityNumber() const;//return SSN

    //pure virtual function makes Employee an abstract base class
    virtual double earnings() const = 0;//pure virtual
    virtual void print() const;//virtual
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;

};//end class Employee
#endif // EMPLOYEE_H_INCLUDED