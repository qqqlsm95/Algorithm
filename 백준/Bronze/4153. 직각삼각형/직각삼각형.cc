//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a, b, c;
vector<int> number;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (cin >> a >> b >> c) {
        
        number = { a, b, c };
        sort(number.begin(), number.end());

        a = number[0];
        b = number[1];
        c = number[2];

        if ((a + b + c) == 0)
            break;

        else if (c * c == b * b + a * a) {
            cout << "right" << "\n";
        }

        else
        {
            cout << "wrong" << "\n";
        }
    }

    return 0;
}