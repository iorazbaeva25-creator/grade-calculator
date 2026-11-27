#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name;
    int studentCount = 0;
    double sumOfAverages = 0.0;

    cout << fixed << setprecision(1);

    while (true) {
        cout << "Student name (or end to finish): ";
        cin >> name;
        if (name == "end") {
            break;
        }

        int totalScore = 0;
        for (int i = 1; i <= 5; i++) {
            int score;
            while (true) {
                cout << "Score " << i << ": ";
                cin >> score;
                if (cin.fail()) {
                    // Letters were typed: clear the error and ask again
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid score. Enter a value from 0 to 100."
                         << endl;
                } else if (score < 0 || score > 100) {
                    cout << "Invalid score. Enter a value from 0 to 100."
                         << endl;
