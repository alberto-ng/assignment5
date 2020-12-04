# include <iostream>

# include "BST.h"
# include "stack.h"
# include "Student.h"
# include "Faculty.h"

using namespace std;


class Sim{
    public:
        Sim();
        ~Sim();

        void start();
        void build();



        BST<Student>* masterS;
        BST<Faculty>* masterF;
};
