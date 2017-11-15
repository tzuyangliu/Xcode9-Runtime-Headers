//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDETestReportViewController, NSArray, NSString, NSTableRowView, NSTrackingArea, _IDETestReportActivities_AttachmentView;
@protocol IDETestReport_TestActivity;

@interface _IDETestReportActivities_TableCellView : NSTableCellView
{
    NSTrackingArea *_myTracker;
    BOOL _containsFailure;
    BOOL _containsCrash;
    BOOL _containsMemoryGraph;
    BOOL _selected;
    id _assertion;
    NSString *_activityString;
    NSString *_durationString;
    _IDETestReportActivities_AttachmentView *_customPopUpView;
    NSTableRowView *_rowView;
    NSArray *_attachments;
    IDETestReportViewController *_reportViewController;
    id <IDETestReport_TestActivity> _activity;
}

@property(nonatomic) __weak id <IDETestReport_TestActivity> activity; // @synthesize activity=_activity;
@property(nonatomic) __weak IDETestReportViewController *reportViewController; // @synthesize reportViewController=_reportViewController;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(nonatomic) __weak NSTableRowView *rowView; // @synthesize rowView=_rowView;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL containsMemoryGraph; // @synthesize containsMemoryGraph=_containsMemoryGraph;
@property(nonatomic) BOOL containsCrash; // @synthesize containsCrash=_containsCrash;
@property(nonatomic) BOOL containsFailure; // @synthesize containsFailure=_containsFailure;
@property(nonatomic) __weak _IDETestReportActivities_AttachmentView *customPopUpView; // @synthesize customPopUpView=_customPopUpView;
@property(copy, nonatomic) NSString *durationString; // @synthesize durationString=_durationString;
@property(copy, nonatomic) NSString *activityString; // @synthesize activityString=_activityString;
@property(retain, nonatomic) id assertion; // @synthesize assertion=_assertion;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)updateTrackingAreas;
@property(nonatomic) long long attachmentsCount;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)viewDidMoveToSuperview;
- (void)fitViews;

@end

