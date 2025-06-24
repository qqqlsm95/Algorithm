//#include <bits/stdc++.h>

#include <iostream>
#include <queue>
#include <string>
using namespace std;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, number;
    string cmd;

    cin >> N;

    queue<int> q;

    for (int i = 0; i < N; i++) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> number;
            q.push(number);
        }

        else if (cmd == "pop") {
            if (q.empty()) {
                cout << -1 << "\n";
            }

            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }

        else if (cmd == "size") {
            cout << q.size() << "\n";
        }

        else if (cmd == "empty") {
            if (q.empty()) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }

        else if (cmd == "front") {
            if (q.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << q.front() << "\n";
            }
        }

        else if (cmd == "back") {
            if (q.empty()) {
                cout << -1 << "\n";
            }
            else {
                cout << q.back() << "\n";
            }
        }
    }

    return 0;
}
