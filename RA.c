#include"utils.h"

struct header H;

int main(int argc, char* argv[]) {
	// Variable declaration
	char* sfile;

	// First thing is checking the arguments
	switch(argc) {
		case 3:
			// This case is weird
			break;
		case 2:
			// This is normal usage
			if (argv[1] == "-h") doUsage();			// Printing usage
			else {
				// Might be a file
				sfile = argv[1];
			}
			break;
		default:
			printf("Usage error, run '%i -h' for help menu display\n", argv[0]);
			return -1;
	}

	// @FIXME Reading file's header (should implement exceptions or check file first)
	read_header(sfile, &H);
}
