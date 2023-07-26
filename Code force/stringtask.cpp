#include <iostream>
#include<string>

using namespace std ;

int main(){
    char user_input;
    while(cin>>user_input){
        user_input=tolower(user_input);
        if (user_input != 'a'&user_input != 'e'&user_input != 'i'&user_input != 'o'&user_input != 'u' &user_input != 'y'){
                cout<< '.' << user_input;

        }
    }

}