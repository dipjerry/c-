#include <iostream>
using namespace std;
class Float
{
    float num;

public:
    Float() {}
    void getData();
    void putData();
    Float operator+(Float);
    Float operator*(Float);
    Float operator/(Float);
    Float operator-(Float);
};
void Float::getData()
{
    cout << "Enter a floating number : ";
    cin >> num;
}
void Float::putData()
{
    cout << "The answer is : "<<num<<"\n";
}
Float Float::operator+(Float a)
{
    Float temp;
    temp.num = num + a.num;
    return temp;
}
Float Float::operator*(Float b)
{
    Float temp;
    temp.num = num * b.num;
    return temp;
}
Float Float::operator-(Float b)
{
    Float temp;
    temp.num = num - b.num;
    return temp;
}
Float Float::operator/(Float b)
{
    Float temp;
    temp.num = num / b.num;
    return temp;
}
int main()
{
    Float a, b, c;
    a.getData();
    b.getData();
    cout << "After adding two object ";
    c = a + b;
    c.putData();
    cout << "After multiplying two object ";
    c = a * b;
    c.putData();
    cout << "After dividing two object ";
    c = a / b;
    c.putData();
    cout << "After substracting two object ";
    c = a - b;
    c.putData();
    return 0;
}
