#include <iostream>
#include <string>

using namespace std;


void rearrange (string num[],int recorded ,string fun2){
int inum [recorded] ;
inum [0]= stoi(num[0]);
int i=0;
int holder;
while ( i<recorded){
    i++;
      
    for (int j =0;j<recorded; j++ ){
    if ( stoi(num[j])< inum[i])
    {holder = inum[i];
        inum[i] = stoi(num[j]);
        break;
    }
    }

}
for (int i=0; i< recorded;i++ )cout << inum[i] << "\n";


}

int main(){
    //take numbers only 
    // reorder
    string num [100];
    string fun ;
    string fun2;
    cin>> fun ;
    fun+='+';
    int start = 0;
    int counter =0 ;
    int recorded=0;
    for (int i=0 ; i < fun.length();i++){
      counter++;  
    if (fun[i] == '+')
    {    
        num[recorded]= fun.substr(start,counter-1);
      
        counter=0;
        recorded++;
        start = i+1;
      
    }
    }
   // cout << fun2;
   //cout << recorded;

  // for (int i=0; i< recorded;i++ )cout << num[i];
   rearrange (num ,recorded , fun2);
   
}