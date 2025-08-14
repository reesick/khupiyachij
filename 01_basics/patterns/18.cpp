#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5,k;
    for (int i = 0; i < 5; i++)
    {   
        for (int j = 0; j <= i; j++)
        {
         cout << char(64+(n + j ));   
        }
        cout << endl;
        n--;
        
    }
    
    return 0;
}