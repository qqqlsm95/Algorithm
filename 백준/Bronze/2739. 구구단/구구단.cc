#include <iostream>

using namespace std;


int main() {

    int N;

    cin >> N;

    for(auto iter=1; iter<10 ; iter++)
    {
        cout << N << " * " << iter << " = " << N * iter << endl;
    }
    
    return 0;
}