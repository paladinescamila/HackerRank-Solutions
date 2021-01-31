/*
  Simple Array Sum
  https://www.hackerrank.com/challenges/simple-array-sum/problem
*/

#include<iostream>
using namespace std;

int main(){
    int n, t, s = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>t;
        s += t;
    }
    cout<<s<<endl;

    return 0;
}