//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEValueHistoryToyViewController.h>

@class QLPreviewView;

@interface IDEValueHistoryURLViewController : IDEValueHistoryToyViewController
{
    BOOL _playgroundIsExecuting;
    BOOL _playgroundDidCompleteLastExecution;
    QLPreviewView *_qlPreviewView;
}

+ (id)displayableReflectionTags;
@property(retain) QLPreviewView *qlPreviewView; // @synthesize qlPreviewView=_qlPreviewView;
- (void).cxx_destruct;
- (id)url;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (id)toolTip;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (unsigned long long)representationType;
- (id)undoManager;
- (void)viewDidLoad;

@end

