//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTMessageBubbleAnnotation.h>

@class NSPopover;

@interface IDETestIssueErrorAnnotation : DVTMessageBubbleAnnotation
{
    NSPopover *_iterationPopover;
}

+ (unsigned long long)scrollbarMarkerType;
+ (id)editedTheme;
+ (id)focusedTheme;
+ (id)normalTheme;
+ (id)sidebarIcon;
+ (unsigned long long)severity;
+ (double)precedence;
- (void).cxx_destruct;
- (void)didClickInTextSidebarView:(id)arg1 event:(id)arg2;
- (void)didClickMessageBubbleOnIcon:(BOOL)arg1 inView:(id)arg2 event:(id)arg3;
- (void)_didClickInView:(id)arg1 event:(id)arg2;
- (id)annotationMenuForPerformanceMetricsFromPreviousRun:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)contextMenu_revealInReport:(id)arg1;
- (void)contextMenu_acceptPreviousAverage:(id)arg1;
- (void)contextMenu_acceptPreviousAverageForAllMetrics:(id)arg1;
- (void)contextMenu_performSelector:(SEL)arg1 sender:(id)arg2;
- (void)updateBaselineForPerformanceMetricWithIdentifier:(id)arg1 average:(id)arg2 maxStandardDeviation:(id)arg3;
- (void)asyncApplyBaselineRecord:(id)arg1;
- (id)runDestinationRecord;
- (void)setMessageBubbleText:(id)arg1;
- (id)performanceMetrics;
- (id)test;
- (id)annotationDisplayDescription;
- (id)annotationDisplayName;
- (id)init;

@end

