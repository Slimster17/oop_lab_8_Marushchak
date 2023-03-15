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

	cout << "Масив: " << endl;
	for(int i = 0; i<arr.size(); i++)
	{
		cout << arr[i];
		cout << "\t";
	}

	cout << "\n" << string(50, '*') << endl;

	int maxElement = *max_element(arr.begin(), arr.end());
	cout <<"Максимальний елемент: " << maxElement << endl;

	int minElement = *min_element(arr.begin(), arr.end());
	cout << "Мінімальний елемент: " << minElement << endl;

	cout << string(50, '*') << endl;

	for (int i = 0; i < arr.size(); i++)
	{
		if(arr[i]<0)
		{
			summNegative += arr[i];
		}
	}

	cout << "Сума від'ємних елементів масиву: " << summNegative << endl;

	cout << string(50, '*') << endl;

	int maxElementIndex = max_element(arr.begin(), arr.end()) - arr.begin();
	cout << "Індекс максимального елементу: " << maxElementIndex << endl;

	int minElementIndex = min_element(arr.begin(), arr.end()) - arr.begin();
	cout << "Індекс мінімального елементу: " << minElementIndex << endl;

	cout << string(50, '*') << endl;

	for (int i = 0; i < arr.size(); i++)
	{
		if (i > minElementIndex && i <maxElementIndex)
		{
			multiplyBetweenRange *= arr[i];
		}
	}
	cout << "Добуток елементів від мін. до макс. індексу: " << multiplyBetweenRange << endl;

	cout << string(50, '*') << endl;

	sort(arr.begin(), arr.end());

	cout <<"Відсортований масив: " << endl;

	for (int i = 0; i < arr.size(); i++)
	{
	cout << arr[i];
	cout << "\t";
	}
	cout <<"\n" << string(50, '*') << endl;

	system("pause");
	return 0;
}