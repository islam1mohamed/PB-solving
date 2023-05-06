#include<iostream>

using namespace std;

int main(){
    string input;
    
    cin >> input;
    int count =0;


    for (int i=0;i< input.size() ;i++){
        if (input[i]=='4'||input[i]=='7'){
        count ++;
        }
        }

        if (count%7==0||count %4==0||count %47==0)cout << "YES";
        else cout << "NO";
        
}