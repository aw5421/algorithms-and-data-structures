#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>

template <class RandomIt>
void bubbleSort(RandomIt first, RandomIt last) {
	while (true) {
		bool isSorted = true;
		for (RandomIt left = first, right = first + 1; right != last; left++, right++) {
			if (*left > *right) {
				isSorted = false;
				std::swap(*left, *right);
			}
		}
		if (isSorted)
			return;
	}
}

int main(int argc, char const* argv[]) {
	std::srand(std::chrono::steady_clock::now().time_since_epoch().count());

	std::vector<int> vec(10);
	std::generate(vec.begin(), vec.end(), []() { return std::rand() % 100; });

	std::cout << "Input:" << std::endl;
	for (const auto& elem : vec)
		std::cout << elem << ", ";
	std::cout << std::endl;

	bubbleSort(vec.begin(), vec.end());

	std::cout << "Sorted:" << std::endl;
	for (const auto& elem : vec)
		std::cout << elem << ", ";

	return 0;
}
