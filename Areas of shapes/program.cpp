#include <iostream>
using namespace std;
class shape
{
public:
   double height, base;
   shape();
   void get_data();
   virtual void display_area() = 0;
};
shape::shape()
{
   height = 0;
   base = 0;
}
void shape::get_data()
{
   cout << "\nEnter height (cm): ";
   cin >> height;
   cout << "\nEnter base (cm): ";
   cin >> base;
}
class triangle : public shape
{
public:
   void display_area()
   {
      cout << "\nArea of Triangle = " << 0.5 * height * base << " sq.cm" << endl;
   }
};
class rectangle : public shape
{
public:
   void display_area()
   {
      cout << "\nArea of Rectangle = " << height * base << " sq.cm" << endl;
   }
};
int main()
{
   cout << "\n For Triangle";
   triangle t;
   shape *st = &t;
   t.get_data();
   st->display_area();
   cout << "\n For Rectangle";
   rectangle r;
   shape *sr = &r;
   r.get_data();
   sr->display_area();
   return 0;
}
