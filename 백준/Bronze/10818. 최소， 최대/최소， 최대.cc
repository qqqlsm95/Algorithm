#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    unsigned int N;
    
    // 첫번째 줄에 정수의 개수 입력 받기
    cin >> N;
    
    // 벡터 생성
    vector<int> arr(N);
    
    // 수열 입력 받기
    for(unsigned int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }
    
    // 최솟값과 최댓값 찾기
    int min_val = *min_element(arr.begin(), arr.end());
    int max_val = *max_element(arr.begin(), arr.end());
    
    // 결과 출력
    cout << min_val << " " << max_val << endl;
    
    return 0;
}
