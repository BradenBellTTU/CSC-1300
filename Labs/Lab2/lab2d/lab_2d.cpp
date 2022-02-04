/*
        Title:          lab_2d.cpp
        Author:         Braden Bell
        Date:           2.4.2022
        Purpose:        This program is to help dogs calculate how many of their days will be spent
                        behind bars due to an unfortunate new law regarding how many bones they have
                        stolen. :(
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int bonesStolen, sentenceDays;
    const int sentenceMultiplier = 83, earthYear = 365;
    double sentenceYears;

    //Get the number of bones stolen from user
    cout << "\n\nHow many bones have you stolen? ";
    cin >> bonesStolen;

    //Calculate sentence in days and years
    sentenceDays = (sentenceMultiplier * bonesStolen);
    sentenceYears = (static_cast<double>(sentenceDays) / static_cast<double>(earthYear));

    //Display sentencing to user in days and years
    cout << setprecision(2) << fixed << showpoint;
    cout << "\nYou must go to prison for " << sentenceDays << " days, which is " << sentenceYears << " years." << endl;

    return 0;
}
