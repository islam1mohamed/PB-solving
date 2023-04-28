#include<iostream>
#include<string>
using namespace std;

int main (){
/*take inp
determine if input is lucky 
pass string to see if it's lucky

determine if divisable by lucky
divide number by 4,7,47 see if it's divisable
*/
string inp;
bool isLucky=0;
for (int i=0 ;i<inp.length()-1;i++){
if (inp[i]== '7' ||inp[i]== '4')     isLucky=1;
else {
    isLucky= 0;
break;}
}
if (isLucky == 0){
    int inp_num = stoi(inp);
    if (inp_num%4==0||inp_num%7==0||inp_num%47==0)isLucky=1;
    else cout<< "NO";
}
if (isLucky == 1){
    cout << "YES";
}
 
}
