#include <iostream>
#include <ctime> 
#include <cstdlib> 

using namespace std;


int main(){

  //Varibale to track whether the user wants to play a new game or no.
  char play = 'y';
  
  //While the use says yes to playing (or the first round) the game executes
  while(play == 'y'){
    srand(time(0)); //generates a random number based on the current time
    int ranNum = 1+(rand()%100); //assigns a random number to ranNum
    int num = 0; //creates a varible to keep track of user guesses

    //introduces the game to the user
    cout << "Hi! Welcome to the guessing game. A random number between 1-100 (inclusive) has been picked and your job is to guess the number" << endl;

    //asks the user to enter their first guess
    cout << "Please type a number and then press enter" << endl;

    //variable to keep track of how many guesses the user takes
    int guesses = 0;

    //while the user entered number does not match the random number, the computer keeps asking for a new number
    while(num != ranNum){
      cin >> num; //reads the number entered by user and assigns to num

      //if num is larger than ranNum, the computer tells user to enter smaller number
      if(num > ranNum){
	cout << "Please choose a smaller number" << endl;
      }

      //if num is smaller than ranNum, the computer tells user to enter bigger number
      if(num < ranNum){
	cout << "Please choose a bigger  number" << endl;
      }

      //adds one to guesses each round
      guesses = guesses + 1;
    }

    //when the user enters the correct number the while loop with exit and the computer will dispay the number of guesses and asks if the user wants to play again
    cout << "You did a great job. It took you " << guesses << " tries to find the random number. The correct answer is " << ranNum << endl;
    cout << "Yould you like to play again? If yes type y, if no type n" << endl;
    cin >> play;
    
  }

  //once the user wants to stop playing a thank you note is displayed
  cout << "Thanks for playing!" << endl;
}
