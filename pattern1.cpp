#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> num; // Declare a vector of integers

    // There's no need to declare an array of vectors in this context
    // Also, vector doesn't have a size() method, it has a size() member function

    cout << num.size() << endl; // Use num.size() to get the size of the vector
    cout << num.capacity() << endl; // Use num.capacity() to get the capacity of the vector

    cout << "Enter the elements in a vector:" << endl;
    for(int i = 0; i < 10; i++)
    {
        int n;
        cin >> n;
        num.push_back(n); // Use num.push_back(n) to add elements to the vector
    }

    // To show the elements in a vector
    for(int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " "; // Use num[i] to access elements in the vector
    }

    return 0;
}
