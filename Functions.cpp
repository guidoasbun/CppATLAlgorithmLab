//
// Created by Guido Asbun on 10/23/21.
//

#include "Functions.h"
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

void displayScores(vector<int>& scores)
{
    sort(scores.begin(), scores.end(), [] (int a, int b) {return ( a > b);});
    for_each(scores.begin(), scores.end(), [] (int i) {cout << i << " ";});
    cout << *max_element(scores.begin(), scores.end());
    cout << *min_element(scores.begin(), scores.end());
    cout << count(scores.begin(), scores.end(), 100);
    cout << scores.size();
    cout << accumulate(scores.begin(), scores.end(), 0);

    // Last part,
    // Calculate the average of the scores
    // Use std::round to round to the decimal part
    // I do not understand what to do????
    int sum{0};
    for_each(scores.begin(), scores.end(), [& sum] (const auto elem) {sum += elem;});
    cout << round((sum / scores.size()));
}

void workingWithLists(std::list<int>& firstList, std::list<int>& secondList, int value1, int value2, int value3)
{
    auto found = find(firstList.begin(), firstList.end(), value1);
    if (found != firstList.end())
        cout << "Found";
    else
        cout << "Not found";
}