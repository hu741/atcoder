#include <bits/stdc++.h> 
using namespace std;

int main(){
    int N,T,A,min,number;
    cin >> N >> T >> A;
    int H[N]={};
    min = 100;

    for(int i = 0;i<N;i++){
        cin >> H[i];       
        //min = min(min,abs(T-H[i]));
        if(min>abs(H[i]*0.006 - T) ){
            number = i;
            min = abs(H[i]*0.006 - T);
        }       
    }
cout << number <<endl;

}