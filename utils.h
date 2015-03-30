#ifndef RA_UTILS                                                                                                                                                                                  
#define RA_UTILS

// Includes
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>

/* This file contains a serie of useful functions for the RA programs
 * to work. This software was first developed by Ferran Olid under the
 * GLP/GNU license.
 */

// Structs and other definitions
struct header {
    int voices;     // Defines number of voices in the song
    bool drums;     // True if song has drums, otherwise it gets false
    int length;     // Defines song length (notes)
}:

// #define bool = unsigned byte;  <-- La sintaxi era aixi...?

/*
 * This functions reads the header of a given file path and stores it into
 * the struct h
 */
void read_header(char* path, struct header* h);

