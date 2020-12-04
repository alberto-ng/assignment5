# include "Student.h"

Student::Student(){
    m_id = 0;
    m_name = "";
    m_year = "";
    m_major = "";
    m_gpa = 0.0;
    m_advisor = "";
}

Student::Student(int id, string name, string year, string major, double gpa, string advisor){
    m_id = id;
    m_name = name;
    m_year = year;
    m_major = major;
    m_gpa = gpa;
    m_advisor = advisor;
}

Student::~Student(){

}


void Student::setID(int id){
    m_id = id;
}

void Student::setName(string name){
    m_name = name;
}

void Student::setYear(string year){
    m_year = year;
}

void Student::setMajor(string major){
    m_major = major;
}

void Student::setGPA(double gpa){
    m_gpa = gpa;
}

void Student::setAdvisor(string advisor){
    m_advisor = advisor;
}


int Student::getID(){
    return m_id;
}

string Student::getName(){
    return m_name;
}

string Student::getYear(){
    return m_year;
}

string Student::getMajor(){
    return m_major;
}

double Student::getGPA(){
    return m_gpa;
}

string Student::getAdvisor(){
    return m_advisor;
}
