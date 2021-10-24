#include <iostream>
#include <vector>
#include "Functions.h"

using namespace std;

void printVector(const vector<int>& aVector);
void printList(const list<int>& aList);

int main() {
    vector<int> myScores = {100, 100, 100, 100, 99, 99, 94, 90, 89, 89, 88, 83, 80, 79, 78, 76, 57, 45};

    list<int> myList = {23, 48, 99, 35, 67, 34, 64, 99};
    list<int> myList2 = {55, 56, 68, 79, 23, 34, 45, 56};
    int myInt1{3};
    int myInt2{5};
    int myInt3{8};



    return 0;
}

void printVector(const vector<int>& aVector)
{
    for (const auto& element : aVector)
        cout << element << " ";
    cout << endl;
}

void printList(const list<int>& aList)
{
    for (const auto& element : aList)
        cout << element << " ";
    cout << endl;
}
