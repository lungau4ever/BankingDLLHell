// MyExecRefsDll.cpp 
// compile with: /EHsc /link MathFuncsDll.lib

#include <iostream>
#include "CreationalDll.h" 
#include "newUser.h"

using namespace std;

int main()
{
   /* double a = 7.4;
    int b = 99;

    cout << "a + b = " <<
        Add(a, b) << endl;*/
   /* cout << "a - b = " <<
		CreatFuncs::MyCreatFuncs::Subtract(a, b) << endl;
    cout << "a * b = " <<
		CreatFuncs::MyCreatFuncs::Multiply(a, b) << endl;
    cout << "a / b = " <<
		CreatFuncs::MyCreatFuncs::Divide(a, b) << endl;

    try
    {
        cout << "a / 0 = " <<
			CreatFuncs::MyCreatFuncs::Divide(a, 0) << endl;
    }
    catch (const invalid_argument &e) 
    {
        cout << "Caught exception: " << e.what() << endl; 
    }
*/

	// USer TEstdata

	User testUser;
	strcpy_s(testUser.mail, "test@test.at");
	strcpy_s(testUser.prename, "dettl");
	strcpy_s(testUser.surname, "wieser");
	strcpy_s(testUser.address, "stauseestr 4, 5020");
	strcpy_s(testUser.birthday, "14.04.1999");
	strcpy_s(testUser.phone, "06641234569");

	cout << "Add user successful: " << AddUser(testUser) << endl;
	cout << "DeleteUser: " << deleteUser(testUser) << endl;

	User xy = getUserByMail("test@test.at");

	cout << "User by Mail: " << xy.prename << endl;



    return 0;
}