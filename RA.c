#include"utils.h"

// Global variables
struct header H;
int _FILE;			// file to play

void init(char* file) {
	// Opening file
	_FILE = open(i_file, O_RDONLY);
	if (_FILE < 0) {
		printf("Error occurred while opening file %s\n", file);
		return -1;
	}
	// Check if file is RAP format (header?)
}

void doUsage(char* name) {
	printf("USAGE\n");
	printf("%s: <file>\n", name);
	printf("Allows you to listen to the file file");
}

int main(int argc, char* argv[]) {
	// Variable declaration
	char* i_file;

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
				i_file = argv[1];
			}
			break;
		default:
			printf("Usage error, run '%i -h' for help menu display\n", argv[0]);
			return -1;
	}

	if( init(i_file) < 0) return -1;

	// @FIXME Reading file's header (should implement exceptions or check file first)
	read_header(sfile, &H);
}
