//  Colors.h
//  project-a-macosx
//
//  Created by Mike Bell on 1/31/13.

#ifndef project_a_macosx_Colors_h
#define project_a_macosx_Colors_h


#import "cocos2d.h"

#define CC4B_BLACK_ALPHA(a)  ccc4( 0x00, 0x00, 0x00, a )
#define CC4B_WHITE_ALPHA(a)  ccc4( 0xFF, 0xFF, 0xFF, a )
#define CC4B_GRAY_ALPHA(a)  ccc4( 0xCC, 0xCC, 0xCC, a )
#define CC4B_DARKGRAY_ALPHA(a) ccc4( 0x55, 0x55, 0x55, a )


#define CC4B_RED_ALPHA(a)    ccc4( 0xFF, 0x00, 0x00, a )
#define CC4B_GREEN_ALPHA(a)  ccc4( 0x00, 0xFF, 0x00, a )
#define CC4B_BLUE_ALPHA(a)   ccc4( 0x00, 0x00, 0xFF, a )

#define CC4B_YELLOW_ALPHA(a)  ccc4( 0xff, 0xff, 0x00, a )
#define CC4B_CYAN_ALPHA(a)    ccc4( 0x00, 0xff, 0xff, a )
#define CC4B_PURPLE_ALPHA(a)  ccc4( 0xff, 0x00, 0xff, a )

#define CC4B_BROWN_ALPHA(a) ccc4(0xa5, 0x2a, 0x2a, a)
#define CC4B_BROWN      CC4B_BROWN_ALPHA(255)

#define CC4B_LIGHTBLUE_ALPHA(a) ccc4(0xad, 0xdf, 0xff, a)
#define CC4B_LIGHTBLUE CC4B_LIGHTBLUE_ALPHA( 255 )



#define CC4B_ORANGE0    ccc4( 255, 165, 0, 255 )
#define CC4B_ORANGE1    ccc4( 238, 154, 0, 255 )
#define CC4B_ORANGE2    ccc4( 205, 133, 0, 255 )
#define CC4B_ORANGE3    ccc4( 139,  90, 0, 255 )



#define CC4B_SKIN0  ccc4( 255, 220, 177, 255 )
#define CC4B_SKIN1  ccc4( 229, 194, 152, 255 )
#define CC4B_SKIN2  ccc4( 228, 185, 142, 255 )
#define CC4B_SKIN3  ccc4( 226, 185, 143, 255 )
#define CC4B_SKIN4  ccc4( 227, 161, 115, 255 )




#define CC4B_RANDOM_ALPHA(a) ccc4( random() % 255, random() % 255, random() % 255, a )


#define CC4B_BLACK           CC4B_BLACK_ALPHA( 0xFF )
#define CC4B_WHITE           CC4B_WHITE_ALPHA( 0xFF )
#define CC4B_GRAY            CC4B_GRAY_ALPHA( 0xFF )
#define CC4B_DARKGRAY        CC4B_DARKGRAY_ALPHA( 0xFF )

#define CC4B_RED             CC4B_RED_ALPHA( 0xFF )
#define CC4B_GREEN           CC4B_GREEN_ALPHA( 0xFF )
#define CC4B_BLUE            CC4B_BLUE_ALPHA( 0xFF )

#define CC4B_YELLOW CC4B_YELLOW_ALPHA(0xff)
#define CC4B_CYAN   CC4B_CYAN_ALPHA(0xff)
#define CC4B_PURPLE CC4B_PURPLE_ALPHA(0xff)  



#define CC4B_RANDOM          CC4B_RANDOM_ALPHA( 0xFF )

/* ==================== */
/* ==================== */
/* ==================== */


#define CC3B_WHITE          ccc3( 0xff, 0xff, 0xff )
#define CC3B_BLACK          ccc3( 0x00, 0x00, 0x00 )

#define CC3B_RED            ccc3( 0xff, 0x00, 0x00 )
#define CC3B_GREEN          ccc3( 0x00, 0xff, 0x00 )
#define CC3B_BLUE           ccc3( 0x00, 0x00, 0xff )

#define CC3B_YELLOW         ccc3( 0xff, 0xff, 0x00 )
#define CC3B_CYAN           ccc3( 0x00, 0xff, 0xff )
#define CC3B_PURPLE         ccc3( 0xff, 0x00, 0xff )

#define CC3B_RANDOM         ccc3( random() % 255, random() % 255, random() % 255 )

#define white3              CC3B_WHITE
#define black3              CC3B_BLACK
#define red3                CC3B_RED
#define green3              CC3B_GREEN
#define blue3               CC3B_BLUE
#define yellow3             CC3B_YELLOW
#define cyan3               CC3B_CYAN
#define purple3             CC3B_PURPLE

#define random_color3        CC3B_RANDOM


/* ==================== */
/* ==================== */
/* ==================== */

#define clear       ccc4(0,0,0,0)


#define black       CC4B_BLACK
#define white       CC4B_WHITE
#define gray        CC4B_GRAY
#define darkgray    CC4B_DARKGRAY

#define red    CC4B_RED
#define green  CC4B_GREEN
#define blue   CC4B_BLUE

#define yellow CC4B_YELLOW
#define cyan   CC4B_CYAN
#define purple CC4B_PURPLE

#define brown CC4B_BROWN

#define lightblue CC4B_LIGHTBLUE

#define random_color4 CC4B_RANDOM
#define random_color  random_color4

#define black_alpha(a) CC4B_BLACK_ALPHA(a)

#define gray_alpha(a) CC4B_GRAY_ALPHA(a)
#define darkgray_alpha(a) CC4B_DARKGRAY_ALPHA(a)

#define red_alpha(a)   CC4B_RED_ALPHA(a)
#define green_alpha(a) CC4B_GREEN_ALPHA(a)
#define blue_alpha(a)  CC4B_BLUE_ALPHA(a)

#define brown_alpha(a) CC4B_BROWN_ALPHA(a)

#define random_alpha(a) CC4B_RANDOM_ALPHA(a)



#define orange0 CC4B_ORANGE0
#define orange1 CC4B_ORANGE1
#define orange2 CC4B_ORANGE2
#define orange3 CC4B_ORANGE3

#define orange orange0



#define skincolor0  CC4B_SKIN0
#define skincolor1  CC4B_SKIN1
#define skincolor2  CC4B_SKIN2
#define skincolor3  CC4B_SKIN3
#define skincolor4  CC4B_SKIN4

#define skincolor(n) (n==0 ? skincolor0 : \
n==1 ? skincolor1 : \
n==2 ? skincolor2 : \
n==3 ? skincolor3 : \
skincolor4 )


#define newColor(r,g,b,a) ccc4(r,g,b,a)
#define newColor3(r,g,b) ccc3(r,g,b)


typedef ccColor4B Color4_t;
typedef ccColor3B Color3_t;

typedef Color4_t Color_t;

#endif
