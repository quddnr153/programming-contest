/*

샘플문제 1번

여러 개의 자연수를 표준 입력(standard input)에서 읽어서, 평균 값을 계산하여 출력하세요.

숫자는 공백으로만 구분됩니다.
입력은 10개 이하입니다.
올바른 출력은 하나의 문장이어야 하며, 문장의 마지막은 불필요한 공백문자 없이 newline으로 끝나야 합니다.
출력의 포맷은 반드시 소수점 이하 한 자리만 포함해야 합니다.

예시 설명
3 9 12가 입력인 경우, 평균 값은 8이다. 따라서 결과는 다음과 같다.
8.0

*/

#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>

using namespace std;

vector<int> getInput(ssize_t sizeLimit) 
{
    vector<int> tokenVector;
    string line;
    getline(cin, line);
    istringstream iss(line);
    string token;
    while (getline(iss, token, ' ')) {
        try {
            tokenVector.push_back(stoi(token));
        } catch (exception& e) {
            continue;
        }
        if (tokenVector.size() >= sizeLimit) {
            break;
        }
    }
    return tokenVector;
}


int main(void)
{
    // 표준 입력으로부터 최대 10개의 자연수를 벡터 형태로 읽어들임
    vector<int> numbers = getInput(10);

    // 다음과 같은 방식으로 numbers 벡터와 number 변수를 사용할 수 있음
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++)
      sum += numbers[i];
  printf("%.1f\n", (double)sum / (double)numbers.size());
    

    // write your code here


    return 0;
}