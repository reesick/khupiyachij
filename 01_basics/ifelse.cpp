#include<bits/stdc++.h>
using namespace std;

int main(){
    //wap to take input of age and print if adult or not
    int age;
    cin >> age ;
    if(age >= 18){
        cout << "adult" << endl;
    }
     else /*if(age < 18)*/{ //with else the if(age < 18) can also be used
        cout << "not adult" << endl;
    }
    return 0 ;
}