#include <iostream>

using namespace std;

class Student{

    private:
    std::string name;
    int studentNumber;
    double average;

};
public:


    int student::getStudentNumber() const
    {
        return studentNumber;
    }

    void Student::setStudentNumber(int newStudentNumber)
    {
        studentNumber = newStudentNumber;
    }

    double Student::getAverage() const
    {
        return average;
    }

    void Student::setAverage(double newAverage)
    {
        average = newAverage;
    }

    string Student::getName() const
    {
        return name;
    }

    void Student::setName(const string &newName)
    {
        name = newName;
    }
    std::string getName() const;
    void setName(const std::string &newName);



    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);



    double getAverage() const;
    void setAverage(double newAverage);

#include <memory>
    unique_ptr<Student> objectPerson = make_unique<Student>();




