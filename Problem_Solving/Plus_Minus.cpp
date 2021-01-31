/*
  Plus Minus
  https://www.hackerrank.com/challenges/plus-minus/problem
*/

#include<iostream>
using namespace std;

int main(){
    float n, pos = 0, neg = 0, zero = 0, a[201];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] < 0) neg++;
        else if(a[i] > 0) pos++;
        else zero++;
    }
    cout<<pos/n<<endl;
    cout<<neg/n<<endl;
    cout<<zero/n<<endl;

    return 0;
}