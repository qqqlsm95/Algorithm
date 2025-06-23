#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int num, diff_num;
    
    vector<int> arr(10, 0);
    
    for(int i=0; i<10 ; ++i)
    {
        cin >> num;
        arr[i] = num % 42;
    }
    
    // 오름차순 정렬
    sort(arr.begin(), arr.end());
    
    // 서로 다른 값 확인
    diff_num = 0;
    for(int j=0; j<10; ++j)
    {
        if(arr[j] != arr[j+1])
        {
            diff_num += 1;
        }
    }
    
    cout << diff_num << endl;
    
    
    return 0;
}