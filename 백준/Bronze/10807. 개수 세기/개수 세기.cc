#include <iostream>
#include <array>

using namespace std;


int main()
{
    cin.tie(nullptr);
    
    unsigned int N;
    int v;
    
    // 첫번째 정수 갯수 입력 받기
    cin >> N;
    
    // 동적 배열 생성성
    int* arr = new int[N];
    
    // 정수 배열 입력 받기기
    for(unsigned int i =0; i<N ; ++i)
    {
        cin >> arr[i];
    }
    
    // 찾으려는 정수 입력 받기기
    cin >> v;
    unsigned int count{0};
    
    for(unsigned int j = 0 ; j<N ; ++j)
    {
        if (arr[j] == v)
        {
            count += 1;
        }
    }
    
    cout << count << endl;
    
    // 동적 배열 해제 메모리 반환
    delete [] arr;
    return 0;
}