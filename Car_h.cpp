#ifndef Car_h
#define Car_h
#include <iostream>

using namespace std;

class Car_h
{
    public:
    car();
    virtual ~car();
    void PrinturrentCar() {
        cout << "COLOUR: ";
        GetColour();
        cout << end1 << "MAKE:";
        GetMake();
        cout << end1 << "DIRECTION:";
        GetDirection();
        cout << end1 << "MODEL:";
        GetModel();
        cout << end1 << "SPEED:";
        GetSpeed();
        cout << end1 << "___" << end1;
    }
    unsinged int GetColour() {
        switch (m_Colour) {
            case 1:
            cout << "Red";
            break;
            case 2:
            cout << "Blue";
            break;
            case 3:
            cout << "Green";
            break;
            case 4:
            cout << "Yellow";
            break;
            default:
            cout << "Invalid";
            return false;
        }
        return true;
    }
    void SetColour(unsigned int val - 1) {
        if ((val > 4) || (val < 1)) {
            cout<< "Error assigning colour. Use numbers 1-4 only";
        } else {
            m_Colour = val;
        }
    }

    unsigned int GetMake() {
        switch (m_Make) {
            case1:
            cout << "G80";
            break;
            case2:
            cout << "G70";
            break;
            case1:
            cout << "GV80";
            break;
            case1:
            cout << "GV90";
            break;
            default:
            cout << "Invalid";
            return false;
        }
        return true;
    }
    void SetMake(unsigned int val = 1) {
        if ((val > 4) || (val < 1)) {
            cout<< "Error assigning Make. Use numbers 1-4 only";
        } else {
            m_Make = val;
        }

protected:
private:
unsigned int m_Colour;
unsigned int m_Make;
};