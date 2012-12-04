/*
 * Sizeof_Test.cpp
 *
 *  Created on: Dec 4, 2012
 *      Author: chenyu
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
int Sizeof_Test() {
	char* mbuf = (char*) malloc(100);
	char buf[10];
	printf("sizeof(mbuf):%d\n", sizeof(mbuf));
	printf("sizeof mbuf :%d\n", sizeof mbuf);
	printf("sizeof(*mbuf):%d\n", sizeof(mbuf));
	printf("sizeof *mbuf :%d\n", sizeof mbuf);
	printf("sizeof *mbuf :%d\n", malloc_usable_size(mbuf));

	printf("sizeof(buf):%d\n", sizeof(buf));
	printf("sizeof buf :%d\n", sizeof buf);
	printf("sizeof(*buf):%d\n", sizeof(buf));
	printf("sizeof *buf :%d\n", sizeof buf);
	printf("sizeof *buf :%d\n", malloc_usable_size(buf));
	free(mbuf);
	return 0;
}

