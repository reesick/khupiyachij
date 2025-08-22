#include<bits/stdc++.h>
using namespace std;
int func(int n){
    int count = 0;
    while (n>0)
    {   
        n = n/10;
        count++;
    }
    

    
    return count;
}
int main(){
    cout << func(143242);
    return 0;
}