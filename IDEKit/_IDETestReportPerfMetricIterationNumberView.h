//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTrackingArea;

@interface _IDETestReportPerfMetricIterationNumberView : NSView
{
    NSTrackingArea *_trackingArea;
    BOOL _selected;
    unsigned long long _iterationNumber;
    CDUnknownBlockType _numberClickedCallback;
}

@property(copy) CDUnknownBlockType numberClickedCallback; // @synthesize numberClickedCallback=_numberClickedCallback;
@property unsigned long long iterationNumber; // @synthesize iterationNumber=_iterationNumber;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)drawRect:(struct CGRect)arg1;
- (void)select;
- (void)deselect;

@end

