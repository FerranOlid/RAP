#include<utils.h>

void read_header(char* path, struct header* h) {
	int sfile;

	sfile = open(path, O_RDONLY);
	
	// Opening file
	if (if sfile < 0) {
		printf("Error while opening the file %s", path);
		return;
	}

	// Starting to read the header
	// Reading voices first
	if ( (read(sfile, &h.voices, sizeof(int))) < 0  ) {
		printf("Error while reading header");
		return;
	}

	// Reading drums existance
	if ( (read(sfile, &h.drums, sizeof(bool))) < 0  ) {
		printf("Error while reading header");
		return;
	}

	if ( (read(sfile, &h.length, sizeof(int))) < 0  ) {
		printf("Error while reading header");
		return;
	}

	if ( (read(sfile, &h.tempo, sizeof(int))) < 0  ) {
		printf("Error while reading header");
		return;
	}
}

#endif
