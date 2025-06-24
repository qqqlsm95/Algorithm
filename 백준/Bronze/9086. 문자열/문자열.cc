#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string word;
    int iter;
    
    cin >> iter;
    
    while(iter--)
    {
        cin >> word;
        
        cout << word.front() << word.back() << '\n';
    }
    
    return 0;
}