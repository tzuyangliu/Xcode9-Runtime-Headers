//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEIndexDBConnection, IDEIndexDBFactory, IDEIndexDBTransaction, IDEIndexDatabase, IDEIndexUniqueStringMap, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface IDEIndexImporter : NSObject <DVTInvalidation>
{
    IDEIndexDatabase *_database;
    NSObject<OS_dispatch_queue> *_project_queue;
    NSObject<OS_dispatch_queue> *_autoQuery_queue;
    NSObject<OS_dispatch_queue> *_import_queue;
    int _isClosing;
    IDEIndexDBConnection *_dbConnection;
    NSDictionary *_providers;
    IDEIndexDBTransaction *_dbTransaction;
    NSMutableSet *_pendingMainFiles;
    IDEIndexDBFactory *_fileFactory;
    IDEIndexDBFactory *_unitFactory;
    IDEIndexDBFactory *_groupFactory;
    IDEIndexDBFactory *_contextFactory;
    NSMutableDictionary *_permanentFileCache;
    NSMutableDictionary *_fileCache;
    NSMutableDictionary *_unitCache;
    NSMutableDictionary *_permanentGroupCache;
    NSMutableSet *_staleGroups;
    NSMutableDictionary *_groupCache;
    long long _symbolCount;
    int _filesWaiting;
    NSSet *_projectFiles;
    IDEIndexUniqueStringMap *_uniqueStrings;
    NSMutableDictionary *_fileDates;
    NSMutableDictionary *_filesByMainFileByTarget;
    NSMutableDictionary *_mainFilesByTargetByFile;
    NSMutableDictionary *_outOfDateFilesByTarget;
    BOOL _isReady;
    NSMutableDictionary *_spliceTable;
    int _totalDeferredJobs;
    int _changedDeferredJobs;
    NSMutableSet *_hotFiles;
    BOOL _didIndexHotFile;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
@property(readonly, nonatomic) BOOL isReady; // @synthesize isReady=_isReady;
@property(readonly, nonatomic) IDEIndexDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)purgeStaleFilesUsingTransaction:(id)arg1;
- (void)purgeStaleGroupsUsingTransaction:(id)arg1;
- (void)purgeStaleData:(id)arg1;
- (void)submitTransaction;
- (void)endSession:(id)arg1;
- (void)didSave;
- (void)removeFile:(id)arg1 mainFile:(id)arg2 target:(id)arg3;
- (void)addFile:(id)arg1 mainFile:(id)arg2 target:(id)arg3;
- (void)submitMainFile:(id)arg1;
- (void)resetSpliceTable;
- (void)updateSpliceTableForDirtyFile:(id)arg1 oldGroupId:(long long)arg2 oldModified:(double)arg3;
- (BOOL)spliceChanges:(id)arg1 toMainFile:(id)arg2 target:(id)arg3;
- (long long)existingFileIdForPath:(id)arg1;
- (long long)fileIdForPath:(id)arg1 moduleURL:(id)arg2;
- (long long)realGroupIdForId:(long long)arg1;
- (long long)realUnitIdForId:(long long)arg1;
- (long long)realFileIdForId:(long long)arg1;
- (void)dealloc;
- (void)primitiveInvalidate;
- (void)close;
- (void)logStatistics;
- (void)forgetOutOfDateMainFile:(id)arg1 forTarget:(id)arg2;
- (void)noteOutOfDateMainFile:(id)arg1 file:(id)arg2 forTarget:(id)arg3;
- (void)noteOutOfDateFile:(id)arg1;
- (id)storeTimestamp:(id)arg1 modtime:(double)arg2 forFile:(id)arg3 mainFile:(id)arg4 target:(id)arg5 spliced:(BOOL)arg6;
- (BOOL)shouldIgnoreOutOfDateFile:(id)arg1;
- (void)registerHotFile:(id)arg1;
- (void)unregisterTarget:(id)arg1 dirtyFiles:(id)arg2;
- (void)registerTarget:(id)arg1 byCaller:(id)arg2 outOfDateCallback:(CDUnknownBlockType)arg3;
- (id)auxiliaryFiles:(id)arg1 mainFile:(id)arg2;
- (long long)numberOfKnownFiles;
- (id)timestampForFile:(id)arg1;
- (BOOL)isKnownFile:(id)arg1 makeKnown:(BOOL)arg2;
- (id)mainFilesForFile:(id)arg1;
- (id)mainFilesForFile:(id)arg1 followPCH:(BOOL)arg2;
- (id)mainFilesForTarget:(id)arg1;
- (id)filesForMainFile:(id)arg1 target:(id)arg2 followPCH:(BOOL)arg3;
- (BOOL)isProjectFile:(id)arg1;
- (void)finishLoading;
- (id)initWithDatabase:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

