#include<iostream>
#include<ctime>

using namespace std;
int main(){
  char again='y';
  while(again =='y'||again=='Y'){
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    unsigned int ran = rand() % 100 + 1; // Generate a random number between 1 and 100
    int user=0;
    cout<<"Welcome to the Number Guessing Game"<<endl;
    cout<<"I have selected a number between 1 and 100"<<endl;
    cout<<"Can you guess what it is ?"<<endl;
    while(user != ran){//loop until user guesses the correct number.
       cout<<"Enter your guess:";
       cin>>user;
       if(user>ran){
          cout<<"Too high! Try again.\n"<<endl;
       }else if(user<ran){
          cout<<"Too low! Try again.\n"<<endl;
       }else{
          cout<<"Congratulations! You guessed the correct number."<<ran<<endl;
       }
    }
    cout<<"\nDo you want to play again? (y/n):";
    cin>>again;
  }
  cout<<"\nThanks for playing! goodbye."<<endl;
  return 0;
}

