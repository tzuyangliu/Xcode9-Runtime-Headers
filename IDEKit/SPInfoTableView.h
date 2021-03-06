//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class NSTrackingArea;

@interface SPInfoTableView : NSTableView
{
    NSTrackingArea *_trackingArea;
}

@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
- (void).cxx_destruct;
- (void)setMouseInRowUsingMouseLocation:(struct CGPoint)arg1;
- (void)clipViewBoundsDidChange:(id)arg1;
- (void)debouncedClipViewBoundsDidChange:(id)arg1;
- (void)willOpenMenu:(id)arg1 withEvent:(id)arg2;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)updateTrackingAreas;
- (void)keyDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)dealloc;

@end

