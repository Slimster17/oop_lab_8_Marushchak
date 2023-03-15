#include <iostream>
#include<Windows.h>
#include<array>
#include<algorithm>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	array<int, 5> arr {-5, -1, 2, 8, 1};

	int summNegative = 0;
	int multiplyBetweenRange = 1;

	cout << "�����: " << endl;
	for(int i = 0; i<arr.size(); i++)
	{
		cout << arr[i];
		cout << "\t";
	}

	cout << "\n" << string(50, '*') << endl;

	int maxElement = *max_element(arr.begin(), arr.end());
	cout <<"������������ �������: " << maxElement << endl;

	int minElement = *min_element(arr.begin(), arr.end());
	cout << "̳�������� �������: " << minElement << endl;

	cout << string(50, '*') << endl;

	for (int i = 0; i < arr.size(); i++)
	{
		if(arr[i]<0)
		{
			summNegative += arr[i];
		}
	}

	cout << "���� ��'����� �������� ������: " << summNegative << endl;

	cout << string(50, '*') << endl;

	int maxElementIndex = max_element(arr.begin(), arr.end()) - arr.begin();
	cout << "������ ������������� ��������: " << maxElementIndex << endl;

	int minElementIndex = min_element(arr.begin(), arr.end()) - arr.begin();
	cout << "������ ���������� ��������: " << minElementIndex << endl;

	cout << string(50, '*') << endl;

	for (int i = 0; i < arr.size(); i++)
	{
		if (i > minElementIndex && i <maxElementIndex)
		{
			multiplyBetweenRange *= arr[i];
		}
	}
	cout << "������� �������� �� ��. �� ����. �������: " << multiplyBetweenRange << endl;

	cout << string(50, '*') << endl;

	sort(arr.begin(), arr.end());

	cout <<"³����������� �����: " << endl;

	for (int i = 0; i < arr.size(); i++)
	{
	cout << arr[i];
	cout << "\t";
	}
	cout <<"\n" << string(50, '*') << endl;

	system("pause");
	return 0;
}