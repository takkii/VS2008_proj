// Nekoja2.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"


int main()  // NOLINT(bugprone-exception-escape)
{	
	int x = 123456 + 78910;
	int y = 123 * 456;

	cout << "MAX : ";
	cout << x << endl;
	cout << "MIN : ";
	cout << y << endl;
	cout << "" << endl;
	
	if (x || y)
       cout << x << endl;
	else
	   cout << y << endl;
	   cout << "" << endl;
	return 0;
}
