#include <bits/stdc++.h> 
using namespace std;

int main(){
	int D,N,answer;
    cin >> D >> N;
    answer = 0;
    if(D == 0){
        if(N==100){
            cout << 101;
            
        }else{
            cout << N*1 <<endl;
        }
        return 0;

    }else if(D == 1){
        if(N==100){
            cout << 10100<<endl;
        }else {
            cout << 100*N <<endl;
        }return 0;
    }else if(D == 2){
        if(N==100){//100で３回割り切れてしまう
            cout << 1010000 ;
        }else{
            cout << 10000*N <<endl;
        }
        return 0;
    }
    
}