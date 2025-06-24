#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string input;
    getline(cin, input);
    
    stringstream ss(input);
    string word;
    int word_cout = 0;
    
    while(ss >> word)
    {
        word_cout += 1;
    }
    
    cout << word_cout << endl;
    
    return 0;
}