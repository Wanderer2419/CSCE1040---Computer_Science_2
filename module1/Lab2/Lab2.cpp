#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int jerseyNum[5];
	int rating[5];

	for (int i = 0; i < 5; i++) {
		printf("Enter player %d's jersey number:\n", i+1);
		scanf("%d", &jerseyNum[i]);
		printf("Enter player %d's rating:\n", i+1);
		scanf("%d", &rating[i]);
		printf("\n");
	}
	printf("ROSTER\n");
	for (int i = 0; i < 5; i++) {
		printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jerseyNum[i], rating[i]);
	}

	bool loopEnd = false;
	printf("\n");
	char choice;

	while(!loopEnd) {
		printf("MENU\n");
		printf("u - Update player rating\n");
		printf("a - Output players above a rating\n");
		printf("r - Replace player\n");
		printf("o - Output roster\n");
		printf("q - Quit\n\n");
		printf("Choose an option:\n");
		scanf(" %c", &choice);

		if (choice == 'q') {
			loopEnd = true;
		} else if (choice == 'o') {
			printf("ROSTER\n");
			for (int i = 0; i < 5; i++) {
				printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jerseyNum[i], rating[i]);
			}
		} else if (choice == 'u') {
			int input = 0;
			printf("Enter a jersey number:\n");
			scanf("%d", &input);
			int index = 0;
			for (int i = 0; i < 5; i++) {
				if (jerseyNum[i] == input) {
					index = i;
					break;
				}
			}
			printf("Enter a new rating for player:\n");
			scanf("%d", &rating[index]);
		} else if (choice == 'a') {
			int testRating;
			printf("Enter a rating\n\n");
			scanf("%d", &testRating);
			printf("ABOVE %d\n", testRating);
			for (int i = 0; i < 5; i++) {
				if (rating[i] > testRating) {
					printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jerseyNum[i], rating[i]);
				}
			}
		} else if (choice == 'r') {
			int testJersey;
			printf("Enter a jersey number:\n");
			scanf("%d", &testJersey);
			for (int i = 0; i < 5; i++) {
				if (jerseyNum[i] == testJersey) {
					printf("Enter a new jersey number:\n");
					scanf("%d", &jerseyNum[i]);
					printf("Enter a rating for the new player:\n");
					scanf("%d", &rating[i]);
				}
			}
		}
	}
	return 0;
}
