//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IDEOpenQuicklySDKSnapshot : NSObject
{
    DVTFilePath *_basePath;
    NSMutableArray *_filePathArrays;
    NSMutableArray *_candidateBlocks;
    NSMutableArray *_consumers;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _complete;
}

+ (void)exploreURL:(id)arg1 accumulatedFilePaths:(id)arg2;
+ (void)exploreBasePath:(id)arg1 withProgressHandler:(CDUnknownBlockType)arg2;
+ (void)saveCacheForBasePath:(id)arg1 withFilePaths:(id)arg2 andFileNameCandidateBlocks:(id)arg3;
+ (BOOL)loadBasePathFromCache:(id)arg1 withProgressHandler:(CDUnknownBlockType)arg2;
+ (void)collectFilePathsInSearchPath:(id)arg1 withConsumer:(CDUnknownBlockType)arg2;
+ (id)synchronizationQueue;
+ (id)explorationQueue;
- (void).cxx_destruct;
- (void)didDiscoverFilePaths:(id)arg1 withCandidates:(id)arg2;
- (void)addConsumer:(CDUnknownBlockType)arg1;
- (void)beginIndexing;
- (id)initWithFilePath:(id)arg1;

@end

