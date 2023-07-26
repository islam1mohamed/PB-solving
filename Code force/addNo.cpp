#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void rearrange (string num[],int recorded ){
vector<int> inum;
for (int i=0; i< recorded;i++ )
inum.push_back(stoi(num[i]));

sort(inum.begin(),inum.end());

int holder;
for (int i=0; i< recorded-1;i++ )cout << inum[i] << "+";
cout << inum[recorded-1];
}

int main(){
    //take numbers only 
    // reorder
    string num [100];
    string fun ;
    cin>> fun ;
    fun+='+';
    int start = 0;
    int counter =0 ;
    int recorded=0;
    for (int i=0 ; i < fun.length();i++){
      counter++;  
    if (fun[i] == '+')
    {    
        num[recorded]= fun.substr(start,counter-1);
      
        counter=0;
        recorded++;
        start = i+1;
      
    }
    }

   rearrange (num ,recorded );
   
}