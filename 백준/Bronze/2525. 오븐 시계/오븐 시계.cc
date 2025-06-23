#include <iostream>

using namespace std;

int main() {

    int time, min, cook_time;

    cin >> time >> min >> cook_time;

    if((min+cook_time)/60 < 1){
        cout << time << " " << min+cook_time << endl;
    }

    else{
        cout << (time + (min+cook_time)/60)%24 << " " << (min+cook_time)%60 << endl;
    }

    return 0;
}