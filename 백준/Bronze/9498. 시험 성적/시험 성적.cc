#include <iostream>

using namespace std;

int main() {

    int score;

    cin >> score;

    if(score>=0 && score <=100){
        if(90 <= score){
            cout << "A" << endl;
        }

        else if(80 <= score){
            cout << "B" << endl;
        }
        
        else if(70 <= score){
            cout << "C" << endl;
        }
        
        else if(60 <= score){
            cout << "D" << endl;
        }

        else{
            cout << "F" << endl;
        }
        
    }
    
    return 0;
}