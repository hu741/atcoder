#include <bits/stdc++.h> 
using namespace std;

int main(){
    int N,highest,total;
    cin >> N;
    int P[N]={};
    highest = 0;
    total = 0;
    for(int i =0;i<N;i++){

        cin >> P[i];
        total += P[i];
        if(P[i]>highest){
            highest = P[i];
        }

    }
    cout << total - (highest/2) <<endl;



}