//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class NSButton, NSMatrix, NSTextField;

@interface IDEAddContainerItemsAssistant : IDEAssistant
{
    BOOL _canFinish;
    NSTextField *_copyFilesToTargetGroupLabel;
    NSButton *_copyFilesToTargetGroupSwitchButton;
    NSMatrix *_createGroupsForFoldersMatrix;
}

@property BOOL canFinish; // @synthesize canFinish=_canFinish;
- (void).cxx_destruct;
- (void)reallyFinishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)viewDidInstall;
- (void)loadView;

@end

