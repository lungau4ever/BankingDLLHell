#include "stdafx.h"
#include "UserHandling.h"
#include <stdexcept>

using namespace std;

User storedUser;

extern "C" int AddUser(User user) {
	// save user to database eg
	
	//storedUser = user;

	FILE *fp;
	errno_t err;

	err = fopen_s(&fp,"user.txt", "w+");
	fprintf_s(fp, "Testuser: \n");
	fprintf_s(fp, user.prename);
	fprintf(fp, "\n");
	fprintf_s(fp, user.surname);

	fclose(fp);


	return 0;
}
extern "C" User getUserByMail(char mail[50]) {
	// return User
	//dummy data
	User user;
	strcpy_s(user.mail, "test@test.at");
	strcpy_s(user.prename, "manuel");
	strcpy_s(user.surname, "dorfer");

	if (strcmp(mail, user.mail)) {
		return user;
	}
	else {
		User leer;
		strcpy_s(leer.prename, "leer");
		return leer;
	}
	
}
extern "C" int changeUser(User user) {
	User userold;
	userold = user;
	return 0; //successful
}
extern "C" int deleteUser(User user) {
	//delete in DB
	return 0; // successful
}