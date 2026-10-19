#include <iostream>

int main() {
	int numbers[] = {4, 9, 2, 7, 5};
	const int size = sizeof(numbers) / sizeof(numbers[0]);

	int largest = numbers[0];
	for (int i = 1; i < size; ++i) {
		if (numbers[i] > largest) {
			largest = numbers[i];
		}
	}

	std::cout << "Largest value: " << largest << '\n';
	return 0;
}
