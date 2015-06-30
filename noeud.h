#ifndef NOEUD_H
#define NOEUD_H
#include<QVector>
#include <iostream>
using namespace std ;
   class node
    {
    private:
        char lettre ;
        vector<node*>children;
        bool entier ;
    public :
        node(char );
       ~node ();
     };


#endif // NOEUD_H
