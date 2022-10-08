#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
void getduplicate(vector<int>);
int main()
{
    int t;
    cout << "Enter no of trial : ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "enter no of element : ";
        cin >> n;
        int a[n];
        cout << "Enter the elements" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> arr;
    for (int i: a) {
        arr.push_back(i);
    }
    //  arr.insert(arr.begin(),a.begin(), a.end());
     getduplicate(arr);
    }
    return 0;
}
void getduplicate(vector<int> a)
{
  unordered_set<int> uset;
    int duplicate = -1;
    for (int i : a) {
        
        if (uset.find(i) != uset.end()) {
            duplicate = i;
            cout<<i<<" ";
            break;
        }
        else
            uset.insert(i);
    }
    cout<<"Duplicate : "<<duplicate;
    }
