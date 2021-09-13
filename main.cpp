#include <iostream>
#include "MD5.h"

using namespace std;

int main(int argc, char* argv[]) {

	char option;
	cout << "选择文件签名(a)或字符串签名(b)" << endl;
	cin >> option;

	MD5 md5;
	switch (option) {
	case'a':
		std::cout << md5.GetFileMD5("test.txt") << std::endl;
	case'b':
		std::cout << md5.GetStringMD5("test.txt") << std::endl;
	};

 	system("pause");
	return 0;
}
