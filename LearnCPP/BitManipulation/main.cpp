#include <iostream>
#include <bitset>

int main()
{

	//7 6 5 4 3 2 1 0 - bit position
	std::bitset<8> bits{ 0b0000'0101};

	bits.set(3); // set bit at position 3 to 1
	bits.flip(4); // flip bit 4 ==> 0 -> 1
	bits.reset(4); // flip bit 4 ==> 1 -> 0


	std::cout << "All the bits: " << bits << std::endl;
	std::cout << "Bit 3 has value: " << bits.test(3) << std::endl;
	std::cout << "Bit 4 has value: " << bits.test(4) << std::endl;








	return EXIT_SUCCESS;
}