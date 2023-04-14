#include <iostream>


using namespace std;

int main (){
//get data 
int n , k ;
cin>> n >> k;
int i ;
int given[50];
for ( i=0 ; i<n;i++){

cin >>  given[i] ;

}
for (i=0;i<=n;i++){
    
    if (given[i]<given[k-1]||given[i]<0.5){
        cout<< i << endl;
        break;}

}


}