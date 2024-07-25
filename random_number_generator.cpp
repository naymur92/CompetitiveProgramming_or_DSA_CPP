#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <limits>

// Function to generate a random number with up to 7 digits (positive or negative)
int generateRandomNumber() {
    // Generate a random number within INT_MAX range
    return rand() % std::numeric_limits<int>::max();
}

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Open a file to write the random numbers to
    std::ofstream outFile("random_numbers_1e7.txt");

    if (!outFile) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    // Generate and write 10 million random numbers to the file
    for (int i = 0; i < 10000000; ++i) {
        int randomNumber = generateRandomNumber();
        outFile << randomNumber << "\n";
    }

    // Close the file
    outFile.close();

    std::cout << "Random numbers generated and saved to random_numbers.txt" << std::endl;

    return 0;
}
