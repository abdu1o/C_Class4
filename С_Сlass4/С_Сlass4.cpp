#include <iostream>
using namespace std;

class Overcoat
{
private:
    int value;
    string type;

public:

    Overcoat(int _value, string _type)
    {
        value = _value;
        type = _type;
    }

    void Print()
    {
        cout << type << " " << value << endl;
    }

    bool operator == (const Overcoat& other)
    {
        return this->type == other.type;
    }

    void operator = (const Overcoat& other)
    {
        this->value = other.value;
        this->type = other.type;
    }

    bool operator > (const Overcoat& other)
    {
        return this->value > other.value;
    }
};


int main()
{
    Overcoat overcoat1(2000, "jacket");
    Overcoat overcoat2(4000, "coat");

    overcoat1.Print();
    overcoat2.Print();

    bool result1 = overcoat1 == overcoat2;
    cout << "Is overcoat1 == overcoat2: " << result1 << endl << endl;

    overcoat1 = overcoat2;
    overcoat1.Print();
    overcoat2.Print();

    bool result2 = overcoat1 > overcoat2;
    cout << "Is value of overcoat1 > overcoat2: " << result2 << endl;
}
