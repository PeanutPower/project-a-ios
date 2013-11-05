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
//  DungeonTreeNode.m
//  project-a-ios
//
//  Created by Mike Bell on 2/22/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.

#import "DungeonTreeNode.h"

@implementation DungeonTreeNode

@synthesize floor;
@synthesize nodeArray;

-( id ) init {
    if ( self = [ super init ] ) {
        floor = nil;
        nodeArray = nil;
    }
    return self;
}

-( void ) dealloc {
    // [ super dealloc ];
}

@end
