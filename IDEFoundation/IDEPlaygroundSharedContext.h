//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEPlaygroundCommonSharedContext.h>

#import <IDEFoundation/IDESwiftMigrator-Protocol.h>

@class DVTDevice, DVTFilePath, DVTSDK, IDEPlaygroundVersion, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface IDEPlaygroundSharedContext : IDEPlaygroundCommonSharedContext <IDESwiftMigrator>
{
    NSMutableDictionary *_pagesByFilename;
    NSMutableArray *_pageFilenames;
    NSArray *_workspaceFrameworkSearchPaths;
    DVTDevice *_device;
    BOOL _allowsReset;
    BOOL _executeOnSourceChanges;
    BOOL _timelineScrubberEnabled;
    NSError *_deviceError;
    IDEPlaygroundVersion *_playgroundVersion;
    NSString *_targetPlatformIdentifier;
    long long _displayMode;
    NSString *_organizationName;
    NSArray *_discreteFileSections;
    NSNumber *_autoTerminationDelay;
    NSString *_lastSwiftMigration;
    DVTFilePath *_documentationSectionPath;
}

+ (id)keyPathsForValuesAffectingWorkspaceFrameworkSearchPaths;
+ (id)keyPathsForValuesAffectingFrameworkSearchPaths;
+ (id)keyPathsForValuesAffectingTargetTriple;
+ (id)keyPathsForValuesAffectingTargetPlatformIdentifier;
+ (id)keyPathsForValuesAffectingAutoTerminationDelay;
+ (id)keyPathsForValuesAffectingPagesDirectoryPath;
+ (id)keyPathsForValuesAffectingFirstPageContext;
+ (id)keyPathsForValuesAffectingPageContexts;
+ (void)changeFilePath:(id)arg1 forSharedContext:(id)arg2;
+ (id)sharedPlaygroundContextForFilePath:(id)arg1 error:(id *)arg2;
+ (id)knownPageTypeUTIs;
+ (id)contextsForFilePaths;
+ (Class)contextDeserializerClass;
+ (Class)contextSerializerClass;
+ (id)filePathExtension;
+ (id)UTI;
+ (void)initialize;
@property(nonatomic) __weak DVTFilePath *documentationSectionPath; // @synthesize documentationSectionPath=_documentationSectionPath;
@property(copy, nonatomic) NSString *lastSwiftMigration; // @synthesize lastSwiftMigration=_lastSwiftMigration;
@property(retain, nonatomic) NSNumber *autoTerminationDelay; // @synthesize autoTerminationDelay=_autoTerminationDelay;
@property(retain, nonatomic) NSArray *discreteFileSections; // @synthesize discreteFileSections=_discreteFileSections;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(nonatomic) BOOL timelineScrubberEnabled; // @synthesize timelineScrubberEnabled=_timelineScrubberEnabled;
@property(nonatomic) BOOL executeOnSourceChanges; // @synthesize executeOnSourceChanges=_executeOnSourceChanges;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) BOOL allowsReset; // @synthesize allowsReset=_allowsReset;
@property(copy, nonatomic) NSString *targetPlatformIdentifier; // @synthesize targetPlatformIdentifier=_targetPlatformIdentifier;
@property(retain, nonatomic) IDEPlaygroundVersion *playgroundVersion; // @synthesize playgroundVersion=_playgroundVersion;
@property(retain, nonatomic) NSError *deviceError; // @synthesize deviceError=_deviceError;
- (void).cxx_destruct;
- (void)migrateWithMigrationDir:(id)arg1 buildQueueSet:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)migratePageContext:(id)arg1 withMigrationDir:(id)arg2 buildQueueSet:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)commandArgumentsWithMigrationDir:(id)arg1 pageContext:(id)arg2;
- (void)fillArguments:(id)arg1 outputFileMap:(id)arg2 inMigrationDir:(id)arg3 forContext:(id)arg4;
- (void)updateLastSwiftMigrationToCurrent;
@property(readonly, nonatomic) BOOL lastSwiftMigrationIsCurrent;
- (id)workspaceFrameworkSearchPathsForWorkspace:(id)arg1;
- (id)workspaceFrameworkSearchPaths;
- (void)invalidateWorkspaceFrameworkSearchPaths;
- (void)_workspaceRunContextsChanged;
- (BOOL)unregisterReferencingContainer:(id)arg1;
- (BOOL)registerReferencingContainer:(id)arg1;
- (BOOL)representsLegacyInteractiveLearningDocument;
- (id)_targetTripleForAuxiliarySource;
- (id)_sdkForAuxiliarySource;
- (id)frameworkSearchPaths;
- (id)defaultToolchainRegistry;
@property(readonly, nonatomic) NSString *targetTriple;
@property(readonly, nonatomic) DVTDevice *device;
@property(readonly, nonatomic) NSArray *targetableSDKs;
@property(retain, nonatomic) DVTSDK *sdk;
@property(readonly, nonatomic) DVTFilePath *pagesDirectoryPath;
- (void)_notifyPagesDirectoryChangedOnBackgroundQueue;
- (void)_updatePagesFromDirectoryContents;
- (id)knownPlaygroundPageExtensions;
- (void)_prepareForPageCreationWithHandler:(id)arg1;
- (BOOL)_renamePage:(id)arg1 toName:(id)arg2 withStructureEditingBlock:(CDUnknownBlockType)arg3;
- (void)_movePage:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)_invalidatePlaygroundPageContextForFilename:(id)arg1;
- (id)_createPlaygroundPageContextForFilePath:(id)arg1;
- (id)_addPageContextForFilePath:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)pageContextForPath:(id)arg1;
@property(readonly, nonatomic) IDEPlaygroundCommonSharedContext *firstPageContext;
@property(readonly, nonatomic) NSArray *pageContexts;
- (id)description;
- (id)initWithFilePath:(id)arg1 parentContext:(id)arg2;
- (void)_invalidatePageContexts;
- (void)setFilePath:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSMutableArray *mutablePageFilenames; // @dynamic mutablePageFilenames;
@property(readonly, nonatomic) NSArray *pageFilenames; // @dynamic pageFilenames;

@end

