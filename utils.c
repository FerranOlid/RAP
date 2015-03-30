#include<utils.h>

void read_header(char* path, struct header* h) {
	int sfile;
	int v, l;
	bool d;

	sfile = open(path, O_RDONLY);
	
	// Opening file
	if (if sfile < 0) {
		printf("Error while opening the file %s", path);
		return;
	}

	// Starting to read the header
	// Reading voices first
	if ( (read(sfile, &v, sizeof(int))) < 0  ) {
		printf("Error while reading header");
		return;
	}

	// Reading drums existance
	if ( (read(sfile, &d, sizeof(bool))) < 0  ) {
		printf("Error while reading header");
		return;
	}

	if ( (read(sfile, &l, sizeof(int))) < 0  ) {
		printf("Error while reading header");
		return;
	}
}

#endif
