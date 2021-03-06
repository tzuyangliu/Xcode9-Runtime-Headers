//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTBorderedView.h>

@class NSArray, NSColor;

@interface IDEControlGroup : DVTBorderedView
{
    int _solidBorderSides;
    NSColor *_innerInactiveBorderColor;
}

@property(copy) NSColor *innerInactiveBorderColor; // @synthesize innerInactiveBorderColor=_innerInactiveBorderColor;
@property int solidBorderSides; // @synthesize solidBorderSides=_solidBorderSides;
- (void).cxx_destruct;
- (void)setInactiveBackgroundGradient:(id)arg1;
- (void)setInactiveBackgroundColor:(id)arg1;
- (void)setBackgroundGradient:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderSides:(int)arg1;
- (void)setAllInactiveBordersToColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)controlViewDidResize:(id)arg1;
- (unsigned long long)numberOfControlViews;
@property(readonly) NSArray *controlViews;
- (void)removeControlView:(id)arg1;
- (void)addControlViewLast:(id)arg1;
- (void)addControlViewFirst:(id)arg1;
- (void)_addControlView:(id)arg1 isFirst:(BOOL)arg2;
- (id)_borderedViewForControlView:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)_propagateDrawingPropertiesToSubview:(id)arg1;

@end

