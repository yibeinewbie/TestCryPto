// TestCryPto.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
//#include "cryptlib.h"
#include "des.h"
using namespace  std;
using namespace CryptoPP;
#pragma comment( lib, "cryptlib.lib" )

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned char key[1024];
	unsigned char input[1024] = "12345";
	unsigned char output[1024];
	unsigned char txt[1024];
	cout << "input is: " << input << endl;

	//可以理解成首先构造一个加密器
	DESEncryption encryption_DES;
	//回忆一下之前的背景，对称加密算法需要一个密匙。加密和解密都会用到。
	//因此，设置密匙。
	////encryption_DES.SetKey(key, DES::KEYLENGTH);
    //进行加密
   //// encryption_DES.ProcessBlock(input, output);
   //显示结果
   //for和for之后的cout可有可无，主要为了运行的时候看加密结果
	//把字符串的长度写成一个常量其实并不被推荐。
	//不过笔者事先知道字符串长，为了方便调试，就直接写下。
	//这里主要是把output也就是加密后的内容，以十六进制的整数形式输出。
// 	for (int i = 0; i < 5; i++)
// 	{
// 		cout << hex << (int)output[i] << ends;
// 	}
// 	cout << endl;

	system("PAUSE");
	return 0;
}

