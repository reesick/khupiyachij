#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // varcha loop
    int spaces = 0;
    for (int i = 5; i > 0; i--)
    {   //star
        
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        
        //spaces
        for (int j= 0; j < spaces; j++)
        {
            cout << " ";
        }
        //star
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
        spaces = spaces + 2 ;
        
    }
    // khalcha loop
    int spaces2 = 8;
    for (int i = 1; i <= 5; i++)
    {   
        //star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        //spaces
        for (int j = 0; j < spaces2; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        spaces2 -= 2 ;
        cout << endl;
    }
    
    return 0;
}