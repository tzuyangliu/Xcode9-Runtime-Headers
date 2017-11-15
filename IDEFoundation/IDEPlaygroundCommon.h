//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEContainer.h>

@class DVTObservingToken, IDEPlaygroundCommonSharedContext, IDEPlaygroundSharedContext;

@interface IDEPlaygroundCommon : IDEContainer
{
    DVTObservingToken *_workspaceFinishedLoadingObservingToken;
    DVTObservingToken *_workspaceRunContextsObservingToken;
}

+ (BOOL)isSourcesDirectorySubPath:(id)arg1;
+ (BOOL)isOnlyUsedForUserInteraction;
- (void).cxx_destruct;
- (void)_workspaceRunContextsChanged;
- (void)_registerReferenceWithContexts;
- (void)_unregisterReferenceWithContexts;
- (void)_removeDirectoryPathObservationForPath:(id)arg1;
- (void)_addDirectoryPathObservationForPath:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_removePlaygroundDirectoriesObservation;
- (void)_addPlaygroundDirectoriesObservation;
- (id)_sourcesDirectoryPath;
- (BOOL)_shouldRespondToFileChangeOnDisk;
- (id)createRootGroup;
@property(readonly, nonatomic) IDEPlaygroundSharedContext *playgroundContext;
@property(readonly, nonatomic) IDEPlaygroundCommonSharedContext *context;
- (id)computedChildItemSubpathsFixed;
- (id)computedChildItemSubpathsEditable;
- (void)_didChangeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (void)_willChangeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (void)_changeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 options:(id)arg4 error:(id *)arg5;

@end

