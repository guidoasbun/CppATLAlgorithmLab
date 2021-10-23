#include <iostream>
#include <vector>
#include "Functions.h"

using namespace std;

void printVector(const vector<int>& aVector);

int main() {
    vector<int> myScores = {15, 67, 25, 12, 9, 65, 78, 89, 23};

    displayScores(myScores);

    printVector(myScores);


    return 0;
}

void printVector(const vector<int>& aVector)
{
    for (const auto& element : aVector)
        cout << element << " ";
    cout << endl;
}
