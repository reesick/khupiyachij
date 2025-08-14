#include<bits/stdc++.h>
using namespace std;

int main(){
    for (int i = 1; i < 6; i++)
    {   //space
        for (int j = 6; j > i; j--)
        {
            cout << " ";
        }
        //chars1
        for (int j = 1; j < i; j++)
        {
            cout << char(j+64);
        }
        //chars2
        for (int j = i; j >= 1; j--)
        {
            cout << char(j+64);
        }
        
        cout << endl;
    }
    
    
    return 0;
}
