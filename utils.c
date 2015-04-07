#include<utils.h>

void error_handler(char* message) {
	printf("[RAP_ERROR]: %s: %s", message, strerror(errno));
}


/* Should not use file path but file descriptor instead. However this may produce
 * some problems with the original lseek... <-- look for info @FIXME
 * 								\
 * 								 \---> If it is moved normally, this is good
 */
void read_header(char* path, struct header* h) {
	/*
	 *IDEA Llegir tot el header de cop a un buffer i després "llegir" aquest buffer
	 *		per evitar 13859843 lectures de disc
	 */

	int sfile;
	char rap_id[8];

	sfile = open(path, O_RDONLY);
	
	// Opening file
	if (if sfile < 0) {
		printf("Error while opening the file %s", path);
		return;
	}

	// Starting to read the header	
	// Checking if file is a RAP file
	if ( read(sfile, rap_id, 8) < 0 ) {
		error_handler("Error while reading header");
	}
	if (rap_id != "imarapyo") {
		errno = 15; 											// Setting errno to 'Unknown Error'		@XXX
		error_handler("This does not look like a RAP file");
	}

	// Reading voices first
	if ( (read(sfile, &h.voices, sizeof(int))) < 0  ) {
		error_handler("Error while reading header");
		return;
	}

	// Reading drums existance
	if ( (read(sfile, &h.drums, sizeof(bool))) < 0  ) {
		error_handler("Error while reading header");
		return;
	}
	
	// Reading song length
	if ( (read(sfile, &h.length, sizeof(int))) < 0  ) {
		error_handler("Error while reading header");
		return;
	}

	// Reading tempo
	if ( (read(sfile, &h.tempo, sizeof(int))) < 0  ) {
		error_handler("Error while reading header");
		return;
	}

	// Header succesfuly readed
}

#endif
