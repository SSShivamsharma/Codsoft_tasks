#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int guess_number;  
    // seed the random number generator based on the current time of device 
    srand(static_cast<unsigned int>(time(0)));
    int ran_number = rand() % 100 + 1;
    cout<<"******Welcome to number guessing game******"<<endl;
    do{
        cout<<"Guess a number (1-100)"<<endl;
        cin>>guess_number;
        if(int(guess_number)){
            if(guess_number < ran_number){
            cout<<"Guess : Too low ! Try again"<<endl;
            }else if(guess_number > ran_number){
            cout<<"Guess : Too high ! Try again "<<endl;

            }else{
            cout<<"Congratulations! Yo guessed the right number."<<endl;
            }
        }else{
            cout<<"Invalid input! Try again "<<endl;
            break;
        }
    }while(guess_number != ran_number);
    return 0;
}