#include <iostream>
#include <string>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string A, B, swapA, swapB, result;
    
    cin >> A >> B;
    
    
    for(string::iterator iter = A.end() - 1; iter >= A.begin(); iter--)
    {
        swapA.push_back(*iter);
    }
    
    for(string::iterator iter = B.end() - 1; iter >= B.begin(); iter--)
    {
        swapB.push_back(*iter);
    }
    
    result = ((swapA>swapB) ? swapA:swapB);
    
    cout << result << endl;

    return 0;
}