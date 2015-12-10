#include "ujdecode.c"
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>

// Gets the byte size of a file
int file_byte_size(char* path)
{
	int f = open(path, O_RDONLY);
	if(f == -1)
		return -1;
	struct stat s;
	int ln = 0;
	if(!fstat(f, &s))
		ln = s.st_size;
	close(f);
	return ln;
}

int main(int argc, char** argv)
{
	if(argc == 1) {
		printf("Usage: ./c_parser file\n");
		exit(1);
	}

	int fl_sz = file_byte_size(argv[1]);
	char* input = malloc(fl_sz);

	FILE* ifl = fopen(argv[1], "r");
	if(ifl == NULL) {
		printf("Error: cannot read file %s, are you sure permissions are set correctly ?\n", argv[1]);
		exit(2);
	}
	int rd = fread(input, 1, fl_sz, ifl);
	assert(rd == fl_sz);

	void *state;

	UJObject obj = UJDecode(input, fl_sz, NULL, &state);

	free(input);
	UJFree(state);
}
