#include <iostream>
using namespace std;

class phone // phone is a class every thing written in class phone is the features of phones
{
private: // anything written in private cannot be access by function outside class
    string p_name; // this are attributes
    string p_size;

public:  // anything written in private can be access by funtion outside class
    phone(string name, string size)
    {
        p_name = name;
        p_size = size;
    }
    void make_call()
    {
        cout << "Making call using " << p_name << endl;
    }

    void recive_call()
    {
        cout << "Reciveing call using " << p_name << endl;
    }
};

int main()
{

    phone Iphone("Iphone_x9", "1000x500"); // here phone is the class and Iphone is the object
    Iphone.make_call();

    phone samsung("samsung_galaxy5","1000x400"); 
    Iphone.recive_call();

    return 0;
}