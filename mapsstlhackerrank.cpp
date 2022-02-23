/*The first line of the input  contains Q where Q is the number of queries. The next Q
  lines contain 1 query each.The first integer,type of each query is the type of the query.
  If query is of type 1, it consists of one string and an integer X and Y where X is the
   name of the student and Y is the marks of the student.If query is of type 2 or 3
   ,it consists of a single string X where X is the name of the student.
   For queries of type 3 print the marks of the given student.*/
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;    
    map<string, int> m;    
    while (n--) {
        int t;
        cin >> t;
        
        string s;
        cin >> s;
        
        if (t == 1) {
            int a;
            cin >> a;
            
            m[s] += a;
        } else if (t == 2) {
            m[s] = 0;
        } else {
            cout << m[s] << "\n";
        }
    }    
    return 0;
}   


