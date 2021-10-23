//
// Created by Guido Asbun on 10/23/21.
//

#include "Functions.h"
#include <vector>

using namespace std;

void displayScores(vector<int>& scores)
{
    sort(scores.begin(), scores.end(), [] (int a, int b) {return ( a > b);});

}