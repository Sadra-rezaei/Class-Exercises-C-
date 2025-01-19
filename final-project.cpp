#include <iostream>
#include <iomanip>
using namespace std;

// Sadra Mir Mohammad Rerzaei
// 403463152

int FindBest(int list[], int n) {
    if (n == 1)
        return list[0];

    int maxScore = FindBest(list , n - 1);

    return max(list[n - 1], maxScore);
}

int FindWorst(int list[], int n) {
    if (n == 1)
        return list[0];

    int  minScore = FindWorst(list, n - 1);

    return min(list[n - 1], minScore);
}

double FindAverage(int list[], int n) {
    double sum = 0;
    for (int temp = 0; temp < n; temp ++) {
        sum += list[temp];
    }

    return sum / double(n); 
}

string isPass(int score) {
    if (score >= 50) {
        return "Pass";
    }
    else {
        return "Faild";
    }
}




main() {

    int choice;
    int scoreList[30];
    string nameList[30];
    int studentNumber = 0;
    int counter;

    cout << "Welcom to Golestan\nHow can i help you?\n\n";

    do {
        cout
        << "1. Add score\n"
        << "2. Show all scores\n"
        << "3. Find best score\n"
        << "4. Find worst score\n"
        << "5. Find average of scores\n"
        << "6. Acceptance check\n"
        << "7. Exit\n\nWhat is your choice? ";
        cin >> choice;

        switch (choice) {

            case 1:
                if ( studentNumber <= 30) {

                    cout << "\n\nEnter the name of student: ";
                    cin >> nameList[studentNumber];

                    cout << "\nEnter the score of student: ";
                    cin >> scoreList[studentNumber];

                    cout << "\n\n=== student added successfully ===\n\n";
                    studentNumber ++ ;
                    break;
                }
                else {
                    cout << "\n\n=== Sorry the class is full ===\n\n";
                    break;
                }
                break;

            case 2:
                cout << "\n\n"
                     << setw(15) << left << "Name"
                     << setw(1) << left << " "
                     << setw(15) << right << "Score" << endl

                     << setw(15) << left << "==============="
                     << setw(1) << left << " "
                     << setw(15) << right << "===============" << endl;


                for (counter = 0 ; counter < studentNumber ; counter ++) {
                    cout << setw(15) << left << nameList[counter]
                         << setw(1) << left << " "
                         << setw(15) << right << scoreList[counter] << endl;
                }
                cout << "\n";
                break;

            case 3:
                cout << "\nThe best score is: " << FindBest(scoreList, studentNumber) << "\n\n";
                break;

            case 4:
                cout << "\nThe worst score is: " << FindWorst(scoreList, studentNumber) << "\n\n";
                break;
            
            case 5:
                cout << "\nThe average of scores is: " << FindAverage(scoreList, studentNumber) << "\n\n";
                break;

            case 6:
                cout<< "\n" << setw(15) << left << "Name"
                << setw(1) << left << " "
                << setw(15) << right << "Status" << endl

                << setw(15) << left << "==============="
                << setw(1) << left << " "
                << setw(15) << right << "===============" << endl;

                for (counter = 0; counter < studentNumber; counter ++) {
                    cout << setw(15) << left << nameList[counter]
                    << setw(1) << left << " "
                    << setw(15) << right << isPass(scoreList[counter]) << endl;
                }
                cout << "\n";

        }
    } while (choice != 7);

}