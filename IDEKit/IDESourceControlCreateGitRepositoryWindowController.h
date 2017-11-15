//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class IDESourceControlCreateGitRepositoryOperationInfo, IDESourceControlWorkingTree, IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSOperationQueue, NSProgressIndicator, NSTextField;

@interface IDESourceControlCreateGitRepositoryWindowController : NSWindowController
{
    NSTextField *_titleField;
    NSProgressIndicator *_progressIndicator;
    IDESourceControlWorkingTree *_workingTree;
    IDESourceControlCreateGitRepositoryOperationInfo *_operationInfo;
    NSOperationQueue *_operationQueue;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    IDEWorkspace *_workspace;
}

@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
- (void).cxx_destruct;
- (void)createGitRepositoryForFilePath:(id)arg1;
- (void)displayError:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetForWindow:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)windowNibName;

@end

