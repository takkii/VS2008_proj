// Nekoja2.cpp : コンソール アプリケーションのエントリ ポイントを定義します、E
//

#include "stdafx.h"

int main()  // NOLINT(bugprone-exception-escape)
{	
    int cpp_ver = __cplusplus;
    int cpp_eql = 199711;

	switch ( cpp_ver == cpp_eql ){
	  case 1:
	   cout << "  ----------------------  " << endl;
       cout << "    ���݂�C++ : C++98     " << endl;
	   cout << "  ----------------------  " << endl;
	   break;
	  default:
	   cout << "  ---------------------------------------------  " << endl;
       cout << "" << endl;
       cout << "    __cplusplus : " << cpp_ver << " �� " << "equal int : " << cpp_eql << endl;
	   cout << "" << endl;
	   cout << "    int type equals : " << ( cpp_ver == cpp_eql ) << endl;
	   cout << "" << endl;
	   cout << "  ---------------------------------------------  " << endl;
	}
	return 0;
}
