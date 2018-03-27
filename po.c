#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	// add all users
	int userCount = argc - 1;
	if(userCount < 3 || userCount > 9) {
		printf("Error: the number of users is not in the range, 3 to 9.");
		exit(0);
	}
	char *user[userCount];
	printf("%d users\n", userCount);
	int i;
	for(i = 0; i < userCount; i++) {
		argv[i + 1][0] -= 32; // capitalize first letter
		user[i] = argv[i + 1];
		printf("%s added\n", user[i]);
	}
	
	// read command
	char buf[256];
	while(1) {
		printf("Please enter ->\n");
		gets(buf);
		printf("%s received\n", buf); 
		
		// addClass
		if (strncmp(buf, "addClass", 7) == 0) {
			// do/call sth
		}
		
		// addMeeting
		else if (strncmp(buf, "addMeeting", 9) == 0) {
			
		}
		
		// addGathering
		else if (strncmp(buf, "addGathering", 10) == 0) {
			
		}
		
		// addBatch
		else if (strncmp(buf, "addBatch", 7) == 0) {
			
		}
		
		// printSchd
		else if (strncmp(buf, "printSchd", 8) == 0) {
			
		}
		
		// printReport
		else if (strncmp(buf, "printReport", 10) == 0) {
			
		}
		
		// endProgram
		else if (strncmp(buf, "endProgram", 9) == 0) {
			printf("-> Bye!");
			break;
		}
		
		else printf("wrong command!\n");
	}
}
