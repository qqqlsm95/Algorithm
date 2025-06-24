#include<iostream>
#include<string>

using namespace std;

string S;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    getline(cin, S);
    
    for (int i = 0; i < S.size(); i++) {
        if (S[i] >= 'A' && S[i] <= 'Z')
            if (S[i]+13 > 'Z')
                S[i] = S[i] + 13 - 'Z' + 'A' -1;
            else 
                S[i] += 13;

        else if (S[i] >= 'a' && S[i] <= 'z')
            if (S[i] + 13 > 'z')
                S[i] = S[i] + 13 - 'z' + 'a' - 1;
            else
                S[i] += 13;
    }

    cout << S << "\n";

    return 0;
}