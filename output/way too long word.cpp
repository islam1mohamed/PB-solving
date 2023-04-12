#include<iostream>
using namespace std;


string op(string word[],int length);

int main()
{
    int number;
    cin >> number;
    string word [100];
for (int i=0; i<number; i++){
    string x;
    cin >>word[i]; 
}


}

string op(string word[],int length){
 for (int i=0; i<length; i++){
 int holder = word[i].length();
if (holder<length+1) cout<< word[i];
else {
    string hold_word= "islam";//word[i];
    string x= to_string(holder);

    string printed= hold_word [0]+ x + hold_word[i-1];

    
}


 }