#include <iostream>
using namespace std;

int main() {

    int budget;
    int food, transportation, school, bills, others;
    int total, remaining;

    cout << "====================================\n";
    cout << " PERSONAL EXPENSE AND BUDGETING SYSTEM\n";
    cout << "====================================\n";

    cout << "\nEnter your monthly budget: ";
    cin >> budget;

    cout << "\n===== ENTER YOUR EXPENSES =====\n";

    cout << "Enter food expense: ";
    cin >> food;

    cout << "Enter transportation expense: ";
    cin >> transportation;

    cout << "Enter school expense: ";
    cin >> school;

    cout << "Enter bills expense: ";
    cin >> bills;

    cout << "Enter other expenses: ";
    cin >> others;

    total = food + transportation + school + bills + others;

    remaining = budget - total;

    cout << "\n===== EXPENSE SUMMARY =====\n";

    cout << "Monthly Budget: " << budget << endl;
    cout << "Food: " << food << endl;
    cout << "Transportation: " << transportation << endl;
    cout << "School: " << school << endl;
    cout << "Bills: " << bills << endl;
    cout << "Others: " << others << endl;

    cout << "\nTotal Expenses: " << total << endl;
    cout << "Remaining Budget: " << remaining << endl;

    cout << "\n===== BUDGET STATUS =====\n";

    if (total > budget) {
        cout << "Warning! You exceeded your budget.\n";
    }
    else if (total == budget) {
        cout << "Your budget is fully used.\n";
    }
    else {
        cout << "You are within your budget.\n";
    }

    cout << "\n===== SAVINGS INFORMATION =====\n";

    if (remaining > 0) {
        cout << "You can save: " << remaining << endl;
    }
    else {
        cout << "You have no remaining budget.\n";
    }

    cout << "\nThank you for using the system!\n";

    return 0;
}