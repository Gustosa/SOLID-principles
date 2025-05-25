#include "code/animal.hpp"
#include <iostream>
#include <string>

using namespace std;

class Passarinho : public Animal {
    string nome;
    string dataNasc;

    void andar(){
        cout << "Andando como um passarinho..." << endl;
    }

    void som(){
        cout << "Sons de passarinho..." << endl;
    }

    void voar() {
        cout << "Asas batendo..." << endl;
    }
};