#include <iostream>
#include<math.h> 
using namespace std;
int fac(int a){
int n1 =1;
int fact;
for(int i=1;i<=a;i++){
n1 = n1*i;
}
fact = n1;
return fact;
}
void fib(int n){                     //fibunacci
int t1=0;
int t2=1;
int nextnum;
for(int i=1;i<=n;i++){
cout<<t1<<endl;
nextnum=t1+t2;
t1=t2;
t2=nextnum; 

}
return;
}
bool prime(int num)                  //prime number
{
for (int i =2; i<=sqrt(num);i++)
{
if(num%i==0){
return false;
}
}
return true;
}
int main() 
{
int n,r;
cin>>n>>r;
//cin>>a>>b;
//for (int i=a;i<=b;i++){
//if (prime(i)){
//cout<<i<<endl;}
//fib(c);
int ans = fac(n)/(fac(r)*fac(n-r));
cout<<ans<<endl;
cin.get();
}
