#include<bits/stdc++.h>
using namespace std;

int main(){string name ="shreeviraj";
    int len = name.size();
    name[len -2] = 'g';//use '' not " "
    cout << name;
    return 0;
}