#include <stdio.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	struct dog;

	dog.name = "Poppy";
	dog.age = 3.5;
	dog.owner = "Bob";
	return (0);
}
