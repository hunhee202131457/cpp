#include<iostream>
#include<string>

using namespace std;

class Animal {
    protected:
    string name;
    public:
    animal(const string &s="NoName") : name(s) { }  // Defualt value = "NoName"

    void speak() { cout << " ANIMAL " << name << " : Hello, I'm" << name << endl;}
};

int main() {
    Animal a;
    Animal * aPtr;
    Animal & aRef = a;

    cout << "Animal objedct:" << endl;
    a.speak()
    a.move();
    a.eat();

    cout << end1 << "Animal pointer:' << endl;
    aPtr = new Animal("Dale");
    aPtr->speak();
    aPtr->move();
    aPtr->eat();

    cout << end1 << "Animal reference" << endl;
    aRef.speak();
    aRef.move();
    aRef.eat();

    return0;
}