#include<bits/stdc++.h>
using namespace std;

// Input : N 
// Output : Sum from 1 - N
// Time Complexity : O(N)
int method1(int N){
    int sum = 0;

    for(int i=1;i<=N;i++){
        sum += i;
    }

    return sum;
}

//method2
//Time Complexity : O(1)
int method2(int N){
    return (N*(N+1))/2;
}

// N = 6
// 1 2 3 4 5 6

int main(){
    int N;

    cin>>N;




    return 0;
}