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
	char user[80][userCount];
	printf("%d users\n", userCount);
	int i;
	for(i = 0; i < userCount; i++) {
		argv[i+1][0]=toupper(argv[i+1][0]); // capitalize first letter
		strcpy(user[i],argv[i+1]);
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
	
	
	
	
	for (i=0;i<3;i++){
		returnpid = fork();
		if (returnpid < 0) {
			printf("Fork failed\n");
			exit(1);
		}
		else if (returnpid == 0) { /* child */
			close(fd[idx][1]);
			//printf("child %d waiting read n:%d\n",idx,read(fd[idx][0],buf,80));
			while ((n = read(fd[idx][0],buf,80)) > 0) { 
				printf("child %d successfully read\n",idx);
			   buf[n] = 0;
			   printf("<child %d> message [%s] of size %d bytes received\n",idx,buf,n);
			   //break;
			}
			//printf("<child %d> %d,%d\n",idx,getpid(),getppid());
			printf("<child %d> completed\n",idx);
			close(fd[idx][0]);
			exit(0);
		}else if(i==?){
			close(fd[idx][0]);
			idx++;

			aa=0;

			sprintf(buf,"aaa");
			sprintf(buf,"bbb");

			//sleep(1);
			//write(fd[0][1],"bbb",3);
			//write(fd[1][1],"ccc",3);

			write(fd[0][1],"aaa",3);
			write(fd[1][1],"ddd",3);
			write(fd[2][1],"ccc",3);
			usleep(100);
			write(fd[0][1],"eee",3);

			/*
			write(fd[1],"",0);
			write(fd[1],"b",1);

			write(fd[1],"b",1);
			write(fd[1],"c",1);
			write(fd[1],"d",1);
			write(fd[1],"e",1);
			*/
			printf("<parent> I have finished:%d!\n",getpid());
			//idx++; 
		}
		else{
			close(fd[idx][0]);
			idx++;
		}
	}
  
	for (i=0;i<3;i++){
		wait(NULL);
		close(fd[idx][1]);
	}

  
	printf("<parent> completed\n");
	exit(0);
}

	
	
	
	
	
	
}
