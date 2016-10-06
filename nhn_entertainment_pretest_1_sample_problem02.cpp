/*

샘플문제 2번 

여러 개의 단어를 표준 입력(standard input)에서 읽어서 각 단어의 길이를 구하고, 그 길이의 합을 출력하세요.

주어지는 단어의 입력은 10개 이하이며, 20자 이하의 임의의 알파벳 소문자로 구성된 문자열입니다.
단어는 공백으로만 구분됩니다.
올바른 출력은 하나의 문장이어야 하며, 문장의 마지막은 불필요한 공백 문자 없이 newline으로 끝나야 합니다.


예시 설명 
toast crew payco가 입력인 경우, 각 단어의 길이는 5, 4, 5이며 그 합은 14이다. 따라서 결과는 다음과 같다.
14

입/출력 예시
입력 1
toast crew payco
출력 1
14

*/

#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>
#include <string>
#include <string.h>

using namespace std;

vector<string> getInput(ssize_t sizeLimit)
{
    vector<string> tokenVector;
    string line;
    getline(cin, line);
    istringstream iss(line);
    string token;
    while (getline(iss, token, ' ')) {
        tokenVector.push_back(token);
        if (tokenVector.size() >= sizeLimit) {
            break;
        }
    }
    return tokenVector;
}


int main(void)
{
    // 표준 입력으로부터 최대 10개의 문자열 토큰을 벡터 형태로 반환받음
    vector<string> words = getInput(10);
    int sum = 0;
    for (int i = 0; i < words.size(); i++)
        sum += words[i].length();

    printf("%d\n", sum);
    return 0;
}