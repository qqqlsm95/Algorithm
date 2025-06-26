//#include <bits/stdc++.h>
#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, K;
    queue<int> q;

    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    cout << "<";

    // 모든 사람이 제거될 때까지 반복
    while (!q.empty()) {
        // K번째 사람을 제거하기 위해 앞의 K-1명을 뒤로 보냄
        for (int i = 1; i < K; i++) {
            q.push(q.front());  // 앞의 사람을 큐 뒤로 보냄 (원형 순회)
            q.pop();            // 앞의 사람 제거 (이미 뒤로 보냈으므로)
        }

        // K번째 사람 출력 (제거 대상)
        cout << q.front();

        // 마지막 원소가 아니라면 쉼표 출력
        if (q.size() > 1) {
            cout << ", ";
        }

        // K번째 사람 제거
        q.pop();
    }

    cout << ">";

    return 0;
}