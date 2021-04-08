#include<iostream>
#include<string>

using namespace std;

class Animal
{
    private:
    string name;

    public:
    Animal() {
        cout << "Animal created." << endl;
    }

    Animal(const Animal& other) :
    name(other.name) {
        cout << "Animal created by coping." << endl;
    }

    ~Animal() {
        cout << "Destructor called" << endl;
    }
    
    void setName(string name) {
        this->name = name;
    }

    void speak() const {
        cout << "My name is: " << name << endl;
    }
};

Animal createAnimal() {
    Animal a;
    a.setName("Bertie"):
    return a;
}

int main() {
    Animal *pCat1 = new Animal();
    pCat1->setName("Freddy");
    pCat->speak();
    delate pCat1;

    return0;
}