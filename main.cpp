#include <iostream>
#include <vector>
#include "Functions.h"

using namespace std;

void printVector(const vector<int>& aVector);
void printList(const list<int>& aList);

int main() {
    vector<int> myScores = {100, 100, 100, 100, 99, 99, 94, 90, 89, 89, 88, 83, 80, 79, 78, 76, 57, 45};

    list<int> myList = {34, 24, 15, 38, 59, 30, 54, 35, 22, 63, 41};
    list<int> myList2 = {1, 2, 3, 4};
    int myInt1{3};
    int myInt2{23};
    int myInt3{24};

    workingWithLists(myList, myList2, myInt1, myInt2, myInt3);

    printList(myList);

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
