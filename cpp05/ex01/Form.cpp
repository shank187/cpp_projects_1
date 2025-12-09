#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("default"), isSigned(false), signGrade(150), execGrade(150)
{
}

Form::Form(const std::string& name, const int& signGrade, const int& execGrade):
name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
}

Form::~Form()
{
}

Form::Form(const Form& other)
: name(other.getName()), isSigned(other.getSignedGrade()), signGrade(other.getSignedGrade()), execGrade(other.getExecGrade())
{
}

Form& Form::operator=(const Form& other)
{
    if(this!= &other)
        this->isSigned = other.getSignedGrade();
    return (*this);
}
