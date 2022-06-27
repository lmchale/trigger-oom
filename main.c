#include <stdlib.h>

int main(int argc, char* argv[]) {
	char *block;
	while (1) {
		size_t bytes=256*4096;
		block = (char*) calloc(1, bytes);
		for (int page = 0; page < 256; ++page) {
			block[page*4096] = page ? '6':'9';
		}
	}
}

