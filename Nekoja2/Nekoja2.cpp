// Nekoja2.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

int main()  // NOLINT(bugprone-exception-escape)
{	
    int cpp_ver = __cplusplus;
    int cpp_eql = 199711;

	switch ( cpp_ver == cpp_eql ){
	  case 1:
	   cout << "  ----------------------  " << endl;
           cout << "    現在の C++ : C++98  " << endl;
	   cout << "  ---------------------- " << endl;
	   break;
	  default:
	   cout << cpp_ver << endl;
	   cout << cpp_eql << endl;
	}
	return 0;
}
