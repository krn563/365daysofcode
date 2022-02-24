/*The first line of the input contains Q where Q is the number of queries.
 The next Q lines contain 1 query each. Each query consists of two 
 integers y and x where y is the type of the query and x is an integer.
 For queries of type 3 print "Yes"(without quotes) if the number x is present
in the set and if the number is not present, then print "No"(without quotes).
Each query of type 3 should be printed in a new line.
 */
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int iCount;
    set<int> ss;
    cin >> iCount;
    for (int i=0; i<iCount; ++i){
        int type, query;
        cin >> type >> query;
        switch (type){
            case 1:
                ss.insert(query);
                break;
            case 2:
                ss.erase(query);
                break;
            case 3:
                cout << (ss.find(query) == ss.end() ? "No" : "Yes") << endl;
                break;
        }
    }  
    return 0;
}