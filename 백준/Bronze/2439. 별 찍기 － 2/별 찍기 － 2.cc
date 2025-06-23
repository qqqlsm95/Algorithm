#include <iostream>

using namespace std;

void printStars(const int &num_in)
{
    for (int i = 1; i <= num_in; ++i)
    {
        for (int j = 0; j < num_in - i; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j < i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}


int main()
{
    cin.tie(nullptr);
    
    unsigned int N;
    
    cin >> N;
    
    printStars(N);

    return 0;
}