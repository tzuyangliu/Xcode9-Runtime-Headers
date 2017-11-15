//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, DVTObservingToken, NSArray, NSFileManager, NSMutableArray, NSSet;

@interface IDEArchiveManager : NSObject
{
    DVTDispatchLock *_archiveManagerLock;
    NSFileManager *_fileManager;
    NSMutableArray *_archives;
    _Bool _hasScanned;
    DVTObservingToken *_distributionArchivesLocationObservingToken;
}

+ (void)initialize;
+ (id)sharedArchiveManager;
- (void).cxx_destruct;
@property(readonly) NSSet *supportedFileDataTypeIdentifiers;
- (BOOL)installArchiveAtPath:(id)arg1 revealInstalledArchive:(BOOL)arg2 error:(id *)arg3;
- (BOOL)installArchiveAtPath:(id)arg1 revealInstalledArchive:(BOOL)arg2;
- (id)_installedArchiveAtPath:(id)arg1;
- (void)deleteArchives:(id)arg1;
- (void)deleteArchive:(id)arg1;
@property(copy) NSArray *archives; // @dynamic archives;
- (void)_populateArchivesIfNeeded;
- (void)_refreshArchives;
- (id)_allPotentialArchivePathsWithin:(id)arg1;
- (void)_checkPathForArchive:(id)arg1 andAddToArray:(id)arg2;
- (BOOL)_couldBeArchivePath:(id)arg1;
- (void)_revealArchiveAtPath:(id)arg1;
- (void)archiveInstalledProductsDirectoryWithPath:(id)arg1 auxiliaryFilesDirectoryPath:(id)arg2 schemeName:(id)arg3 archiveName:(id)arg4 platform:(id)arg5 toolchain:(id)arg6 revealNewArchive:(BOOL)arg7 workspace:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (id)init;

// Remaining properties
@property(readonly) NSMutableArray *mutableArchives; // @dynamic mutableArchives;

@end

