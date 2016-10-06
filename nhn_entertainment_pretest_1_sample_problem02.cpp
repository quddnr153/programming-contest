/*

���ù��� 2�� 

���� ���� �ܾ ǥ�� �Է�(standard input)���� �о �� �ܾ��� ���̸� ���ϰ�, �� ������ ���� ����ϼ���.

�־����� �ܾ��� �Է��� 10�� �����̸�, 20�� ������ ������ ���ĺ� �ҹ��ڷ� ������ ���ڿ��Դϴ�.
�ܾ�� �������θ� ���е˴ϴ�.
�ùٸ� ����� �ϳ��� �����̾�� �ϸ�, ������ �������� ���ʿ��� ���� ���� ���� newline���� ������ �մϴ�.


���� ���� 
toast crew payco�� �Է��� ���, �� �ܾ��� ���̴� 5, 4, 5�̸� �� ���� 14�̴�. ���� ����� ������ ����.
14

��/��� ����
�Է� 1
toast crew payco
��� 1
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
    // ǥ�� �Է����κ��� �ִ� 10���� ���ڿ� ��ū�� ���� ���·� ��ȯ����
    vector<string> words = getInput(10);
    int sum = 0;
    for (int i = 0; i < words.size(); i++)
        sum += words[i].length();

    printf("%d\n", sum);
    return 0;
}