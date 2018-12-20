#include <iostream>
#include <random>

int main() {

	std::size_t rows = 0, cols = 0;

	std::cout << "Please, enter values of rows and cols: ";
	std::cin >> rows >> cols;

	int **matrix = new int*[rows];
	int *sums = new int[rows];

	for (std::size_t i = 0; i != rows; ++i) {

		matrix[i] = new int[cols];
		sums[i] = 0;

	}


	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(-50, 50);

	std::cout << "Please, enter the values of matrix: \n";
	for (std::size_t i = 0; i != rows; ++i) {

		for (std::size_t j = 0; j != cols; ++j) {

			matrix[i][j] = dist(gen);
			sums[i] += matrix[i][j];

			std::cout << matrix[i][j] << ' ';

		}

		std::cout << '\n';

	}

	std::cout << '\n';

	std::size_t indexMinSum = 0;
	std::size_t indexMaxSum = 0;
	int minSum = sums[0], maxSum = sums[0];

	for (std::size_t i = 1; i != rows; ++i) {

		if (minSum > sums[i]) {

			minSum = sums[i];
			indexMinSum = i;

		}

		if (maxSum < sums[i]) {

			maxSum = sums[i];
			indexMaxSum = i;

		}

	}

	std::cout << "Row with max sum: ";
	for (std::size_t i = 0; i != cols; ++i) {

		std::cout << matrix[indexMaxSum][i] << ' ';

	}
	std::cout << "\nMax sum: " << maxSum << '\n';

	std::cout << "Row with min sum: ";
	for (std::size_t i = 0; i != cols; ++i) {

		std::cout << matrix[indexMinSum][i] << ' ';

	}
	std::cout << "\nMin sum: " << minSum << '\n';

	system("PAUSE");
	return 0;

}