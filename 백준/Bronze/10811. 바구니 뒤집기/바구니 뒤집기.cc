#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int N, M;
    
    cin >> N >> M;
    
    vector<int> baskets(N, 0);
    
    for(int n=0; n < N; ++n)
    {
        baskets[n] = n + 1;
    }
    
    for(int m=0; m < M; ++m)
    {
        int i, j;
        
        cin >> i >> j;
        
        // 역순으로 정렬
        reverse(baskets.begin() + (i-1), baskets.begin() + j);
        
    }
    
    for(auto& e : baskets)
        cout << e << " ";
    cout << endl;
    
    return 0;
}