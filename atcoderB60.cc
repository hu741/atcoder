#include <bits/stdc++.h> 
using namespace std;

int main(){
	int A,B,C,T,choice;
    cin >> A >> B >> C;
    choice = 1;
    choice *= A;

    if(choice%B == C){

        cout << "YES" << endl;
    }else if((A<B)&&(C%A == 0)){

        cout << "YES" <<endl; 
    }else{


        cout << "NO" << endl;
    }
    
}