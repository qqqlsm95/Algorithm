#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string S;
    vector<int> positions(26, -1);
    
    cin >> S;
    
    for(int i=0; i<S.length(); ++i)
    {
        char c = S[i];
        
        if(positions[c - 'a'] == -1)
        {
            positions[c - 'a'] = i;
        }
    }
    
    for(const auto& e: positions)
        cout << e << " ";
    cout << endl;
    
    return 0;
}
