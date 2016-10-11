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
		char prename[50];
		char surname[50];
		char mail[100];
		char phone[20];
		char birthday[20];
		char address[20];
		int user_id;
	} User;
		
		CREATIONALDLL_API int AddUser(User user);
		CREATIONALDLL_API User getUserByMail(char mail[50]);
		CREATIONALDLL_API int changeUser(User user);
		CREATIONALDLL_API int deleteUser(User user);
	}


#ifdef __cplusplus
} // extern "C"
#endif