#include<iostream>

using namespace std;

int main (){
    string inp;
    cin >>  inp;
    int checker=0;
    for (int i=0;i<inp.size();i++){

        if (checker==0 && inp[i]=='h')checker++;
        if (checker==1 && inp[i]=='e')checker++;
        if (checker==2 && inp[i]=='l'){checker++;
        continue;}
        if (checker==3 && inp[i]=='l')checker++;
        if (checker==4 && inp[i]=='o')checker++;
}
if (checker==5 )cout <<"YES";
else cout <<"NO";
        
}
