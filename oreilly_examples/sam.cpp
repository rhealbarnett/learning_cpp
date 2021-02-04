#include <iostream>
#include <string>

using namespace std;

char name[30];		// First name of a thing
char surname[30]; 	// Surname of a thing.
char full_name[30]; 	// Full name of a thing. 

int main()
{
	strcpy(name, "Sam");
	strcpy(surname, "Birdface ");
	cout << "The name is " << name << "\n";
	cout << strcat(surname,name) << "\n";
	return (0);
}
