#include <iostream>

using namespace std;

int main (){

int op=0; 
string ip1;
string ip2;
cin >> ip1;
for (int i=0;i<ip1.size();i++)ip1[i]=tolower(ip1[i]);
cin >> ip2;
for (int i=0;i<ip2.size();i++)ip2[i]=tolower(ip2[i]);

//for (int i=0;i<ip2.size();i++){

    if (ip1<ip2) op =op-1;
    if (ip1>ip2) op =op+1;
  //  }
cout << op;
}