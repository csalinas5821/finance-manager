#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
        int passcode;
        string username;
    public:
        Account(){
            cout<< "Please Enter a Username: ";
            cin >> username;
            cout << "Please Enter a four digit Passcode(Ex: 1234): ";
            cin >> passcode;
        }
        bool account_access(int code);
};

bool Account::account_access(int code){
    if (code == passcode)
        return true;
    else
        return false;
} 
// returns true if access granted, false if not granted

bool login_screen();

int main(){
    int code;

    bool answer = login_screen();


    if(answer)
        //create new account;
        return;
    else
        //locate account
        return;
    return 0;
}

bool login_screen(){
       char answer;
    std::cout << "Welcome to Smart Financial Account Manager" << std::endl;

    std::cout << "\nIs this your first time? (Y/N): ";
    std::cin >> answer;

    // Input validation
    while (toupper(answer) != 'Y' && toupper(answer) != 'N') {
        std::cout << "Invalid input, please try again." << std::endl;
        std::cout << "\nIs this your first time? (Y/N): ";
        std::cin >> answer;
    }
    if (toupper(answer) == 'Y')
        return true; // New user
    else
        return false; // Existing user
}