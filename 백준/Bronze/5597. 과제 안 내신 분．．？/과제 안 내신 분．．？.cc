#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    vector<bool> students_num(30, false);
    
    for(int i=0; i<28; ++i)
    {
        int num;
        cin >> num;
        students_num[num-1] = true;
    }
    
    for(int j=0; j<30; ++j)
    {
        if(students_num[j] == false)
        {
            cout << j+1 << '\n';
        }
    }

    return 0;
}