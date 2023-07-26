//take a word from user 
//capitalize index 0
//return output 
#include <iostream>
#include<string>

using namespace std;

int main (){
    string in;
    cin>> in;
    if(in[0]>'Z')in[0] = in[0] +'A'-'a';
    cout <<in;    


}