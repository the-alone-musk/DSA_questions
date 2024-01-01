#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;

string a;
int cnta = 0 ,cntb=0,cntc=0;
char p;
while (t--){
for (int i = 0 ; i< 9 ; i++){
    cin>>p;
    a+=p;
}
for ( int i = 0 ; i< 9 ; i++){
  if(a[i] == 'A'){cnta++;}
  if(a[i] == 'B'){cntb++;}
  if(a[i] == 'C'){cntc++;}}
if ( cnta <3){cout<<"A"<<endl;}
else if (cntb <3){cout<<"B"<<endl;}
else cout<<"C"<<endl;
a = "";
cnta = 0;
cntb = 0;
cntc = 0;

}
return 0;
}