//
//
#include <iostream>
#include <sstream>
#include "apex_code.h"

using namespace std;

void minutes_to_12hour_time(stringstream &cin, stringstream &cout) {
        int totalMinutes;
        cin >> totalMinutes;
        int hours = (totalMinutes / 60) % 12;
        int minutes = totalMinutes % 60;
        cout << hours << ":" << minutes << " !" << endl;
}

void numbers_to_12hour_time(stringstream& cin, stringstream& cout)
{
    double totalHours;
    int totalMinutes;
    int totalSeconds;

    cin >> totalHours;
    cin >> totalMinutes;
    cin >> totalSeconds;

    // convert everything to seconds
    int totalSecondsAll = (totalHours * 3600) + (totalMinutes * 60) + totalSeconds;

    int hours = (totalSecondsAll / 3600) % 12;       
    int minutes = (totalSecondsAll / 60) % 60;    
    int seconds = totalSecondsAll % 60;             // leftover seconds

    cout << hours << ":" << minutes << "." << seconds << " !" << endl;
}

