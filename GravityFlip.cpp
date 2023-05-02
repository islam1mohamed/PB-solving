#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main (){
    int size=0;
    int inp=0;
    cin >> size;
    int array[size];
    for (int i=0;i<size;i++){
        cin >> inp;
        array[i]=inp;
    }
    sort(array,array+size);
        for (int i=0;i<size;i++){
        cout <<array[i]<<" ";
    }

}