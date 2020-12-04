# include <iostream>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;


class Student{
    public:
        Student();
        Student(int id, string name, string year, string major, double gpa, string advisor);
        ~Student();

        void setID(int id);
        void setName(string name);
        void setYear(string year);
        void setMajor(string major);
        void setGPA(double gpa);
        void setAdvisor(string advisor);

        int getID();
        string getName();
        string getYear();
        string getMajor();
        double getGPA();
        string getAdvisor();

        int m_id;
        string m_name;
        string m_year;
        string m_major;
        double m_gpa;
        string m_advisor;

};

#endif
