#include <iostream>
using namespace std;

class Horse{
public:
    string name;
    int age;
    bool main;
    bool tail;
    int count_legs;

    void Print() const {
        cout << "Horse\n";
    }
};

class Horn{
public:
    int size;
    string color;

    void Print() const {
        cout << "Horn\n";
    }
};

class Wings{
public:
    int count_feathers;
    string color;

    void Print() const {
        cout << "Wings\n";
    }
};

class Pegasus : public Horse, public Wings{
public:
    string name;
    int age;
    bool main;
    bool tail;
    int count_legs;
    int count_wings;

    void Print() const{
        cout << "Pegasus\n";
    }
};
class Unicorn : public Horse, public Horn {
public:
    string name = " ";
    int age = 100;
    bool main = true;
    bool tail = true;
    int count_legs = 4;
    int count_horns = 1;

    void Print() const {
        cout << "Unicorn\n";
    }
}; 

class Alicorn : public Unicorn, public Wings{
public:
    string name = " ";
    int age = 0;
    bool main = true;
    bool tail = true;
    int count_legs = 4;
    int count_wings = 2;
    int count_horns = 1;

    void Print() const {
        cout << "Alicorn\n";
    }
};



int main()
{
    Unicorn a;
    a.Print();
}
