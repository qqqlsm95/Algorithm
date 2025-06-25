#include <iostream>
#include <stack>
#include <string>

using namespace std;

void checkVPS(const string& ps) {
    stack<char> arr_ps;

    for (char c : ps) {
        if (c == '(') {
            arr_ps.push(c);
        }
        else { // ')'
            if (arr_ps.empty()) {
                cout << "NO\n";
                return;
            }
            arr_ps.pop();
        }
    }

    if (arr_ps.empty()) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T;
    string ps;

    cin >> T;
    while (T--) {
        cin >> ps;
        checkVPS(ps);
    }

    return 0;
}
