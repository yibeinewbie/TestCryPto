// TestCryPto.cpp : �������̨Ӧ�ó������ڵ㡣
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

	//�����������ȹ���һ��������
	DESEncryption encryption_DES;
	//����һ��֮ǰ�ı������ԳƼ����㷨��Ҫһ���ܳס����ܺͽ��ܶ����õ���
	//��ˣ������ܳס�
	////encryption_DES.SetKey(key, DES::KEYLENGTH);
    //���м���
   //// encryption_DES.ProcessBlock(input, output);
   //��ʾ���
   //for��for֮���cout���п��ޣ���ҪΪ�����е�ʱ�򿴼��ܽ��
	//���ַ����ĳ���д��һ��������ʵ�������Ƽ���
	//������������֪���ַ�������Ϊ�˷�����ԣ���ֱ��д�¡�
	//������Ҫ�ǰ�outputҲ���Ǽ��ܺ�����ݣ���ʮ�����Ƶ�������ʽ�����
// 	for (int i = 0; i < 5; i++)
// 	{
// 		cout << hex << (int)output[i] << ends;
// 	}
// 	cout << endl;

	system("PAUSE");
	return 0;
}

