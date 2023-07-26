#include <iostream>

using namespace std;
int main(){
    int n;
    bool inp;
    bool state=0;
    cin >> n ;
    for (int i= 0; i< n; i++){
       cin >> inp;
       if (inp)state=1;
    }
    if (state) cout << "HARD";
    else cout << "EASY";
}