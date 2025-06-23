#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string S;
    int i;
    
    cin >> S >> i;
    
    cout << S[i-1] << endl;

    return 0;
}