#include<bits/stdc++.h>
using namespace std;

void expstack(){
// lifo = last in first out
stack<int> st;
st.push(1);
st.push(2);
st.push(4);
st.push(3);
st.emplace(10);

cout<<st.top()<< endl ;
st.pop(); //varcha vadala
cout << st.size();

stack<int> st1,st2;

st1.swap(st2);

// heche sgle ops constant time mdhe hotat
}   

int main(){
    expstack();
    return 0;
}