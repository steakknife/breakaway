/*
 * AIVLCPlugin.h
 * Breakaway
 * Created by Kevin Nygaard on 7/22/08.
 * Copyright 2008 Kevin Nygaard.
 *
 * This file is part of Breakaway.
 *
 * Breakaway is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Breakaway is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Breakaway.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <Cocoa/Cocoa.h>
#import "AIPluginProtocol.h"
#import "AIPluginControllerProtocol.h"

@interface AIVLCPlugin : NSObject<AIPluginControllerProtocol, AIPluginProtocol>
{
    IBOutlet id preferences;
	NSArrayController* arrayController;
	
	BOOL enabled;
	BOOL isPlaying;
	BOOL appHit;
	
	NSMutableString* currentStringValue;
	NSMutableArray* instancesArray;
}

- (void)playMusic;
- (void)pauseMusic;
- (BOOL)isPlaying;
- (void)setSystemVolume:(int)newVolume;
- (int)currentSystemVolume;
@end
