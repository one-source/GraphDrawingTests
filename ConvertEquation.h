//
// Created by Josh aka Bae on 09/02/2016.
//

#ifndef GRAPHDRAWINGTESTS_CONVERTEQUATION_H
#define GRAPHDRAWINGTESTS_CONVERTEQUATION_H

#include <iostream>

using namespace std;

string ConvertEquation(string sEquation)
{
    pair <const char*, pair<string, string>> aConditionalConversions[6][1];

    aConditionalConversions[0][0] = make_pair("x", make_pair("0123456789(", "*x"));
    aConditionalConversions[1][0] = make_pair("y", make_pair("0123456789(", "*y"));
    aConditionalConversions[2][0] = make_pair("s", make_pair("0123456789(", "*s"));
    aConditionalConversions[3][0] = make_pair("c", make_pair("0123456789(", "*c"));
    aConditionalConversions[4][0] = make_pair("t", make_pair("0123456789(", "*t"));
    aConditionalConversions[5][0] = make_pair("(", make_pair("0123456789(", "*("));


}

bool InArray()
{

}

#endif //GRAPHDRAWINGTESTS_CONVERTEQUATION_H