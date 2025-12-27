#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
  srand(time(0));
  int secret=rand()%100 +1;
  int guess,attempt=0;
  cout<<"Welcome to the Number Guessing Game!"<<endl;
  cout<<"I have selected a number between 1 and 1000."<<endl;
  cout<<"Can you guess what the number is?"<<endl;
  do{
    cout<<"Enter your guess:";
    cin>>guess;
    attempt++;
    if(guess<secret){
      cout<<"low..try"<<endl;
    }else if(guess>secret){
      cout<<"high...try"<<endl;
    }else{
      cout<<"Congratulation!You guessesd the number "<<secret <<" in"<< attempt<<"  attempt"<<endl;

    }
    }
    
while(guess!=secret);
return 0;
}