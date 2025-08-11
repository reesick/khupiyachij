#include<bits/stdc++.h>
using namespace std;

void func(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    func();
    return 0;
}