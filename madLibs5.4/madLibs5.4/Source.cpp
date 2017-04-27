#include <iostream>
#include <string>

int madLib(std::string FAVORITE_COLOR, std::string EST_WORD, int c, std::string BODY_PART, 
	std::string FAVORITE_ANIMAL, std::string NOUN, std::string PLURAL_NOUN)
{
	std::cout << "\nThe " << FAVORITE_COLOR << " Dragon is the " << EST_WORD << " Dragon of them all." << std::endl;
	std::cout << "It has " << c << " " << BODY_PART << ", and a " << FAVORITE_ANIMAL << " shaped like a " << NOUN << "." << std::endl;
	std::cout << "It loves to eat " << PLURAL_NOUN << ", although it will feast on nearly anything.\n" << std::endl;
	return 0;
}

int main()
{
	std::string FAVORITE_COLOR, EST_WORD, BODY_PART, FAVORITE_ANIMAL, NOUN, PLURAL_NOUN;
	int a, b, c;

	std::cout << "Welcome to Mad Libs" << std::endl;
	std::cout << "Please enter the following for your personalized story: \n" << std::endl;

	std::cout << "Enter your favorite color: ";
	std::cin >> FAVORITE_COLOR;

	std::cout << "Enter a word, ending in 'est': ";
	std::cin >> EST_WORD;

	std::cout << "Enter a body part that is plural: ";
	std::cin >> BODY_PART;

	std::cout << "Enter your favorite animal: ";
	std::cin >> FAVORITE_ANIMAL;

	std::cout << "Enter a noun: ";
	std::cin >> NOUN;

	std::cout << "Enter a plural noun: ";
	std::cin >> PLURAL_NOUN;

	std::cout << "Enter your age: ";
	std::cin >> a;

	std::cout << "Enter your favorite number that is smaller than your age: ";
	std::cin >> b;

	c = a - b;

	madLib(FAVORITE_COLOR, EST_WORD, c, BODY_PART, FAVORITE_ANIMAL, NOUN, PLURAL_NOUN);

	return 0;

	
}