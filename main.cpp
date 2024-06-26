
#include <iostream>
using namespace std;

bool access_screen();

int main(){
    bool answer = access_screen();
    cout << answer;
    return 0;
}

bool access_screen(){
       char answer;
    std::cout << "Welcome to Smart Financial Account Manager" << std::endl;

    std::cout << "\nIs this your first time? (Y/N)";
    std::cin >> answer;

    // Input validation
    while (toupper(answer) != 'Y' && toupper(answer) != 'N') {
        std::cout << "Invalid input, please try again." << std::endl;
        std::cout << "\nIs this your first time? (Y/N)";
        std::cin >> answer;
    }
    if (toupper(answer) == 'Y')
        return true; // New user
    else
        return false; // Existing user
}
