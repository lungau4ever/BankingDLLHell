#pragma once

#ifndef __cplusplus
#include <stdbool.h> // for C99 type bool
#endif

#ifdef __cplusplus
extern "C" {
#endif



#ifdef MATHFUNCSDLL_EXPORTS
#define CREATIONALDLL_API __declspec(dllexport) 
#else
#define CREATIONALDLL_API __declspec(dllimport) 
#endif

#include <string.h>
	extern "C"
	{
	typedef struct User {
		char *prename;
		char *surname;
		char *mail;
		char *phone;
		char *birthday;
		char *address;
		int user_id;
	} User;
		
		CREATIONALDLL_API int AddUser(User user);
		CREATIONALDLL_API User getUserByMail(char *mail);
		CREATIONALDLL_API int changeUser(User user);
		CREATIONALDLL_API int deleteUser(User user);
	}


#ifdef __cplusplus
} // extern "C"
#endif