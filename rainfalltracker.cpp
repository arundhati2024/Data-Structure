#include<iostream>
using namespace std;

int main() {
    float rain[3][4];
    int i, j;

    // Input temperatures for each city
    for (i = 0; i < 3; i++) {
        cout << "Enter rainfall for City " << i + 1 << ":\n";
        for (j = 0; j < 4; j++) {
            cout << "  Month " << j + 1 << ": ";
            cin >> rain[i][j];
        }
    }

    // Display header with vertical lines
    cout << "\n";
    cout << "\t\t\t Rainfall Tracking\n";
    cout << "----------------------------------------------------------------------\n";
    cout << "| Sr.No | Name    | MONTH 1| MONTH 2| MONTH 3| MONTH 4| Avg    |\n";
    cout << "----------------------------------------------------------------------\n";

    // Display temperature data for each city with vertical lines
    for (i = 0; i < 3; i++) {
        float total = 0, avg;
        cout << "|   " << i + 1 << "   | City " << i + 1 << "  |";

        // Display temperatures for each day with vertical lines
        for (j = 0; j < 4; j++) {
            cout << " " << fixed << setprecision(2) << rain[i][j] << "C |";
            total += rain[i][j];
        }

        avg = total / 4;
        cout << " " << fixed << setprecision(2) << avg << "C |" << endl;
        cout << "--------------------------------------------------------------------------------------------\n";
    }

    cout << "B24CE1137\n";

    return 0;
}

