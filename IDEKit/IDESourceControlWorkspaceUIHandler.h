//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDESourceControlWorkspaceUIHandlerProtocol-Protocol.h>
#import <IDEKit/NSAlertDelegate-Protocol.h>
#import <IDEKit/NSWindowDelegate-Protocol.h>

@class DVTFilePath, DVTStackBacktrace, IDESourceControlCreateGitRepositoryOperationInfo, IDESourceControlUpgradeWindowController, IDEWorkspaceDocument, NSAlert, NSMutableSet, NSOperationQueue, NSString;

@interface IDESourceControlWorkspaceUIHandler : NSObject <IDESourceControlWorkspaceUIHandlerProtocol, DVTInvalidation, NSAlertDelegate, NSWindowDelegate>
{
    CDUnknownBlockType _sourceControlCommandContinuationBlock;
    CDUnknownBlockType _upgradeContinuationBlock;
    NSAlert *_waitingOnInitialScanAlert;
    NSAlert *_checkingForUpdatesAlert;
    NSAlert *_upgradeWorkignCopyAlert;
    IDESourceControlUpgradeWindowController *_upgradeWindowController;
    BOOL _initialScanAlertIsShowing;
    BOOL _initialWorkspaceScanIsComplete;
    IDEWorkspaceDocument *_workspaceDocument;
    NSMutableSet *_windowControllers;
    IDESourceControlCreateGitRepositoryOperationInfo *_operationInfo;
    NSOperationQueue *_operationQueue;
    BOOL _shouldShowMissingWorkingCopies;
    BOOL _shouldCreateLocalRepository;
    DVTFilePath *_pathToCreateLocalGitRepository;
}

+ (void)initialize;
@property DVTFilePath *pathToCreateLocalGitRepository; // @synthesize pathToCreateLocalGitRepository=_pathToCreateLocalGitRepository;
@property BOOL shouldCreateLocalRepository; // @synthesize shouldCreateLocalRepository=_shouldCreateLocalRepository;
@property(copy) CDUnknownBlockType sourceControlCommandContinuationBlock; // @synthesize sourceControlCommandContinuationBlock=_sourceControlCommandContinuationBlock;
- (void).cxx_destruct;
- (void)windowDidCloseForWindowController:(id)arg1;
- (void)addWindowController:(id)arg1;
- (void)finishedCreateGitRepositoryWithWorkingTree:(id)arg1;
- (void)createGitRepositoryForFilePath:(id)arg1 workingTree:(id)arg2 repoName:(id)arg3;
- (void)displayError:(id)arg1;
- (void)shouldCreateLocalRepository:(BOOL)arg1 atFilePath:(id)arg2;
- (void)initialWorkspaceScanIsFinished:(id)arg1;
- (void)displayWaitingOnInitialWorkspaceScanAlertInWindow:(id)arg1 withContinuationBlock:(CDUnknownBlockType)arg2;
- (id)waitingOnInitialScanAlert;
- (void)primitiveInvalidate;
- (void)windowWillClose:(id)arg1;
- (void)requestOperationConfirmationForOperationName:(id)arg1 workingCopyName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)offerAdditionalWorkingCopies;
- (void)warnAboutNewerRepositoryVersionWithError:(id)arg1;
- (void)_newWorkingCopyDidEnd:(id)arg1 returnCode:(long long)arg2 workingCopies:(id)arg3;
- (void)askToShareNewWorkingCopies:(id)arg1;
- (void)showUpgradeWindowForWindow:(id)arg1 workingCopyNeedingUpgrade:(id)arg2;
- (void)workspaceMonitorDidFinishScanning:(id)arg1;
- (id)initWithWorkspaceDocument:(id)arg1;
- (void)finishedUpgrade;
- (BOOL)alertShowHelp:(id)arg1;
- (void)_upgradeAlertDidEnd:(id)arg1 returnCode:(long long)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

