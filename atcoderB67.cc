#include <bits/stdc++.h> 
using namespace std;

int main(){
	int N,Y,i,j,t,M,tt,K,k,tmp,ttt;
  	cin >> N >> K;
    ttt = 0;
  	int a[N]={};
 	for(int i = 0;i<N;i++){
    	cin >> a[i];
      	
    }/*
  	for(int j = 0;j<N-1;j++){
    	for(k = N-1;k > j;k++){
        	if(a[j-1]>a[j]){
            	tmp = a[j-1];
              	a[j-1] = a[j];
              	a[j] = tmp;
            }
        }
    }*/
  
  	sort(a,a+N,greater<int>());
  	i= 0;
    while(i<K)ttt +=a[i++];
  
  	cout << ttt <<endl;
    
}