#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b,diff,total;
    cin >> a >> b;

    diff = b-a;

    for(int i = 1;i<=diff;i++){
        total += i;
    }

    cout << total - b <<endl;


}