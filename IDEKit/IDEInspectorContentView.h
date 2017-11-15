//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEInspectorLayoutGroup, NSString;

@interface IDEInspectorContentView : DVTLayoutView_ML <DVTInvalidation>
{
    BOOL _drawBackground;
    IDEInspectorLayoutGroup *_layoutStack;
}

+ (void)initialize;
@property(nonatomic) BOOL drawBackground; // @synthesize drawBackground=_drawBackground;
@property(readonly, nonatomic) IDEInspectorLayoutGroup *layoutStack; // @synthesize layoutStack=_layoutStack;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSectionBordersInRect:(struct CGRect)arg1;
- (void)drawSectionBackgroundsInRect:(struct CGRect)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)enumeratePropertiesInLayoutGroup:(id)arg1 outStop:(char *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)visualElementDidTriggerRefresh:(id)arg1;
- (void)didUninstallLayoutGroup:(id)arg1;
- (void)didInstallLayoutGroup:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (BOOL)isFlipped;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1 layoutStack:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

