#include <iostream>
#include <cstdlib>
using namespace std;
class Dynamic_array
{
private:
    int n;
    int *arr;

public:
    void add();
    void del();
    void display();
};
void Dynamic_array::add()
{
    cout << "Enter No of Element : ";
    cin >> n;
    arr = new int[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void Dynamic_array::display()
{
    cout << "The array elements are : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void Dynamic_array::del()
{
    delete[] arr;
    cout << "\nThe array element are deleted\n";
}
int main()
{
    char ch;
    Dynamic_array dr;
    do
    {
        dr.add();
        dr.display();
        dr.del();
        cout << "Do you want to continue again?( y ) : ";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
    return 0;
}
