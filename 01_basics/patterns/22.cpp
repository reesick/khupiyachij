#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  
    n = 4;
    for (int i = 0; i < 7; i++)
    {   
        for (int j = 0; j < 7; j++){
            
           if (i == 0 || i == 6||j == 0 || j == 6)
         {
             n = 4;
        }
        else if (i == 1 || i == 5 ||j == 1 || j == 5)
        {
            n = 3;
        }
        else if (i == 2 || i == 4||j == 2 || j == 4)
        {
            n = 2;
        }
        else if (i == 3 && j == 3 )
        {
            n = 1;
        }
        
        
            cout << n;
        }
        cout << endl;
        n--;
    }
    
    return 0;
}