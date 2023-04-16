#include <iostream>

using namespace std;


int main (){
int x = 0;
int times =0;
cin >> times ;

string input ;
for (int j=0; j<times;j++){
cin >> input ;

for (int i=0; i<3 ; i++){
    if (input [i]== '+') {x++ ; break ;}
    if (input [i]== '-') {x-- ; break ;}

}
}
cout << x;

}