#include<bits/stdc++.h>
using namespace std;

void func(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
int main(){
    func();
    return 0;
}