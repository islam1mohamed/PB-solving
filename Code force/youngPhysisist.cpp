#include <iostream>

using namespace std ;

int inp2(){
    int holder;
cin >> holder;
return holder;
}
int main(){
int x,y,z,inp=0;
x=y=z=0;
cin >> inp;
for (int i=0 ;i<inp;i++){
     x+=inp2();
     y+=inp2();
     z+=inp2();
    //  cout << x<< y << z << endl;
}
if ((x==0)&&y==0&&z==0)cout << "YES";
else cout << "NO";
}