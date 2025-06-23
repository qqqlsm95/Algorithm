#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    unsigned int N, M;
    
    cin >> N >> M;
    
    vector<int> basket(N, 0);
    
    
    for(unsigned int iter = 0; iter < M; ++iter)
    {
        unsigned int i, j, k;
        
        cin >> i >> j >> k;
        
        for(unsigned int b = i-1; b < j; ++b)
        {
            basket[b] = k;
        }
        
    }
    
    for(auto& ball : basket)
    {
        cout << ball << " ";
    }
    cout << endl;
    

    return 0;
}