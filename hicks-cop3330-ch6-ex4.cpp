/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Andrew Hicks
 */


#include <iostream>
#include <vector>

using namespace std;

class Name_value {
public:
    int score;
    string name;
};



int main()
{
    vector<Name_value> list;
    Name_value temp;
    cout << "Begin by entering pairs of names/scores, to terminate use NoName 0\n";
    while (temp.name != "NoName" && temp.score != 0) {
        cin >> temp.name >> temp.score;\
            for (int i = 0; i < list.size(); i++) {
                if (list[i].name == temp.name) {
                    cout << "Error! Duplicate name" << endl;
                    return 1;
                }
            }
        if (temp.name != "NoName" && temp.score != 0) {
            list.push_back(temp);
        }
        
    }
    for (int j = 0; j < list.size(); j++) {
        cout << "Name: " << list[j].name << " Score: " << list[j].score << endl;
    }
}

