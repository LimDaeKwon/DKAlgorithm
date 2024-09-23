#include<iostream>
int main() {
	int a[3];
	std::cin >> a[0] >> a[1] >> a[2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (a[j] > a[j + 1])
			{
				int k= a[j];
				a[j] = a[j + 1];
				a[j + 1 ] = k;
			}
		}
	}
	if (a[1] + a[0] > a[2]) std::cout << a[1] + a[2] + a[0];
	else std::cout << (a[1] + a[0]) * 2 - 1;
 	

	return 0;
}