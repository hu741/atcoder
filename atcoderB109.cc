#include <bits/stdc++.h> 
using namespace std;

int main(){
    int N,count = 0;
    cin >> N;
    string W[N] = {};
    for(int i = 0;i < N;i++){
        cin >> W[i] ; 
        for(int j = 0;j < i;j++){
            if((W[i] == W[j])&&(i>=1)){
                cout << "No" <<endl;
                return 0;
            }
        }
        if((W[i]begin()==W[i-1])&&(i>=1)){
            cout <<"No" << endl;
            return 0;
        }
    }
   
        cout << "Yes" << endl;
    
    

}