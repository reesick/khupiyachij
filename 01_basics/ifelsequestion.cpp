/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 40 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
t. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cin >> marks;
    if(100 > marks && marks>= 80){
        cout << "A"<< endl;
    }
    else if(marks>= 60)  {
        cout <<"B"<< endl;
    }
    else if(marks>= 50)  {
        cout <<"C"<< endl;
    }
    else if(marks>= 45)  {
        cout <<"D"<< endl;
    }
    else if(marks>= 25)  {
        cout <<"E"<< endl;
    }
    else {
        cout <<"F"<< endl;
    }
    return 0;
}