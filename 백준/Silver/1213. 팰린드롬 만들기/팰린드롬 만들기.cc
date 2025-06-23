#include <bits/stdc++.h>

using namespace std;


string name, ret;
int cnt[200], flag;
char mid;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> name;

	for (char a : name)
		cnt[a]++;
	for (int i = 'Z'; i >= 'A'; i--) {
		if (cnt[i]) {
			if (cnt[i] & 1) {		// 홀수 확인
				mid = char(i);
				flag++;
				cnt[i]--;
			}

			if (flag == 2)			// 중복 알파벳의 홀수인 경우가 2개 이상일 떄 break
				break;

			for (int j = 0; j < cnt[i]; j += 2) {
				ret = char(i) + ret;
				ret += char(i);
			}
		}
	}
	if (mid) 
		ret.insert(ret.begin() + ret.size() / 2, mid);
	
	if (flag == 2)
		cout << "I'm Sorry Hansoo\n";
	else
		cout << ret << "\n";


	return 0;
}