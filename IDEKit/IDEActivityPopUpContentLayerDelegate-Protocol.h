//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/CALayerDelegate-Protocol.h>

@class IDEActivityPopUpContentLayer;

@protocol IDEActivityPopUpContentLayerDelegate <CALayerDelegate>

@optional
- (void)popUpContentLayer:(IDEActivityPopUpContentLayer *)arg1 didChangePreferredHeightTo:(double)arg2;
- (void)doneButtonWasClickedInPopUpContentLayer:(IDEActivityPopUpContentLayer *)arg1;
@end

