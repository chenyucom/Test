/*
 * MD5_Test.cpp
 *
 *  Created on: Dec 4, 2012
 *      Author: chenyu
 */


#include <stdio.h>
#include <openssl/md5.h>
#include <string.h>
#include <iostream>
using namespace std;

int MD5_Test() {
	unsigned char res[16] = {0};
	unsigned char data[10] = "123456789";
	MD5(data,strlen((const char*)data),res);
	for(int i = 0;i < 16;i++)
	printf("%2.2x",res[i]);
	cout << "\n!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	memset(res,0,16);
	MD5_CTX ctx;
	MD5_Init(&ctx);
	MD5_Update(&ctx,data,4);
	MD5_Update(&ctx,data+4,5);
	MD5_Final(res,&ctx);
	for(int i = 0;i < 16;i++)
	printf("%2.2x",res[i]);
	return 0;
}


