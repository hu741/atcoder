#include <bits/stdc++.h> 
using namespace std;

int main(){
    long long n,m,n1,m1;
    long long total;
    cin >> n >> m;
    total = 60*n + m;
    n1 = 0.5*(total%60);
    m1 = 6 * (total%60);
    if(abs(n1-m1)>abs(m1-n1)){
        cout << m1 - n1 <<endl;

    }else{
        cout << n1 - m1 <<endl;

    }


}