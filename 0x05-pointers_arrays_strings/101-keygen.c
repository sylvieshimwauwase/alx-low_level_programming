#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
	srand(time(NULL));

	t char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";
	const int charset_length = sizeof(charset) - 1;

	char password[PASSWORD_LENGTH + 1] = "";
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % charset_length];
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s\n", password);
	return 0;
}
