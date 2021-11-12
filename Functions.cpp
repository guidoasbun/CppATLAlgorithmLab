//
// Created by Guido Asbun on 10/23/21.
// CLion 2021.2.2
//

#include "Functions.h"
#include <vector>
#include <iostream>
#include <numeric>
#include <list>

using namespace std;

void displayScores(vector<int>& scores)
{
    // Part 1
    /*************************************
      Do NOT use endl or \n
   **************************************/

    // Use std::sort to sort scores in descending order.
    // You will need a lambda expression.
    // Your code here...
    sort(scores.begin(), scores.end(), [] (int a, int b) {return ( a > b);});

    // Part 2
    // Use std::for_each to display all scores.
    // You will need a lambda expression.
    // Your code here...
    for_each(scores.begin(), scores.end(), [] (int i) {cout << i << " ";});

    // Part 3
    // cout << "\nHighest score: ";
    // Display highest score.
    // Use std::max_element to find the highest score.
    // Your code here...
    cout << *max_element(scores.begin(), scores.end());

    // Part 4
    // cout << "\nLowest score: ";
    // Display lowest score.
    // Use std::min_element to find the lowest score.
    // Your code here...
    cout << *min_element(scores.begin(), scores.end());

    // Part 5
    // cout << "\nPerfect scores: ";
    // Display number of scores equal to 100.
    // Use std::count
    // Your code here...
    cout << count(scores.begin(), scores.end(), 100);

    // Part 6
    // cout << "\nScore count: ";
    // Display the total number of scores.
    // Use vector::size
    // Your code here...
    cout << scores.size();

    // Part 7
    // cout << "\nScore total: ";
    // Calculate total of all scores.
    // Use std::accumulate (<numeric> already included)
    // Your code here...
    cout << accumulate(scores.begin(), scores.end(), 0);

    // Part 8
    // cout << "\nAverage score: ";
    // Calculate the average of the scores.
    // Use std::round to round the decimal part.
    // Your code here...
    int sum{0};
    for_each(scores.begin(), scores.end(), [& sum] (const auto elem) {sum += elem;});
    double size = scores.size();
    cout<< round((sum/size)*10)/10;
}

void workingWithLists(std::list<int>& firstList, std::list<int>& secondList, int value1, int value2, int value3)
{
    // Part 1
    /*******************************************
      Do NOT use endl or \n
   ********************************************/

//    ostream_iterator<int> screen(cout, " ");
//
//    cout << "First list: ";
//    copy(firstList.begin(), firstList.end(), screen);
//
//    cout << "\nSearch " << value1 << ": ";
    // If found, print "Found." otherwise print "Not found."
    // Use std::find on firstList.
    auto found = find(firstList.begin(), firstList.end(), value1);
    if (found != firstList.end())
        cout << "Found.";
    else
        cout << "Not found";

    // Part 2
//    cout << "\nReplace " << value2 << " with " << value3 << ": ";
    // Use std::replace on firstList.
    replace(firstList.begin(), firstList.end(), value2, value3);

    // Part 3
//    copy(firstList.begin(), firstList.end(), screen);
//
//    cout << "\nDelete " << value3 << ": ";
    // Use std::find and list::erase on firstList.
    firstList.erase(find(firstList.begin(), firstList.end(), value3));

    // Part 4
//    copy(firstList.begin(), firstList.end(), screen);
//
//    cout << "\nSort the list: ";
    // Use list::sort on firstList.
    firstList.sort();

    // Part 5
//    copy(firstList.begin(), firstList.end(), screen);
//
//    cout << "\nReverse the list starting from the 3rd element: ";
    // Use std::reverse on firstList.
    auto iter1 = firstList.begin();
    advance(iter1, 2);
    reverse(iter1, firstList.end());

    // Part 6
//    copy(firstList.begin(), firstList.end(), screen);
//
//    cout << "\nSecond list: ";
//    copy(secondList.begin(), secondList.end(), screen);
//
//    cout << "\nMove last three elements of the second list "
//         << "into the first list at position fourth.\n";
    // Use list::splice and std::advance
    auto firstListIter = firstList.begin();
    advance(firstListIter, 3);

    auto secondListIter = secondList.end();
    advance(secondListIter, -3);

    firstList.splice(firstListIter, secondList, secondListIter, secondList.end());
//    cout << "First list: ";
//    copy(firstList.begin(), firstList.end(), screen);
//    cout << "\nSecond list: ";
//    copy(secondList.begin(), secondList.end(), screen);
//    cout << endl;
}
}