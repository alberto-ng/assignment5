# include "Sim.h"

// default constructor
Sim::Sim(){
    masterS = new BST<Student>();
    masterF = new BST<Faculty>();
}

// destructor
Sim::~Sim(){
    delete masterF;
    delete masterS;
}

// build tree and runt loop to display action output
void Sim::start(){
    build();
    cout <<"Student id small -> large." << endl;
    masterS -> printInOrder(masterS -> root);
    cout << endl;
    cout <<"Faculty id small -> large." << endl;
    masterF -> printInOrder(masterF -> root);
    cout << endl;
    // loop going to promt the 14 actions to pick from, havent finished
    //cout << "Yep" << endl;
}

// building faculty tree and student tree
void Sim::build(){
    //cout << "1" << endl;
    // creating faculty
    Faculty* f1 = new Faculty(242,"Ben O.","Chair","Science");
    Faculty* f2 = new Faculty(292,"Kim P.","Chair","Math");
    Faculty* f3 = new Faculty(392,"Ken K.","Chair","English");

    //cout << "2" << endl;
    // creating students
    Student* s1 = new Student(236,"Bob M.","Senior","Biology",3.14,"Ben O.");
    Student* s2 = new Student(764,"Sam S.","Junior","Statistics",3.84,"Kim P.");
    Student* s3 = new Student(231,"Pam P.","Freshman","Chemistry",3.77,"Ben O.");
    Student* s4 = new Student(452,"Tom P.","Senior","Literature",3.14,"Ken K.");
    Student* s5 = new Student(341,"Tim E.","Junior","Calculus",3.84,"Kim P.");
    Student* s6 = new Student(392,"Tom P.","Sophmore","Math Theory",3.77,"Kim P.");

    //cout << "3" << endl;
    // assigning advisees to faculty
    f1 -> setAdvisee("Bob M.");
    f1 -> setAdvisee("Pam P.");
    f2 -> setAdvisee("Sam S.");
    f2 -> setAdvisee("Tim E.");
    f2 -> setAdvisee("Tom P.");
    f3 -> setAdvisee("Tom P.");

    //cout << "4" << endl;
    // inserting to student tree
    masterS -> insert(s1 -> m_id, s1);
    masterS -> insert(s2 -> m_id, s2);
    masterS -> insert(s3 -> m_id, s3);
    masterS -> insert(s4 -> m_id, s4);
    masterS -> insert(s5 -> m_id, s5);
    masterS -> insert(s6 -> m_id, s6);

    //cout << "5" << endl;
    //inserting to faculty tree
    masterF -> insert(f1 -> m_id, f1);
    masterF -> insert(f2 -> m_id, f2);
    masterF -> insert(f3 -> m_id, f3);
}
