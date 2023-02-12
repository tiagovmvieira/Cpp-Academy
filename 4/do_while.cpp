#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

int main(){

    srand(time(NULL));
    int secretNum = std::rand() % 11;
    int guess = 0;

    do{
        std::cout << "Guess the number [0-10] : ";
        std::cin >> guess;
        if(guess > secretNum){
            std::cout << "To Big\n";
        } else if(guess < secretNum) {
            std::cout << "To Small\n";
        }
    } while(secretNum != guess);

    std::cout << "You guessed the secret number " << "\n";


    while(true){
        std::cout << "Guess the number [0-10] : ";
        std::cin >> guess;

        if(guess > secretNum){
            std::cout << "To Big\n";
        } else if(guess < secretNum){
            std::cout << "To Small\n";
        } else {
            break;
        }

    }

    std::cout << "You guessed it \n";
    
    return 0;
}