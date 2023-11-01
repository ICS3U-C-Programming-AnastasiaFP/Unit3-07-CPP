// Copyright by : Anastasia Friedenstein Patino
// Created on : October.31, 2023
// dating game that checks if you are good lucking or rich

#include <iostream>
#include <string>

int main() {
    string rich, good_looking;

    cout << "Are you rich? (true or false): ";
    cin >> rich;
    for (char &c : rich)
        c = tolower(c);

    cout << "Are you good looking? (True or False): ";
    cin >> good_looking;
    for (char &c : good_looking)
        c = tolower(c);

    // Check if either rich or good looking is True
    if (rich == "true" || good_looking == "true") {
        cout << "You can date my grandchild" << endl;
    } else {
        cout << "You can't date my grandchild" << endl;
    }

    return 0;
}
