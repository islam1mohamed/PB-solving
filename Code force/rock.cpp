#include <iostream>

using namespace std ;
int main(){
    int rockNum,rockRemoved =0;
    char rockColors;
    cin>> rockNum ;
    char holder='0';
    for (int i = 0; i < rockNum; i++) {
        cin >> rockColors;
        if (rockColors==holder){
            rockRemoved ++;
        }
        holder = rockColors;
    }
 cout << rockRemoved;
}