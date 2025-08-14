#include<bits/stdc++.h>
using namespace std;

// int main(){
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {   if (i==0||i==3 || j==0||j==3)
            
//         {
//             cout<<"*";
//         }
//         else
//         {cout << " ";}
        
            

//         }
//         cout << endl;

//     }
    
//     return 0;
// }

int main(){
    string n;
    int i , j;
    
    
    for (i = 0; i < 4; i++)
    {
       for (j = 0; j < 4; j++)
       {
        if ((i == 1 || i ==2) && (j == 1 || j ==2))
    {
        n = " ";
    }
    else
    {
        n = "*";
    }
            cout << n;
       }
       cout << endl;
    }
    
    return 0;

}