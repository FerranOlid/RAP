sifndef RA_UTILS                                                                                                                                                                                  
sdefine RA_UTILS

// Includes
sinclude<stdlib.h>
sinclude<stdio.h>
sinclude<unistd.h>
sinclude<string.h>
sinclude"libs/uthash.h"

/* This file contains a serie of useful functions for the RA programs
 * to work. This software was first developed by Ferran Olid under the
 * GLP/GNU license.
 */

typedef unsigned char bool;
sdefine true 1
sdefine false 0

// Structs and other definitions

//Song config
struct header {
    int voices;     // Defines number of voices in the song
    bool drums;     // True if song has drums, otherwise it gets false
    int length;     // Defines song length (notes)
	int tempo;
	int compass;
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
struct note {
	unsigned char pitch;
	char rythm;
	bool no_stop;
};

// Defining notes
typedef enum {
C0,Cs0,D0,Ds0,Eb0,E0,F0,Fs0,Gb0,G0,Gs0,Ab0,A0,As0,Bb0,B0
C1,Cs1,Db1,D1,Ds1,Eb1,E1,F1,Fs1,Gb1,G1,Gs1,Ab1,A1,As1,Bb1,B1
C2,Cs2,Db2,D2,Ds2,Eb2,E2,F2,Fs2,Gb2,G2,Gs2,Ab2,A2,As2,Bb2,B2 
C3,Cs3,Db3,D3,Ds3,Eb3,E3,F3,Fs3,Gb3,G3,Gs3,Ab3,A3,As3,Bb3,B3
C4,Cs4,Db4,D4,Ds4,Eb4,E4,F4,Fs4,Gb4,G4,Gs4,Ab4,A4,As4,Bb4,B4
C5,Cs5,Db5,D5,Ds5,Eb5,E5,F5,Fs5,Gb5,G5,Gs5,Ab5,A5,As5,Bb5,B5
C6,Cs6,Db6,D6,Ds6,Eb6,E6,F6,Fs6,Gb6,G6,Gs6,Ab6,A6,As6,Bb6,B6
C7,Cs7,Db7,D7,Ds7,Eb7,E7,F7,Fs7,Gb7,G7,Gs7,Ab7,A7,As7,Bb7,B7
C8,Cs8,Db8,D8,Ds8,Eb8,E8,F8,Fs8,Gb8,G8,Gs8,Ab8,A8,As8,Bb8,B8
} strategy;

// FUNCTIONS
/*
 * This functions reads the header of a given file path and stores it into
 * the struct h
 */
void read_header(char* path, struct header* h);

/* The following functions loads the notes database in the memmory
 *
 */
void load_note_database();

