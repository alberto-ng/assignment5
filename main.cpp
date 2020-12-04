// # include "BST.h"
// # include "stack.h"
// # include "Student.h"
// # include "Faculty.h"
# include "Sim.h"

int main(int argc, char** argv){
    Sim s = Sim();
    s.start();
    // stack<Student*>* s = new stack<Student*>();
    // Student* st = new Student(1,"bob","senior","bio",3.14,"chris");
    // Student* t = new Student(2,"bob","senior","bio",3.14,"chris");
    // Student* tt = new Student(0,"bob","senior","bio",3.14,"chris");
    // s -> push(st);

    // cout << s -> pop() -> m_name << endl;
    // cout << s -> peek() << endl;
    // cout << st -> m_id << endl;

    // BST<Student>* bt = new BST<Student>();
    // bt -> insert(st -> m_id, st);
    // bt -> insert(t -> m_id, t);
    // bt -> insert(tt -> m_id, tt);
    //
    // bt -> printInOrder(bt -> root);
    // cout << endl;
    //
    // Faculty* x = new Faculty(1,"bob","senior","bio");
    // Faculty* xy = new Faculty(2,"bob","senior","bio");
    // Faculty* y = new Faculty(0,"bob","senior","bio");
    //
    // BST<Faculty>* bb = new BST<Faculty>();
    // bb -> insert(x -> m_id, x);
    // bb -> insert(xy -> m_id, xy);
    // bb -> insert(y -> m_id, y);
    //
    // bb -> printInOrder(bb -> root);
    // cout << endl;

    // delete s;
    // delete st;
    // delete t;
    // delete tt;
    //delete bt;

    return 0;
}
