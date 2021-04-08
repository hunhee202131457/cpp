#include<iostream>
#include<string>

using namespace std;

class Animal
{
    public:
    void speak()
    {
        std::cout << "Animal" << std::endl;
    }
    // virtual ~Animal()=default;
    private:
    double height; // 8bytes
};

class Cat : public Animal
{
    public:
    void speak()
    {
        std::cout << "meow~" << std::endl;
    }
    private:
    double weight; // 16bytes
};

class Bird : public Animal
{
    public:
    void speak()
    {
        std::cout << "Jack Jack~" << std::endl;
    }
    private:
    double weight; // 4bytes
};

class Dog : public Animal
{
    public:
    void speak()
    {
        std::cout << "wolf~" << std::endl;
    }
    private:
    double weight; // 20bytes
};

int main()
{
    std::cout << "animal size: " << sizeof(Animal) << std::endl;
    std::cout << "Cat size: " << sizeof(cat) << std::endl;
    std::cout << "Bird size: " << sizeof(cat) << std::endl;
    std::cout << "Dog size: " << sizeof(cat) << std::endl;
    
    return 0;
};