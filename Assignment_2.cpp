#include <iostream>
using namespace std;

int main() {
	{
		int temp;
		int arr[10];
		int x;
		for (int i = 0; i < 10; i++) {
			cin >> x;
			arr[i] = x;
		}
		cout << "Before sorting array:"<<endl;
		for (int i = 0; i < 10; i++)
			cout << arr[i] << " ";
		cout << endl;
		for (int i = 0; i < 10 - 1; i++)
			for (int j = 0; j < 10 - 1; j++)
			{
				if (*(arr + j) < *(arr + j + 1))
				{
					temp = *(arr + j);
					*(arr+j) = *(arr + j + 1);
					*(arr + j + 1) = temp;
				}
			}
		cout << "After sorting array:" << endl;
		for (int i = 0; i < 10; i++)
			cout << *(arr + i) << " ";
		cout << endl;
	}

}