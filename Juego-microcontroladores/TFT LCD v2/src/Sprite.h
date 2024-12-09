#ifndef Sprite_h
#define Sprite_h

#include <avr/pgmspace.h>

const unsigned char Player[2] [128] PROGMEM = {

	// 'Player 1a (32x32), 32x32px

{	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xe0, 0x03, 0x80, 0x01, 0xf0, 0x07, 0xc0, 0x01, 0xf0, 0x03, 0xc0, 0x01, 0xff, 0xff, 0xc0, 
	0x03, 0xf0, 0x00, 0xe0, 0x03, 0xef, 0xff, 0x60, 0x03, 0xdf, 0xf1, 0xa0, 0x03, 0xd8, 0x2e, 0xa0, 
	0x03, 0xdb, 0xae, 0xa0, 0x03, 0xdb, 0xae, 0xa0, 0x03, 0xdc, 0x71, 0xa0, 0x03, 0xef, 0xff, 0x60, 
	0x03, 0xf0, 0x00, 0xe0, 0x01, 0xff, 0xff, 0xc0, 0x00, 0xff, 0xff, 0x80, 0x00, 0x3f, 0xfe, 0x00, 
	0x01, 0xff, 0xff, 0x40, 0x02, 0x5f, 0xff, 0x20, 0x03, 0xbf, 0xff, 0x60, 0x00, 0x7f, 0xff, 0x00, 
	0x00, 0x7c, 0x07, 0x00, 0x00, 0x3c, 0x0f, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00
}, 
	// 'Player 1b (32x32), 32x32px

{	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xe0, 0x03, 0x80, 0x01, 0xf0, 0x07, 0xc0, 0x01, 0xf0, 0x03, 0xc0, 0x01, 0xff, 0xff, 0xc0, 
	0x03, 0xf0, 0x00, 0xe0, 0x03, 0xef, 0xff, 0x60, 0x03, 0xdf, 0xf1, 0xa0, 0x03, 0xd8, 0x2e, 0xa0, 
	0x03, 0xdb, 0xae, 0xa0, 0x03, 0xdb, 0xae, 0xa0, 0x03, 0xdc, 0x71, 0xa0, 0x03, 0xef, 0xff, 0x60, 
	0x03, 0xf0, 0x00, 0xe0, 0x01, 0xff, 0xff, 0xc0, 0x00, 0xff, 0xff, 0x80, 0x00, 0x3f, 0xfe, 0x00, 
	0x01, 0xff, 0xff, 0x40, 0x02, 0x5f, 0xff, 0x20, 0x03, 0xbf, 0xff, 0x60, 0x00, 0x7f, 0xff, 0x00, 
	0x00, 0x78, 0x07, 0x00, 0x00, 0x78, 0x0f, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
}
};

const uint8_t enemyBitmap[128] PROGMEM = {
	// 'download (4), 32x32px
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xfe, 0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0x3f, 0xfc, 0x7f, 0xf7, 0x3f, 0xfc, 0x3f, 0xf7, 0x1f, 
	0xf8, 0x3f, 0xf6, 0x1f, 0xf8, 0x1f, 0x06, 0x1f, 0xf8, 0x0e, 0x06, 0x0f, 0xf0, 0x00, 0x00, 0x0f, 
	0xf0, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x0f, 0xf0, 0x80, 0x10, 0x4f, 0xf0, 0x80, 0x00, 0xcf, 
	0xf4, 0xc0, 0x01, 0xef, 0xf7, 0xe0, 0x00, 0xef, 0xf7, 0xe0, 0x00, 0x7f, 0xf7, 0xe0, 0x20, 0x7f, 
	0xf7, 0xf0, 0x00, 0x7f, 0xf7, 0xf0, 0x00, 0x7f, 0xff, 0xf8, 0x11, 0xff, 0xff, 0xec, 0x01, 0xff, 
	0xff, 0xee, 0x07, 0xff, 0xff, 0xee, 0xff, 0xff, 0xff, 0xfd, 0xf7, 0xff, 0xff, 0xfd, 0xff, 0xff, 
	0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

#endif