#include<bits/stdc++.h>
using namespace std;
 
int main(){
  string N;
  cin >> N;
  int SN,NN;
  SN = atoi(N.c_str());

  for(int i = 0;i<N.size();i++){
      NN +=N[i]-'0';
  }

  if( SN % NN== 0){
      cout <<"Yes"<<endl;
      return 0;
  }
  cout <<"No" <<endl;
}