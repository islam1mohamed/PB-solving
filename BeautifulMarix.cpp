#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int c,r;
    c=r=0;
    int array[5][5];
    for (int i= 0 ; i <5 ;i++){
            for (int j= 0 ;j <5 ;j++){
                cin >> array[i][j];
                if (array[i][j]==1){r=i;c=j;}
    }
}
int distance = abs (2-r)+abs(2-c);
cout << distance;
}