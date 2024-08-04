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
  char again;
  do{
    int ch;
    double n,m;
    cout<<"\t Select operation:"<<endl;
    cout<<"\t 1.Addition"<<endl;
    cout<<"\t 2.Subtraction"<<endl;
    cout<<"\t 3.Multiplication"<<endl;
    cout<<"\t 4.Division"<<endl;
    cout<<"\tEnter your choice(1,2,3,4):";
    cin>>ch;
    if(ch<=4){
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
   }
   else{
     cout<<"\tplease,enter number from 1 to 4."<<endl;
   }
   cout<<"\tDo you want to perform another calculation? (y/n):";
   cin>>again;
  }while(again=='y'||again=='Y');
  cout<<"\t Thank you!";
  return 0;
}
