#include<iostream>
using namespace std;
void Lexo(int n,int i){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    for(int i=0;i<=9;i++){
        Lexo(n,i*10+i);  
    }
}
int main(){
   int n;
   cin>>n;  //Any number
   for(int i=1;i<=9;i++){
    Lexo(n,i);
   } 
   return 0;
}