#include<bits/stdc++.h>
using namespace std;

void fun(){
    for (int i = 0; i < 5; i++)
      {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 5; j < 2 * j - 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

int main(){
    fun();
    return 0;
}