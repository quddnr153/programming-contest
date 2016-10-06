/*

���ù��� 1��

���� ���� �ڿ����� ǥ�� �Է�(standard input)���� �о, ��� ���� ����Ͽ� ����ϼ���.

���ڴ� �������θ� ���е˴ϴ�.
�Է��� 10�� �����Դϴ�.
�ùٸ� ����� �ϳ��� �����̾�� �ϸ�, ������ �������� ���ʿ��� ���鹮�� ���� newline���� ������ �մϴ�.
����� ������ �ݵ�� �Ҽ��� ���� �� �ڸ��� �����ؾ� �մϴ�.

���� ����
3 9 12�� �Է��� ���, ��� ���� 8�̴�. ���� ����� ������ ����.
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
    // ǥ�� �Է����κ��� �ִ� 10���� �ڿ����� ���� ���·� �о����
    vector<int> numbers = getInput(10);

    // ������ ���� ������� numbers ���Ϳ� number ������ ����� �� ����
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++)
      sum += numbers[i];
  printf("%.1f\n", (double)sum / (double)numbers.size());
    

    // write your code here


    return 0;
}