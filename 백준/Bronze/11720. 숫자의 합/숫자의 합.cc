#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int N, sum;
    
    char num;
    
    cin >> N;
    
    sum = 0;
    
    while(N--)
    {
        cin >> num;
        
        sum += int(num - '0');
    }
    
    cout << sum << endl;

    return 0;
}