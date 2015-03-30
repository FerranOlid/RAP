#ifndef RAP_NOTES
#define RAP_NOTES

/* This file contains the notes frequency to use in the program
 */

 float NOTES [] =
 {
 	16.35,17.32,18.35,19.45,20.60,21.83,23.12,24.50,25.96,27.50,29.14,30.87,
	32.70,34.65,36.71,38.89,41.20,43.65,46.25,49.00,51.91,55.00,58.27,61.74,
	65.41,69.30,73.42,77.78,82.41,87.31,92.50,98.00,103.83,110.00,116.54,123.47,
	130.81,138.59,146.83,155.56,164.81,174.61,185.00,196.00,207.65,220.00,233.08,246.94,
	261.63,277.18,293.66,311.13,329.63,349.23,369.99,392.00,415.30,440.00,466.16,493.88,
	523.25,554.37,587.33,622.25,659.25,698.46,739.99,783.99,830.61,880.00,932.33,987.77,
	1046.50,1108.73,1174.66,1244.51,1318.51,1396.91,1479.98,1567.98,1661.22,1760.00,1864.66,1975.53,
	2093.00,2217.46,2349.32,2489.02,2637.02,2793.83,2959.96,3135.96,3322.44,3520.00,3729.31,3951.07,
	4186.01,4434.92,4698.63,4978.03,5274.04,5587.65,5919.91,6271.93,6644.88,7040.00,7458.62,7902.13,
	0.0f
};

#define C0		0
#define Cs0		1
#define Db0		1
#define D0		2
#define Ds0		3
#define Eb0		3
#define E0		4
#define F0		5
#define Fs0		6
#define Gb0		6
#define G0		7
#define Gs0		8
#define Ab0		8
#define A0		9
#define As0		10
#define Bb0		10
#define B0		11
#define C1		12
#define Cs1		13
#define Db1		13
#define D1		14
#define Ds1		15
#define Eb1		15
#define E1		16
#define F1		17
#define Fs1		18
#define Gb1		18
#define G1		19
#define Gs1		20
#define Ab1		20
#define A1		21
#define As1		22
#define Bb1		22
#define B1		23
#define C2		24
#define Cs2		25
#define Db2		25
#define D2		26
#define Ds2		27
#define Eb2		27
#define E2		28
#define F2		29
#define Fs2		30
#define Gb2		30
#define G2		31
#define Gs2		32
#define Ab2		32
#define A2		33
#define As2		34
#define Bb2		34
#define B2		35
#define C3		36
#define Cs3		37
#define Db3		37
#define D3		38
#define Ds3		39
#define Eb3		39
#define E3		40
#define F3		41
#define Fs3		42
#define Gb3		42
#define G3		43
#define Gs3		44
#define Ab3		44
#define A3		45
#define As3		46
#define Bb3		46
#define B3		47
#define C4		48
#define Cs4		49
#define Db4		49
#define D4		50
#define Ds4		51
#define Eb4		51
#define E4		52
#define F4		53
#define Fs4		54
#define Gb4		54
#define G4		55
#define Gs4		56
#define Ab4		56
#define A4		57
#define As4		58
#define Bb4		58
#define B4		59
#define C5		60
#define Cs5		61
#define Db5		61
#define D5		62
#define Ds5		63
#define Eb5		63
#define E5		64
#define F5		65
#define Fs5		66
#define Gb5		66
#define G5		67
#define Gs5		68
#define Ab5		68
#define A5		69
#define As5		70
#define Bb5		70
#define B5		71
#define C6		72
#define Cs6		73
#define Db6		73
#define D6		74
#define Ds6		75
#define Eb6		75
#define E6		76
#define F6		77
#define Fs6		78
#define Gb6		78
#define G6		79
#define Gs6		80
#define Ab6		80
#define A6		81
#define As6		82
#define Bb6		82
#define B6		83
#define C7		84
#define Cs7		85
#define Db7		85
#define D7		86
#define Ds7		87
#define Eb7		87
#define E7		88
#define F7		89
#define Fs7		90
#define Gb7		90
#define G7		91
#define Gs7		92
#define Ab7		92
#define A7		93
#define As7		94
#define Bb7		94
#define B7		95
#define C8		96
#define Cs8		97
#define Db8		97
#define D8		98
#define Ds8		99
#define Eb8		99
#define E8		100
#define F8		101
#define Fs8		102
#define Gb8		102
#define G8		103
#define Gs8		104
#define Ab8		104
#define A8		105
#define As8		106
#define Bb8		106
#define B8		107


/*typedef enum {
C0,Cs0,Db0,D0,Ds0,Eb0,E0,F0,Fs0,Gb0,G0,Gs0,Ab0,A0,As0,Bb0,B0
C1,Cs1,Db1,D1,Ds1,Eb1,E1,F1,Fs1,Gb1,G1,Gs1,Ab1,A1,As1,Bb1,B1
C2,Cs2,Db2,D2,Ds2,Eb2,E2,F2,Fs2,Gb2,G2,Gs2,Ab2,A2,As2,Bb2,B2
C3,Cs3,Db3,D3,Ds3,Eb3,E3,F3,Fs3,Gb3,G3,Gs3,Ab3,A3,As3,Bb3,B3
C4,Cs4,Db4,D4,Ds4,Eb4,E4,F4,Fs4,Gb4,G4,Gs4,Ab4,A4,As4,Bb4,B4
C5,Cs5,Db5,D5,Ds5,Eb5,E5,F5,Fs5,Gb5,G5,Gs5,Ab5,A5,As5,Bb5,B5
C6,Cs6,Db6,D6,Ds6,Eb6,E6,F6,Fs6,Gb6,G6,Gs6,Ab6,A6,As6,Bb6,B6
C7,Cs7,Db7,D7,Ds7,Eb7,E7,F7,Fs7,Gb7,G7,Gs7,Ab7,A7,As7,Bb7,B7
C8,Cs8,Db8,D8,Ds8,Eb8,E8,F8,Fs8,Gb8,G8,Gs8,Ab8,A8,As8,Bb8,B8
M
} Tone; */

#endif
