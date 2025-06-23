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
    
    
    for(unsigned int n = 1; n <= N; ++n)
    {
        basket[n-1] = n;
    }
   
    for(unsigned int m = 0; m < M; ++m)
    {
        unsigned i, j, temp;
        
        cin >> i >> j;
        
        temp = basket[i-1];
        
        basket[i-1] = basket[j-1];
        
        basket[j-1] = temp;
    } 
    
    for(auto& ball:basket)
    {
        cout << ball << " ";
    }
    cout << endl;

    

    return 0;
}