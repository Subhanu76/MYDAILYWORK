#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
  srand(static_cast<unsigned int>(time(0)));//initialize random seed.
  int r=rand()%100+1;//generate a random number between 1 and 100.
  int user=0;
  cout<<"Welcome to the Number Guessing Game"<<endl;
  cout<<"I have selected a number between 1 and 100"<<endl;
  cout<<"Can you guess what it is ?"<<endl;
  while(user != r){//loop until user guesses the correct number.
    cout<<"Enter your guess:";
    cin>>user;
    if(user>r){
        cout<<"Too high! Try again."<<endl;
    }else if(user<r){
        cout<<"Too low! Try again."<<endl;
    }else{
        cout<<"Congratulations! You guessed the correct number."<<r<<endl;
    }
  }
  return 0;
}
