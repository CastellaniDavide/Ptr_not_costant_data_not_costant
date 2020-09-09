/**
 * @file Ptr_not_costant_data_not_costant.cpp
 *
 * @version 01.01 2020-08-15
 *
 * @brief Puntator not costant and data not costant in c
 *
 * @ingroup Ptr_not_costant_data_not_costant
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */
#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr);

int main() {
	char s[] = "Hello Davide";

	printf("%s -> ", s);
	convertToUppercase(s);
	printf("%s\n", s);
	
	return 0;
}

void convertToUppercase(char *sPtr)
{
	while (*sPtr != '\0')
	{
		*sPtr = toupper(*sPtr);
		sPtr++;
	}
	
}