


#include <iostream>
#include<vector>

using namespace std;


/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY strings
 *  2. STRING_ARRAY queries
 */

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> result; // for storing the result as a vector
    int len1 = strings.size();
    int len2 = queries.size();
    for(int i=0; i<len2; i++) //Loop 1st as described above
    {   int count =0;
        for(int j=0; j<len1; j++) //Loop 2nd as described above
        {
            if(strings[j]==queries[i])
            {
                count++; // if same increment the value of count
            }
        }
        result.push_back(count);
    }
    return result;
}

