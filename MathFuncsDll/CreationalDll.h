// CREATIONALDLL.h


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

extern "C"
{
	//namespace CreatFuncs
	//{
	//	// This class is exported from the MathFuncsDll.dll
	//	class MyCreatFuncs
	//	{
	//	public:
	//		// Returns a + b
	//		static CREATIONALDLL_API double Add(double a, double b);

	//		// Returns a - b
	//		static CREATIONALDLL_API double Subtract(double a, double b);

	//		// Returns a * b
	//		static CREATIONALDLL_API double Multiply(double a, double b);

	//		// Returns a / b
	//		// Throws const std::invalid_argument& if b is 0
	//		static CREATIONALDLL_API double Divide(double a, double b);
	//	};
	//}

	CREATIONALDLL_API double Add(double a, double b);

	
			//CREATIONALDLL_API double Add(double a, double b);

		 //CREATIONALDLL_API double Subtract(double a, double b);

		 //CREATIONALDLL_API double Multiply(double a, double b);

		 //CREATIONALDLL_API double Divide(double a, double b);
}

#ifdef __cplusplus
} // extern "C"
#endif