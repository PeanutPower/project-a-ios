//  Dice.h
//  project-a-ios
//
//  Created by Mike Bell on 2/15/13.

#define ROLL_DICE_ONCE(sides)   ((random() % sides) + 1 )

long int rollDiceOnce( int sides );
long int rollDiceOnceWithModifier( int sides, int modifier );
long int rollDice( int sides, int times );
long int rollDiceWithModifier( int sides, int modifier, int times );