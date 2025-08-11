#include<bits/stdc++.h>
using namespace std;

void func(){
    for (int i = 6; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout <<  j << " "   ;
        }
        cout <<endl ;
    }
    
}
int main(){
    func();
    return 0;
}