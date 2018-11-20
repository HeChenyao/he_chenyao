#include <iostream>
using namespace std;

bool isCorrect( int g, int a )
{
   if ( g == a )
      return true;
   if ( g < a )
      cout << "Too low. Try again.\n? ";
   else
      cout << "Too high. Try again.\n? ";

   return false;
}

int main()
{
    int answer;
    int guess;
    char response;
    do
    {
       answer = 1 + rand() % 1000;//从1~1000里随机抽取

       cout<< "I have a number between 1 and 1000."<<endl ;
       cout<< "Can you guess my number?" <<endl;
       cout<< "Please type your first guess." << endl ;
       cin >> guess;

       while (isCorrect(guess,answer))
       {
           cout << "\nExcellent! You guessed the number!\n"
              << "Would you like to play again (y or n)? ";
           cin >> response;

       }

}
