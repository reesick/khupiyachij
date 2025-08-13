#include<bits/stdc++.h>
using namespace std;
void func(){
    for (int i = 1; i < 5; i++)
    { //nos
      for (int j = 1; j <= i; j++)
      {
        cout << j;
      }
      // space
      for (int j = 0; j < (8- (2*i) ) ; j++)
        {
            cout << "*";
        }
      
      //nos
      for (int j = i; j >= 1; j--)
      {
        cout << j;
      }
        cout << endl; 
    }
    
}
int main(){
    func();
    return 0;
}