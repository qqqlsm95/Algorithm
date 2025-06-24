#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int T, R;
    string S, P;
    
    cin >> T;
    
    while(T--)
    {
        P.clear();
        
        cin >> R >> S;
        
        for(const char c : S)
        {
            P.append(R, c);
        }
        
        cout << P << endl;
    }
        
    return 0;
}
