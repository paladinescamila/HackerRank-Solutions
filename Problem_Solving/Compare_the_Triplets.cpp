/*
  Compare the Triplets
  https://www.hackerrank.com/challenges/compare-the-triplets/problem
*/

#include<iostream>
using namespace std;

int main(){
    int a[3], b[3], A = 0, B = 0;
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    for(int i=0; i<3; i++){
        if(a[i] > b[i]) A++;
        else if(a[i] < b[i]) B++;
    }
    cout<<A<<" "<<B<<endl;
    return 0;
}