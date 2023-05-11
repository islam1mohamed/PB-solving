//take a word from user 
//capitalize index 0
//return output 
#include <iostream>
#include<string>

using namespace std;
string to_camel_case (const string& inp ){
string in = inp;
int tot = in.length();
    for (int i = 0 ; i< tot; i++){
        if (in[i]== '-' ||in[i]== '_' ){
          if(in[i+1]>'Z')in[i+1] = in[i+1] +'A'-'a';}
    }

   
for(int i=0; i < tot; i++)
 {if(in[i]=='-'|| in[i]=='_')
        { for(int j=i; j<(tot-1); j++)
                in[j] = in[j+1];

            in.pop_back();
            tot--; 
            i--;  }
}
return in;
}


int main(int argc, string argv) {
    // Add your test cases here
    cout << to_camel_case("the-stealth-warrior") << endl;
    cout << to_camel_case("The_Stealth_Warrior") << endl;
    cout << to_camel_case("The_Stealth-Warrior") << endl;
    
    return 0;
}



