#include <iostream>


using namespace std;

int main (){
//get data 
long long n , m ,a ;
cin >> n >> m >> a; 

//calcualte no
double nlength = n/a;
double nwidth = m/a;
if (nwidth < m*1.0/a) nwidth = nwidth+1;

if (nlength < n*1.0/a) nlength = nlength+1;
// show output 
long long s_number= nwidth *nlength ;
cout << s_number;


}