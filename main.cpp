#include <iostream>
using namespace std;

//for now, just use one class, eventually optimize
class Account{
    protected:
        float income, shopping, dining_out, entertainment, gym, rent, utilities, gas, grocery, insurance, debt, retirement, vacation, rainy_day, wants, needs, savings;
    public:
        Account(){ 
            getIncome();
            getWants(); 
            getNeeds();
            getSavings();
        };
        void getIncome();
        void getWants();
        void getNeeds();
        void getSavings();
        void showCategories();
        void results();
};

void Account:: getIncome(){
    cout << "Enter your monthly income: ";
    cin >> income;
}

void Account:: getWants(){
    cout <<"Enter monthly expenses for Wants category\n";
    cout <<"Shopping: ";
    cin >> shopping;
    cout << "Dining out: ";
    cin >> dining_out;
    cout <<"Entertainment: ";
    cin >> entertainment;
    cout << "Gym: ";
    cin >> gym;

    wants = shopping + entertainment + gym + dining_out;
}

void Account:: getNeeds(){
    cout << "\nEnter monthly expenses for Needs category\n";
    cout << "Rent: ";
    cin >> rent;
    cout << "Utilities: ";
    cin >> utilities;
    cout << "Gas: ";
    cin >> gas;
    cout << "Groceries: ";
    cin >> grocery;
    cout << "Insurance: ";
    cin >> insurance;
    cout << "Debt: ";
    cin >> debt;

    needs = rent + utilities + gas + grocery + insurance + debt;
}

void Account:: getSavings(){
    cout << "\nEnter monthly expenses for Savings category\n";
    cout << "Retirement: ";
    cin >> retirement;
    cout << "Vacation: ";
    cin >> vacation;
    cout << "Rainy-day: ";
    cin >> rainy_day;

    savings = retirement + vacation + rainy_day;
}

void Account::showCategories(){
    cout << "\nYour monthly expenses by categories\n";

    cout << "\tWants\t||\tNeeds\t||\tSavings\n";
    cout << "-----------------------------------------------------\n";
    cout << "\t" << wants << "\t||\t" << needs << "\t||\t" << savings << endl;
}

void Account::results(){
    float w, n, s, total_spent;
    w = (30/100) * income;
    n = (50/100) * income;
    s = (20/100) * income;

    total_spent = needs + wants + savings;

    if (total_spent > income){
        cout << "\033[1;31m" << "You spent more money than you earned this month." << endl;
        cout << total_spent - income << " over your monthly income!" << "\033[0m";
    }
    else{
        cout << "Good job on spending within your monthly income this month!";
    }
}

int main(){
    Account one;
    one.showCategories(); one.results();
    return 0;
}