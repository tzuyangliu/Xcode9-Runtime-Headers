//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSProgressIndicator;

@interface IDEToyboxTimelineLoadingView : NSView
{
    double _displayDelay;
    NSProgressIndicator *_spinner;
}

@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property double displayDelay; // @synthesize displayDelay=_displayDelay;
- (void).cxx_destruct;
- (void)_showSpinner;
- (void)_viewWillDisappear;
- (void)_viewWillAppear;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)addSpinnerViewToSuperView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

