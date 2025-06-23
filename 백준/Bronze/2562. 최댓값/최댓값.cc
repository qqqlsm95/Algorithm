#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    vector<int> arr(9);
    
    for(auto j = 0; j < arr.size(); ++j)
    {
        cin >> arr[j];
    }
    
    int max_val = arr[0];
    int max_index = 1;
    
    for(auto i = 1; i < arr.size(); ++i)
    {
        if(arr[i] > max_val)
        {
            max_val = arr[i];
            max_index = i + 1;
        }
    }
    
    cout << max_val << "\n" << max_index << endl;
 
    return 0;
}