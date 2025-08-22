#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int r = 0,d;

        while((x!=0)){
        d = x % 10;
        x = x / 10;
        r = ((r)*10) + d;
        if (r > INT_MAX || r < INT_MIN)
        return 0;
        }
        return int32_t(r);
    }

int main(){
    cout << reverse(1534236469);
    return 0;
}