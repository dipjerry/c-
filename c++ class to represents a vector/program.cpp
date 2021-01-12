#include <iostream>
#include <cstdlib>
using namespace std;
class vector
{
    int s;
    float *cord;
public:
    vector();
    void create();
    void modify();
    void multiply();
    void display();
};
vector::vector()
{
}
void vector::create()
{
    cout << "\n Enter the no of co-ordinates : ";
    cin >> s;
    cord = new float[s];
    cout << "Enter " << s << " Co-ordinates:\n";
    for (int i = 0; i < s; i++)
    {
        cout << " ";
        cin >> cord[i];
    }
}
void vector::modify()
{
    int n;
    float value;
    display();
    cout << "\n enter the vector you want to modify \n";
    cin >> n;
    cout << "\nEnter the new cordinate for dimension "<<n<<" :";
    cin >> value;
    cord[n] = value;
   
}
void vector::multiply()
{
    int mul;
    cout << "Enter the number you want to multiply with the vector : ";
    cin >> mul;
    for (int i = 0; i < s; i++)
    {
        cord[i] = cord[i] * mul;
    }
}
void vector::display()
{
    cout << "Vector -> (";
    for (int i = 0; i < s; i++)
    {
        cout << cord[i];
        if (i != s - 1)
        {
            cout << " , ";
        }
    }
    cout << ")";
}
int main()
{
    vector vt;
    int choice;
    do{
        cout<<"\n\nVector\n\n1. Create\n2. Modify\n3. Multiply\n4. Display \n5. Exit";
        cout<<"\nEnter Your Choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            vt.create();
            break;
        case 2:
            vt.modify();
            break;
        case 3:
            vt.multiply();
            break;
        case 4:
            vt.display();
            break;
        case 5:
            exit(EXIT_SUCCESS);
            break;
        default:
        cout<<"\nWrong Choie";
            break;
        }
    }while (choice != 6);
    return 0;
}
