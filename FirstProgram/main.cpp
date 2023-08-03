#include <iostream>

int main() {
    int favoriteNumber;
    
    std::cout << "Guess a number from 1 to 100:";
    
    std::cin >> favoriteNumber;
    
    std::cout << "Amazing, you won!" << std::endl;
    
    return 0;
    
}