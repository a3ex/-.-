#include <iostream>

using namespace std;

int	main(int argc, char **argv)
{
	if (argc == 2)
		cout << argv[1] << endl;
	else
		cout << "Invalid number of arguments!" << '\n';
	argc = 0;
	return (0);
}
