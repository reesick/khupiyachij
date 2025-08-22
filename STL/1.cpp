#include<bits/stdc++.h>
using namespace std;

void exppair(){

    // pair<datatype,datatype> name defining 
    pair<int ,int> p = {1,4}; 
    cout<< p.first<<"\n";
    cout << p.second<<"\n";

    pair<int, pair<int ,int>> p2 = {2, {4 ,7}};;

    // cout << p2.second.first;

    pair<int, int> arr[100] = {{0,2},{3,5}};
    cout << arr[0].second;
}   

int main(){
    exppair();
    return 0;
}