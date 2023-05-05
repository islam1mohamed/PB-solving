#include<iostream>

using namespace std;

int main(){
    int weight1;
    int weight2;
    int count=0;
    cin>>weight1>>weight2;
    while (weight1<=weight2)    {count++;
    weight1*=3;
    weight2*=2;
    }
    cout << count;
    

}