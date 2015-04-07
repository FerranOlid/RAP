#ifndef RA_UTILS
#define RA_UTILS

// Includes
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "libs/uthash.h"		// Hash library
#include "notes.h"				// Notes database

/* This file contains a serie of useful functions for the RA programs
 * to work. This software was first developed by Ferran Olid under the
 * GNU/GLP license.
 */

// Defining bool stuff
typedef unsigned char bool;
#define true 1
#define false 0

#define DEBUG 1

// Structs and other definitions

//typedef enum {1,2,4,8,16,32,64,128} CDown;

/*struct Compass {
	int up;
	CDown down;
};*/

//#define HEADER_LENGTH	69	// Useful in a near future while reading header (buffer idea)

//Song config
struct Header {
    int voices;     		// Defines number of voices in the song
    bool drums;     		// True if song has drums, otherwise it gets false
    int length;     		// Defines song length (notes)
	int tempo;				// Song initial tempo
	//struct Compass compass;	// Song initial compass
}:

/* This defines a note. A note has a pitch and a rythm.
 * Pitch varies from 0 to 88 (if I'm not wrong). The rythm
 * depends on the tempo in the header. black is 0, from there
 * on, they are whites, rounds... etc. This way, negative
 * values implies less duration of the note.
 *
 * Maybe we should reserve some special values for tempo and
 * compass changing. Also it would be good to have dots and other
 * interesting musical notations.
 *
 * The no-stop boolean is used in order not to produce a little stop
 * between every played note (so they can sound more chained).
 * The facilitie to add a custom wait time between notes would be cool
 */
struct Note {
	unsigned char pitch;
	char rythm;
	bool no_stop;
};

// FUNCTIONS
/*
 * This functions reads the header of a given file path and stores it into
 * the struct h
 */
void read_header(char* path, struct header* h);
