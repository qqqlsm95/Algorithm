#include <iostream>
#include <vector>

using namespace std;


int main()
{
    cin.tie(nullptr);
    
    unsigned int N, X;
    
    cin >> N >> X;
    
    vector<int> arr(N);
    
    for(auto i=0 ; i<N ; ++i )
    {
        cin >> arr[i];
    }
    
    for(auto &element: arr){
        if(element < X)
        {
            cout << element << " ";
        }
    }
    
    cout << endl;

    return 0;
}