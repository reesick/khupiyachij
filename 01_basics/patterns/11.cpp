#include<bits/stdc++.h>
using namespace std;
int n = 0 , i , j;



void func(){
        
    
    for (i = 1; i < 6; i++)
    {   
        for (j = 1; j <= i; j++)
        {
           if ((i % 2 == 0 && j % 2 == 0)||(i % 2 != 0 && j % 2 != 0) )
            {
             n = 1;
            }
        else
        {
            n = 0;
        }
            cout << n;
            
        }
        cout << endl;
    }
}
int main(){
    func();
    return 0;
}