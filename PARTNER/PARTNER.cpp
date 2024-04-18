#include <iostream>
using namespace std;

int main() {
    bool shortAndFit, attractiveBoobsAndCurves, notGoldDigger, respectful;

    // Gather information about potential partners
    cout << "Please answer the following questions with '1' for yes and '0' for no:" << endl;
    cout << "Is the person short and fit? ";
    cin >> shortAndFit;
    cout << "Does the person have attractive physical features? ";
    cin >> attractiveBoobsAndCurves;
    cout << "Is the person not a gold digger? ";
    cin >> notGoldDigger;
    cout << "Is the person respectful? ";
    cin >> respectful;

    // Nested if statements to evaluate partner suitability
    if (shortAndFit && attractiveBoobsAndCurves && notGoldDigger && respectful) {
        cout << "Congratulations! This person seems like a good match for you." << endl;
    } else {
        cout << "Sorry, this person may not meet your criteria for a partner." << endl;
    }

    return 0;
}
