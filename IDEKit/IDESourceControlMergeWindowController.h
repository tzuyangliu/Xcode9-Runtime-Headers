//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlReviewFilesWindowController.h>

#import <IDEKit/IDEWorkspaceDocumentProvider-Protocol.h>

@class DVTBorderedView, DVTDiffDescriptor, DVTObservingToken, IDESourceControlMergeDataSource, IDEWorkspaceDocument, NSArray, NSButton, NSPopUpButton, NSSegmentedControl, NSString;

@interface IDESourceControlMergeWindowController : IDESourceControlReviewFilesWindowController <IDEWorkspaceDocumentProvider>
{
    NSButton *_mergeButton;
    DVTBorderedView *_reviewFilesView;
    NSButton *_deleteBranchCheckbox;
    NSSegmentedControl *_perDiffSegmentedControl;
    NSPopUpButton *_mergeStrategyPullDownMenu;
    NSArray *_operationInfo;
    IDESourceControlMergeDataSource *_workspaceDataSource;
    IDESourceControlMergeDataSource *_fileSystemDataSource;
    IDESourceControlMergeDataSource *_flatDataSource;
    BOOL _mergeInProgress;
    DVTObservingToken *_mergeDirectionObservationToken;
    DVTObservingToken *_descriptorResolvedObservationToken;
    DVTObservingToken *_conflictCountObservationToken;
}

@property(copy) NSArray *operationInfo; // @synthesize operationInfo=_operationInfo;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)_switchBackToOriginalBranch;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)merge:(id)arg1;
- (void)_merge;
- (void)handleErrors:(id)arg1;
- (void)selectMergeStrategyAllDiffs:(id)arg1;
- (void)selectMergeStrategyForSelectedDiff:(id)arg1;
- (void)overwriteOriginalDocumentsWithMergeDocuments;
- (void)overwriteOriginalDocumentsWithMergeDocumentsForWorkingTree:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupConflictResolutionSupport;
- (void)setupMergeStrategyPullDown;
- (unsigned long long)totalConflictCount;
@property(readonly) DVTDiffDescriptor *selectedMergeDescriptor;
- (void)updatePerDiffSegmentedControl;
- (id)workingTreeItemFilterPredicate;
- (id)workspaceItemFilterPredicate;
- (id)itemsForWorkingTree:(id)arg1;
- (id)flatDataSource;
- (id)fileSystemDataSource;
- (id)workspaceDataSource;
@property(readonly) IDEWorkspaceDocument *workspaceDocument;
- (id)operationInfoForWorkingTree:(id)arg1;
- (void)beginSheetForWindow:(id)arg1;
- (BOOL)shouldEnableMergeButton;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

