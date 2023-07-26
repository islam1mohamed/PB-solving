#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;


class person {
    public:
    void putData(int &age , string &name)
    {pName = name; pAge = age;
    }
    void getData()
    {cout << pName << " "<< pAge;
    }
    
    string pName;    int pAge;
};
class professor :private person {
    public:
    void putData(int pup)
    {  puplication= pup; }
    void getData(person inp)
    {cout << inp.pName << " "<<inp.pAge << " "<< puplication <<" 1";}

    string pName;    int pAge;  int puplication;

};

class students :private person {
    public:
    void getdata(person inp)
    {int out=0;
        cout<< inp.pName << " " << inp.pAge;
        for (int i = 0; i<6;i++){
            out+= marks[i];
        }
        cout << out;
    }
    void enterMarks(int inp[])
    {
        marks = inp;
    }
    private:
    string pName;    int *marks;
};

int main(){
    int inpNum;
    int array[6];
    cin >> inpNum;
    int inputs[inpNum];
    string inpStr;
    int inp=0;
    int inpAge=0;
    vector <students> stu;
    person parray [inpNum];

    for(int i=0; i <=inpNum;i++){
        cin>>inp;
        inputs[i]= inp;
        cin>> inpStr;
        cin>> inpAge;
        parray->putData(inpAge,inpStr);

    if (inp == 2)
    { 
        for(int i=0; i < 6 ;i++) cin>> inputs[i];     
    }
    }

    //outputs

    for(int i=0; i <inpNum;i++){
        parray[i].getData();
        if (inputs[i] == 1){


        }


    }

/*you take inp and put it in class person then get grades if it's a student*/
}