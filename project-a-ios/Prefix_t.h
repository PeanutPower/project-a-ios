/*
Project A
A dungeon crawler by Mike Bell

This file is part of Project A.
 
Project A is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Project A is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied
warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/
//  Prefix_t.h
//  project-a-ios
//
//  Created by Mike Bell on 4/2/13.


/*
 Prefixes are how we can modify entity statistics.
 
 For instance, a Short Sword +1 deals 1d6+1 damage.
 A Fire Short Sword deals 1d6 dmg + 1d4 fire dmg.
 A Flaming Short Sword deals 1d6 dmg + 1d6 fire dmg.
 etc etc.
 A normal goblin might have 8 str.
 A Mighty goblin might have 8 + 2 str.
 Floating Boots might allow you to cross water untouched.
 
 etc...
 
 These values will exist in the entity spec as an NSArray.
 
 The check for these values will occur...lazily? IDK yet (4/2/2013)
 
(10/27/13) changed to a simple enum for now

 */

typedef enum {
    PREFIX_T_NONE=0,
    PREFIX_T_FIRE,
    PREFIX_T_WATER,
    PREFIX_T_EARTH,
    PREFIX_T_ICE,
    PREFIX_T_LIGHTNING,
    PREFIX_T_WEAK,

    PREFIX_T_NUMTYPES
} Prefix_t;



/*
#define NUM_PREFIXES 3

#define PREFIX(n) (\
n==0 ? @""     : \
n==1 ? @"Fire" : \
n==2 ? @"Ice"  : \
@"Unknown")

#define RANDOM_PREFIX ( PREFIX( arc4random_uniform( NUM_PREFIXES )))

#import "GameConfig.h"

@interface Prefix_t : NSObject {
    NSString *name;
    
    // we need a way to describe the effect that the
    // prefix has on the entity
    
    Effect_t *effect;
}

+(Prefix_t *) effectWithName: (NSString *) _name ;
+(Prefix_t *) randomPrefix;

+(void) setPrefixEffect: (Prefix_t *) prefix;
+(Prefix_t *) noPrefix;

@property (atomic) NSString *name;
@property (atomic) Effect_t *effect;

@end

*/







