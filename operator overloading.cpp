#include <array>
#include <stirng>
#include <iostream>

class Animal
{
public:
    virtual void speak()
    {
        std::cout << "Animal" << std::endl;
    }
    virtual ~Animal()-default;
private:
    double age;    //8bytes
};

ostream& operator << (ostream& os, Aniamal& a){
    os << "(speak: " << a.speak << ")₩n";
    os << "(age: " << a.age << ")₩n";

    return os;
};

class Cat : public Animal
{
public:
    void speak() override
    {
        std::cout << "meow~" << std::endl;
    }
private:
    double age;    //5bytes
};

class Dog : public Animal
{
public:
    void speak() override
    {
        std::cout << "bark!" << std::endl;
    }  
private:
    double age;    //10bytes
};

class Bird : public Animal
{
public:
    void speak() override
    {
        std::cout << "Jack Jack" << std::endl;
    }
private:
    double age;    //4bytes
};

int main ()
{
    std::cout << "Animal age: " << sizeof(Animal) << std::endl;
    std::cout << "Cat age: " << sizeof(Cat) << std::endl;
    std::cout << "Dog age: " << sizeof(Dog) << std::endl;
    std::cout << "Bird age: " << sizeof(Bird) << std::endl;
    
    Animal * polyAnimal = new Cat();
    Animal * polyAnimal = new Dog();
    Animal * polyAnimal = new Bird();
    
    polyAnimal->speak();
    delete polyAnimal;

    return 0;
}
