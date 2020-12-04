# include <iostream>
# include "linkedList.h"

#ifndef FACULTY_H
#define FACULTY_H

using namespace std;


class Faculty{
    public:
        Faculty();
        Faculty(int id, string name, string year, string dept);
        ~Faculty();

        void setID(int id);
        void setName(string name);
        void setYear(string year);
        void setDept(string dept);
        void setAdvisee(string advisee);

        int getID();
        string getName();
        string getYear();
        string getDept();
        linkedList<string>* getAdvisees();

        int m_id;
        string m_name;
        string m_year;
        string m_dept;
        linkedList<string>* m_advisees;

};

#endif
