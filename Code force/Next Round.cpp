#include <iostream>


using namespace std;

int main (){
    //get data
int n , k, i=0 ;
cin>> n >> k;
    int  counter=0 ; 
    int given[n];
    for (i = 0; i < n; i++) {
        cin >> given[i];
    }
    for (i = 0; i < n; i++)
     if (given[i] >= given[k - 1] && given[i] > 0)   counter++;
              
    cout << counter ;
    return 0;
}
