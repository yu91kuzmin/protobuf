// proto.cpp: определяет точку входа для консольного приложения.
//

#include "DocumentId.pb.h"
#include "stdafx.h"
#include <iostream>

#pragma comment(lib,"libprotobuf.lib")
#pragma comment(lib,"libprotobuf-lite.lib")
#pragma comment(lib,"libprotoc.lib")

using namespace std;
using namespace Diadoc::Api::Proto;


int _tmain()
{
	DocumentId doc_id;
	cout << "Hello word" << endl;
	getchar();
	return 0;
}

