#include <bits/stdc++.h> 
using namespace std;

int main(){
	int i,ttt;
  	
  	string a　="";
  	i = 0;
 	do{
    	cin >> a[i];
      	ttt++;
      	i++;
      
    }while(a[i-1] != "");
  
  
  	cout << a[0]<< ttt-2 << a[i-1] <<endl;
    
}