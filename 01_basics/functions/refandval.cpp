#include<bits/stdc++.h>
using namespace std;

//  // PASS BY VALUE
// void somthin(int i){
//     cout << i + 1 << "\n"; 
// }    

// int main(){
//     int i = 10;
//     somthin(i);
//     cout << i;
//     return 0;
// }
 // PASS BY REF
int somthin(int &i){
     i = i + 1;
     cout << i << endl;
    return i; 
}    

int main(){
    int i = 10;
    int value = somthin(i);
    cout << value;
    return 0;
}
