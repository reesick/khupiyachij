#include<bits/stdc++.h>
using namespace std;

void expvec(){
// // vec are container which are dynamic in nature
// vector<int> shree;
// shree.push_back(1);
// shree.emplace_back(5);
// vector<pair<int,int>> shreepair;
// shreepair.push_back({2,1});
// shreepair.emplace_back(1,3);


// vector<int> v(5,10); //so it is like a vector with 10 for 5 times if dont want any specific value just say v(5)

// vector<int> v1(5,10);
// vector<int> v2(v1); //values copying
// // cout << v1[1];


// vector <int>::iterator it = shree.begin();
// // vector <int>::iterator it = shree.end(); //not exactly end it is end + 1 
// // vector <int>::iterator it = shree.rend();
// // vector <int>::iterator it = shree.rbegin();
// it++;
// // cout << *(it)<<" ";
// // cout << v[1]; // u can print like this too

// // two ways to print a vectors wither by using the for loop or by using this mthd 
// for (vector<int>::iterator it = shree.begin();it!=shree.end();it++){
//  cout << *(it)<<" ";}
//  //yevdhi bkchodi krnya peksha
// for (auto it = shree.begin();it!=shree.end();it++){
//  cout << *(it)<<" ";}
// // another way
// for (auto it : shree)
// {
//     cout << it << " ";
// }

//inserting wali bkchodi
vector<int>v(2,100); // {100,100}
v.insert(v.begin(),200); // {200,100,100}
v.insert(v.begin() +1 ,2,20);//{200,20,20,100,100}

cout << v.size();

v.pop_back(); //pops last element   
// let say there are two vec v1 and v2 u swap them by 

// v1.swap(v2);

v.clear(); //erases the vec

cout << v.empty();


}   

int main(){
    expvec();
    return 0;
}