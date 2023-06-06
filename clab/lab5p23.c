//WAP in c to convert decimal intiger number to into binary number .
#include<stdio.h>
int main(){
    int num,bin=0,mlt=1,org;

    printf("Enter The Number: ");
    scanf("%d",&num);org=num;

    while(num>0){
        bin +=(num%2)*mlt;
        num=num/2;
        mlt*=10;

    }
    printf("The Binary Number of %d is %d",org,bin);
}

//by c++
int main(){
string ans;
   int n=10;//or take input by cin>>n;
   
    while(n){//jab tak n 0 nahi ho jata chlo bhai
        if(n&1)//agar nki phli bit 1 hai to 1 string me daal do for eg: n=8 in binary 1000;
        ans.push_back('1');
        else{
           ans.push_back('0');
        }
        n=n>>1;//if n=8 in binary 1000; then n=n>>1 in binary 0100 that is 4 in decimal
    }
  reverse(ans.begin(),ans.end());
  cout<<ans;
  return 0;
  }
