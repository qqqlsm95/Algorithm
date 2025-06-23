//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int N, number;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    int result = 0;

    for (int i = 0; i < N; i++) {
        cin >> number;

        int count = 0;

        for (int j = 1; j <= number; j++) {
            if (number % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            result++;
        }
    }

    cout << result << "\n";

    return 0;
}