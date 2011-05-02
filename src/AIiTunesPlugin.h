//
//  AIiTunesPlugin.h
//  Breakaway
//
//  Created by Kevin Nygaard on 4/30/11.
//  Copyright 2011 MutableCode. All rights reserved.
//

#ifndef __AIITUNESPLUGIN_H__
#define __AIITUNESPLUGIN_H__

#import <Cocoa/Cocoa.h>
#import "AIPluginProtocol.h"

@class iTunesApplication;
@class AppController;


@interface AIiTunesPlugin : NSObject<AIPluginProtocol> {

    BOOL enabled;

    BOOL inFadeIn;
    BOOL isPlaying;
    BOOL isActive;

    BOOL hpMode;

    iTunesApplication *iTunes;
	AppController *appController;

}
@property (assign) BOOL enabled;

- (void)loadObservers;
- (void)removeObservers;
- (void)songChanged:(NSNotification *)aNotification ;
- (BOOL)iTunesActive;
- (BOOL)iTunesPlaying;
- (void)iTunesPlayPause;
- (void)fadeInUsingTimer:(NSTimer*)timer;
- (void)iTunesThreadedFadeIn;


@end

#endif /* __AIITUNESPLUGIN_H__ */

