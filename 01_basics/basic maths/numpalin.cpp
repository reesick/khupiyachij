#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        if (x < 0){return false;}
            int i = 0, d = 0;
            int o = x;
            while (x != 0) {
                d = x % 10;
                x = x / 10;
                i = (i * 10) + d;
            }
            return bool(i == o);
        
}
int main(){
    cout << isPalindrome(-191);
    return 0;
}