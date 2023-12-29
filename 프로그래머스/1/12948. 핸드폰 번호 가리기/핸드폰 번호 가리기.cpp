#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int size = phone_number.size(); 
    string answer(size-4, '*');
    answer += phone_number.substr(size-4);
    return answer;
}