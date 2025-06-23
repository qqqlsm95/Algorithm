#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int subjects, score, max;
    float average, total;
    
    cin >> subjects;
    
    vector<float> score_arr(subjects, 0);
    
    for(int i = 0; i < subjects; ++i)
    {
        cin >> score_arr[i];
    }
    
    // 배열에서 최고점 찾기기
    max = score_arr[0];
    for(int j = 0; j < subjects; ++j)
    {
        if(score_arr[j]>max)
        {
            max = score_arr[j];
        }
    }
    
    // 전체 값 구하기기
    total = 0;
    for(int k = 0; k < subjects; ++k)
    {
        score_arr[k] = (score_arr[k]/max) * 100;
        total += score_arr[k];
    }
    
    // 평균값 구하기
    average = total / subjects;
    cout << fixed;
    cout.precision(6);
    cout << average << endl;
    
    return 0;
}