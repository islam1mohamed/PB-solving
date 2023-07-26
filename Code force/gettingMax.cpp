#include<iostream>
#include <algorithm>
using namespace std;

int main (){
    int inp1=0;
    int inp2=0;
    int inp3=0;
    cin >> inp1 >> inp2>> inp3;
    /*
    cases inp1xinp2+inp3
    cases inp1x(inp2+inp3)
    cases inp1+inp2*inp3
    cases (inp1+inp2)*inp3
        
    */
    int case1= inp1*inp2+inp3;
    int case2= inp1*(inp2+inp3);
    int case3= inp1+inp2*inp3;
    int case4= (inp1+inp2)*inp3;
    int case5= inp1*inp2*inp3;
    int case6= inp1+inp2+inp3;
    //  cout<< case1<< "\n";
    //  cout<< case2<< "\n";
    //  cout<< case3<< "\n";
    //  cout<< case4<< "\n";
    //  cout<< case5<< "\n";
    int array[5];
    array[0]=case1;
    array[1]=case2;
    array[2]=case3;
    array[3]=case4;
    array[4]=case5;
    array[5]=case6;
    
int max =array[0];
    for (int i=1 ;i<6;i++){
        if (max<array[i]){
            max= array[i];
        }
    }
    cout << max;
}