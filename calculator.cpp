#include<iostream>
using namespace std;
double add(double x,double y){
  return x+y;
}
double subtract(double x,double y){
   return x-y;
}
double multiply(double x,double y){
   return x*y;
}
double divide(double x,double y){
   if(y==0){
     cout<<"Error! Division by zero."<<endl;
   }else{
     return x/y;
   }
}
int main(){
  int ch;
  double n,m;
  cout<<"\t Select operation:"<<endl;
  cout<<"\t 1.Addition"<<endl;
  cout<<"\t 2.Subtraction"<<endl;
  cout<<"\t 3.Multiplication"<<endl;
  cout<<"\t 4.Division"<<endl;
  cout<<"\tEnter your choice(1,2,3,4):";
  cin>>ch;
  cout<<"\tEnter first number:";
  cin>>n;
  cout<<"\tEnter second number:";
  cin>>m;
  switch(ch){
   case 1:
     cout<<"\tThe result is:"<<add(n,m)<<endl;
     break;
   case 2:
     cout<<"\tThe result is:"<<subtract(n,m)<<endl;
     break;
   case 3:
     cout<<"\tThe result is:"<<multiply(n,m)<<endl;
     break;
   case 4:
     cout<<"\tThe result is:"<<divide(n,m)<<endl;
     break;
   default:
     cout<<"\tInvalid input"<<endl;
     break;
  }
  return 0;
}
