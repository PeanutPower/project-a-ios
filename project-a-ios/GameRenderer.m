//  GameRenderer.m
//  project-a-ios
//
//  Created by Mike Bell on 2/10/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.


#import "CCMutableTexture2D.h"
#import "cocos2d.h"
#import "GameConfig.h"
#import "GameRenderer.h"
#import "Tile.h"

@implementation GameRenderer

/*
 ====================
 colorScrambleTile
 ====================
 */
+( void ) colorScrambleTile: ( CCSprite * ) tileSprite {
    CCMutableTexture2D *tileTex = ( CCMutableTexture2D * ) tileSprite.texture;
    srand( time( NULL ) );
    for ( int i = 0; i < TILE_SIZE; i++ ) {
        for ( int j = 0; j < TILE_SIZE; j++ ) {
            //Color_t randomColor = random_color;
            //[ tileTex setPixelAt: ccp( i, j ) rgba: randomColor ];
        }
        [ tileTex fill: random_color ];
    }
    [ tileTex apply ];
}


/*
 ====================
 colorScrambleAllTiles
 ====================
 */
+( void ) colorScrambleAllTiles: ( NSArray * ) tileArray {
    for ( int i = 0; i < [ tileArray count ]; i++ ) {
        CCSprite *tileSprite = [ tileArray objectAtIndex: i ];
        [ GameRenderer colorScrambleTile: tileSprite ];
    }
}


/*
 ====================
 setTile
 ====================
 */
+( void ) setTile: ( CCSprite * ) tileSprite withData: ( Tile * ) data {
    Tile_t tileType = data->tileType;
    
    Color_t color =
    (tileType==TILE_VOID) ?  black :
    (tileType==TILE_FLOOR_GRASS) ? green :
    (tileType==TILE_FLOOR_STONE) ? gray :
    blue ;
    
    
    if (  data->isSelected ) {
        Color_t tmpColor = newColor( color.r + 0xAA , color.g + 0xAA , color.b + 0x00, color.a );
        color = tmpColor;
    }
    
    
    CCMutableTexture2D *texture = ( CCMutableTexture2D * ) tileSprite.texture;
    [ texture fill: color ];
    
    [ texture apply ];
}


/*
 ====================
 setAllTiles: withData
 ====================
 */
+( void ) setAllTiles: ( NSArray * ) tileArray withData: ( NSArray * ) data {
    for ( int i = 0; i < [tileArray count]; i++ ) {
        CCSprite *sprite = [ tileArray objectAtIndex: i ];
        [ GameRenderer setTile: sprite withData: [ data objectAtIndex: i ] ];
    }
}


/*
 ====================
 setTileArrayBoundary: tileArray toTileType: tileType withLevel: level
 ====================
 */
//+( void ) setTileArrayBoundary: ( NSMutableArray * ) tileArray toTileType: ( Tile_t ) tileType withLevel: ( NSInteger ) level {
+( void ) setTileArrayBoundary: ( NSArray * ) tileArray toTileType: ( Tile_t ) tileType withLevel: ( NSInteger ) level {

    Tile *tile = nil;
    // can set up to 5 levels
    NSAssert( level >= 0 && level <= 5 , @"Level should be >=0 || <= 5" );
    //int level = 6;
    for ( int j = level-1; j < NUMBER_OF_TILES_ONSCREEN_Y-(level-1); j++ ) {
        for ( int i = level-1; i < NUMBER_OF_TILES_ONSCREEN_X-(level-1); i++ ) {
            if ( (i == level-1 || i == NUMBER_OF_TILES_ONSCREEN_X-level) ) {
                tile = [ tileArray objectAtIndex: i + (j * NUMBER_OF_TILES_ONSCREEN_X) ];
                tile->tileType = tileType;
            }
            if ( j == level-1 || j == NUMBER_OF_TILES_ONSCREEN_Y-level ) {
                tile = [ tileArray objectAtIndex: i + (j * NUMBER_OF_TILES_ONSCREEN_X) ];
                tile->tileType = tileType;
            }
        }
    }
}



/*
 ====================
 setAllTiles: tileArray toTileType: tileType
 ====================
 */
//+( void ) setAllTiles: ( NSMutableArray * ) tileArray toTileType: ( Tile_t ) tileType {
+( void ) setAllTiles: ( NSArray * ) tileArray toTileType: ( Tile_t ) tileType {

    for ( Tile * tile in tileArray ) {
        tile->tileType = tileType;
    }
}

@end