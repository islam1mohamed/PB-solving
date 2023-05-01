#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int up=0;
    int low=0;
    string inp;

    cin>> inp ;
    for (int i=0; i<inp.size(); i++){
    if (inp[i]<'a')      up ++;
    else low++;
    }
    // cout << low<< "\n";
    // cout << up << "\n";
    

    if (up>low){
        for (int i=0; i<inp.size(); i++){
            if (inp[i]>96){
                inp[i]=inp[i]+'A'-'a';
            }
        }
    }
    else{
         for (int i=0; i<inp.size(); i++){
            if (inp[i]<96){
                inp[i]=inp[i]+'a'-'A';
            }
        }
    }
    cout<< inp;

}