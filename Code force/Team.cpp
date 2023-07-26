#include <iostream>
using namespace std;

int main (){
int certain;
int no_problems=0;
cin >> no_problems;
int solvable =0;

int holder;
for (int i=0 ; i < no_problems ; i++){
    holder =0;
 for (int j = 0 ;j < 3 ; j++){
cin >> certain;
    holder = holder + certain;

 }
 
if (holder >1 )solvable = solvable +1;
}
cout << solvable;
return 0;
}