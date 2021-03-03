// Nekoja2.cpp : ã‚³ãƒ³ã‚½ãƒ¼ãƒ« ã‚¢ãƒ—ãƒªã‚±ãƒ¼ã‚·ãƒ§ãƒ³ã®ã‚¨ãƒ³ãƒˆãƒª ãƒã‚¤ãƒ³ãƒˆã‚’å®šç¾©ã—ã¾ã™ã€E
//

#include "stdafx.h"


int main()  // NOLINT(bugprone-exception-escape)
{	
    int cpp_ver = __cplusplus;
    int cpp98 = 199711;
	int cpp17 = 201703;
    int cpp14 = 201402;
    int cpp11 = 201103;

	switch ( cpp_ver == cpp98 ){
	  case 1:
	   cout << "  ----------------------  " << endl;
       cout << "    Œ»İ‚ÌC++ : C++98     " << endl;
	   cout << "  ----------------------  " << endl;
	   break;
	  default:
	   cout << "  ---------------------------------------------  " << endl;
       cout << "" << endl;
       cout << "    __cplusplus : " << cpp_ver << " Ì " << "equal int : " << cpp98 << endl;
	   cout << "" << endl;
	   cout << "    int type equals : " << ( cpp_ver == cpp98 ) << endl;
	   cout << "" << endl;
	   cout << "  ---------------------------------------------  " << endl;
	}
	switch ( cpp_ver == cpp17 ){
	  case 1:
	   cout << "  ----------------------  " << endl;
       cout << "    Œ»İ‚ÌC++ : C++17     " << endl;
	   cout << "  ----------------------  " << endl;
	   break;
	  default:
	   cout << "  ---------------------------------------------  " << endl;
       cout << "" << endl;
       cout << "    __cplusplus : " << cpp_ver << " Ì " << "equal int : " << cpp17 << endl;
	   cout << "" << endl;
	   cout << "    int type equals : " << ( cpp_ver == cpp17 ) << endl;
	   cout << "" << endl;
	   cout << "  ---------------------------------------------  " << endl;
	}
    switch ( cpp_ver == cpp14 ){
	  case 1:
	   cout << "  ----------------------  " << endl;
       cout << "    Œ»İ‚ÌC++ : C++14     " << endl;
	   cout << "  ----------------------  " << endl;
	   break;
	  default:
	   cout << "  ---------------------------------------------  " << endl;
       cout << "" << endl;
       cout << "    __cplusplus : " << cpp_ver << " Ì " << "equal int : " << cpp14 << endl;
	   cout << "" << endl;
	   cout << "    int type equals : " << ( cpp_ver == cpp14 ) << endl;
	   cout << "" << endl;
	   cout << "  ---------------------------------------------  " << endl;
	}
	switch ( cpp_ver == cpp11 ){
	  case 1:
	   cout << "  ----------------------  " << endl;
       cout << "    Œ»İ‚ÌC++ : C++11     " << endl;
	   cout << "  ----------------------  " << endl;
	   break;
	  default:
	   cout << "  ---------------------------------------------  " << endl;
       cout << "" << endl;
       cout << "    __cplusplus : " << cpp_ver << " Ì " << "equal int : " << cpp11 << endl;
	   cout << "" << endl;
	   cout << "    int type equals : " << ( cpp_ver == cpp11 ) << endl;
	   cout << "" << endl;
	   cout << "  ---------------------------------------------  " << endl;
	}

	return 0;
}
