#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    unordered_set<char> seen;
    
    for (char c: my_string) {
        if (seen.find(c) == seen.end()) {  // 처음 등장한 문자라면
            seen.insert(c);
            answer += c;
        }
    }
    return answer;
}