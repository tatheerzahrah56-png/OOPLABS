#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;
    Cat c;

    a = &c;
    a->sound();

    return 0;
}