#include <iostream>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    
    int N = 0;
    string numbers;
    cin >> N;
    cin >> numbers;

    int sum = 0;
    for (int i = 0; i < numbers.length(); i++)
    {
        sum = sum + numbers[i] - '0'; // numbers[i]�� ���� ������ ����Ͽ� sum�� ���Ͽ� �����ϱ�
    }
    cout << sum << "\n";
}
