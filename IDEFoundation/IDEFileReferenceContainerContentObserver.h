//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, DVTTimeSlicedMainThreadWorkQueue, IDEContainer, IDEContainerQuery, NSMapTable, NSMutableDictionary, NSString;
@protocol DVTCancellable;

@interface IDEFileReferenceContainerContentObserver : NSObject <DVTInvalidation>
{
    NSMutableDictionary *_observations;
    CDUnknownBlockType _consitencyValidatingObserver;
    IDEContainer *_container;
    IDEContainerQuery *_containerQuery;
    id <DVTCancellable> _containerQueryObservation;
    DVTTimeSlicedMainThreadWorkQueue *_processingQueue;
    NSMutableDictionary *_filePathsToFileDataTypeCandidates;
    NSMapTable *_fileReferenceRecords;
}

+ (id)observeContainer:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)initialize;
+ (id)observeContainer:(id)arg1 optionallyFilteredToTypes:(id)arg2 ignoreModifiedUpdateType:(BOOL)arg3 withBufferedHandler:(CDUnknownBlockType)arg4;
+ (id)observeContainer:(id)arg1 optionallyFilteredToTypes:(id)arg2 withBufferedHandler:(CDUnknownBlockType)arg3;
+ (id)observeContainer:(id)arg1 withBufferedHandler:(CDUnknownBlockType)arg2;
+ (id)observeContainer:(id)arg1 filteredToTypes:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)processResetFileReferences:(id)arg1;
- (void)processFilePathWithContentChange:(id)arg1;
- (void)processFileReference:(id)arg1 withNewLastKnownFileDataType:(id)arg2;
- (void)processFileReference:(id)arg1 withNewResolvedFilePath:(id)arg2;
- (void)processSubtractedFileReference:(id)arg1;
- (BOOL)isTrackedFileReference:(id)arg1;
- (BOOL)isTrackedFilePath:(id)arg1;
- (void)processUnionedFileReference:(id)arg1;
- (void)addReferenceToFilePath:(id)arg1 withFileDataType:(id)arg2;
- (void)removeReferenceToFilePath:(id)arg1 withFileDataType:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingFileReferenceIfNeeded:(id)arg1;
- (void)startObservingFileReference:(id)arg1;
- (void)deliverObservationForFilePath:(id)arg1 updateType:(long long)arg2;
- (void)enqueueUpdate:(CDUnknownBlockType)arg1;
- (void)enqueueUpdateForContainerQueryKVOChange:(id)arg1;
- (id)addObserver:(CDUnknownBlockType)arg1;
- (void)primitiveInvalidate;
- (id)initWithContainer:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
