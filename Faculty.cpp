# include "Faculty.h"

Faculty::Faculty(){
    m_id = 0;
    m_name = "";
    m_year = "";
    m_dept = "";
    m_advisees = new linkedList<string>();
}

Faculty::Faculty(int id, string name, string year, string dept){
    m_id = id;
    m_name = name;
    m_year = year;
    m_dept = dept;
    m_advisees = new linkedList<string>();
}

Faculty::~Faculty(){

}


void Faculty::setID(int id){
    m_id = id;
}

void Faculty::setName(string name){
    m_name = name;
}

void Faculty::setYear(string year){
    m_year = year;
}

void Faculty::setDept(string dept){
    m_dept = dept;
}

void Faculty::setAdvisee(string advisee){
    m_advisees -> insertBack(advisee);
}


int Faculty::getID(){
    return m_id;
}

string Faculty::getName(){
    return m_name;
}

string Faculty::getYear(){
    return m_year;
}

string Faculty::getDept(){
    return m_dept;
}

linkedList<string>* Faculty::getAdvisees(){
    return m_advisees;
}
