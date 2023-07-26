#include <iostream>

using namespace std;

int main (){
    string inp;
    int counter1=0;
    int counter0=0;
    cin>> inp;
    for (int i=0 ; i<inp.size() ; i++){
        char x = inp [i];
        if ( x == '1' ){counter1++;
        counter0=0;}
        else {counter1=0;
        counter0++;}
        if (counter1>6||counter0>6){
        cout << "YES";
        break;}

    }
    if (counter1 <6&& counter0<6) cout << "NO";
}
