//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _IDEWindowFullScreenSavedDebuggerTransitionValues : NSObject
{
    BOOL _valid;
    BOOL _shouldReturnToFullScreen;
    int _oldState;
    int _newState;
}

@property int newState; // @synthesize newState=_newState;
@property int oldState; // @synthesize oldState=_oldState;
@property BOOL shouldReturnToFullScreen; // @synthesize shouldReturnToFullScreen=_shouldReturnToFullScreen;
@property BOOL valid; // @synthesize valid=_valid;
- (void)_recordReturnToFullScreen:(BOOL)arg1 oldState:(int)arg2 newState:(int)arg3;
- (id)description;

@end

