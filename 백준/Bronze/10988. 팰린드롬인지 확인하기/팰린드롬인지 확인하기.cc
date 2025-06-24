#include<bits/stdc++.h>

using namespace std;

string word, rword;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> word;
    rword = word;
    reverse(rword.begin(), rword.end());

    if (word == rword)
        cout << "1" << "\n";
    else
        cout << "0" << "\n";

    return 0;
}