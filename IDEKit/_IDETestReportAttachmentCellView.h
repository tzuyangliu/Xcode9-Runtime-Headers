//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSProgressIndicator;

@interface _IDETestReportAttachmentCellView : NSTableCellView
{
    NSButton *_quickLookButton;
    NSProgressIndicator *_loadingProgress;
}

@property __weak NSProgressIndicator *loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property __weak NSButton *quickLookButton; // @synthesize quickLookButton=_quickLookButton;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)setBackgroundStyle:(long long)arg1;
- (void)awakeFromNib;

@end
