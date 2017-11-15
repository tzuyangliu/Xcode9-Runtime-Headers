//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeAction.h>

#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>

@class DVTNotificationToken, IDESchemeBuildableReference, NSArray, NSMutableArray, NSString;
@protocol IDEAnalysisToolService;

@interface IDEProfileSchemeAction : IDESchemeAction <DVTXMLUnarchiving>
{
    NSMutableArray *_commandLineArgumentEntries;
    NSMutableArray *_environmentVariableEntries;
    id <IDEAnalysisToolService> _analysisToolService;
    IDESchemeBuildableReference *_profileBuildableReferenceToUseForMacroExpansion;
    DVTNotificationToken *_buildablesToken;
    BOOL _debugDocumentVersioning;
    BOOL _ignoresPersistentStateOnLaunch;
    BOOL _shouldUseLaunchSchemeArgsEnv;
    BOOL _useCustomWorkingDirectory;
    BOOL _enableTestabilityWhenProfilingTests;
    NSString *_customWorkingDirectory;
    NSString *_resolvedCustomWorkingDirectory;
    NSString *_savedToolIdentifier;
    unsigned long long _launchAutomaticallySubstyle;
    Class _analysisToolServiceClass;
}

+ (id)keyPathsForValuesAffectingBuildableReferenceToUseForMacroExpansion;
+ (BOOL)automaticallyNotifiesObserversOfAnalysisToolService;
+ (id)keyPathsForValuesAffectingDoesNonActionWork;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)initialize;
@property(retain) Class analysisToolServiceClass; // @synthesize analysisToolServiceClass=_analysisToolServiceClass;
@property BOOL enableTestabilityWhenProfilingTests; // @synthesize enableTestabilityWhenProfilingTests=_enableTestabilityWhenProfilingTests;
@property(nonatomic) unsigned long long launchAutomaticallySubstyle; // @synthesize launchAutomaticallySubstyle=_launchAutomaticallySubstyle;
@property BOOL useCustomWorkingDirectory; // @synthesize useCustomWorkingDirectory=_useCustomWorkingDirectory;
@property(nonatomic) BOOL shouldUseLaunchSchemeArgsEnv; // @synthesize shouldUseLaunchSchemeArgsEnv=_shouldUseLaunchSchemeArgsEnv;
@property(retain, nonatomic) NSString *savedToolIdentifier; // @synthesize savedToolIdentifier=_savedToolIdentifier;
@property BOOL ignoresPersistentStateOnLaunch; // @synthesize ignoresPersistentStateOnLaunch=_ignoresPersistentStateOnLaunch;
@property BOOL debugDocumentVersioning; // @synthesize debugDocumentVersioning=_debugDocumentVersioning;
@property(copy, nonatomic) NSString *customWorkingDirectory; // @synthesize customWorkingDirectory=_customWorkingDirectory;
- (void).cxx_destruct;
- (void)addMacroExpansion:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addEnvironmentVariables:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addCommandLineArguments:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setDebugDocumentVersioningFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setIgnoresPersistentStateOnLaunchFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setSavedToolIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setShouldUseLaunchSchemeArgsEnvFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setEnableTestabilityWhenProfilingTestsFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setUseCustomWorkingDirectoryFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setLaunchAutomaticallySubstyleFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setAskForAppToLaunchFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setNotificationPayloadFileFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)intentQueryString;
@property BOOL askForAppToLaunch;
@property BOOL launchWithNotification;
@property BOOL launchWithComplication;
@property BOOL launchWithGlance;
@property BOOL staticNotificationSelected;
- (void)_setLaunchOption:(unsigned long long)arg1 enabled:(BOOL)arg2;
- (BOOL)_launchOptionIsSet:(unsigned long long)arg1;
- (id)_expandMacrosInString:(id)arg1 forBuildParameters:(id)arg2;
- (id)_expandMacrosInString:(id)arg1;
- (void)setBuildableReferenceToUseForMacroExpansion:(id)arg1;
- (id)buildableReferenceToUseForMacroExpansion;
@property(readonly) NSString *resolvedCustomWorkingDirectory; // @synthesize resolvedCustomWorkingDirectory=_resolvedCustomWorkingDirectory;
- (id)environmentVariablesForBuildParameters:(id)arg1;
@property(readonly) NSMutableArray *mutableEnvironmentVariableEntries; // @dynamic mutableEnvironmentVariableEntries;
@property(copy) NSArray *environmentVariableEntries; // @dynamic environmentVariableEntries;
- (id)commandLineArgumentsForDevice:(id)arg1 forBuildParameters:(id)arg2;
@property(readonly) NSMutableArray *mutableCommandLineArgumentEntries; // @dynamic mutableCommandLineArgumentEntries;
@property(copy) NSArray *commandLineArgumentEntries; // @dynamic commandLineArgumentEntries;
- (id)_profileOperationForSchemeOperationParameters:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 buildableProductDirectories:(id)arg4 overridingTestingSpecifiers:(id)arg5 schemeActionRecord:(id)arg6 environmentVariables:(id)arg7 commandLineArguments:(id)arg8 outError:(id *)arg9;
- (id)_UITestOperationForSchemeOperationParameters:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 buildableProductDirectories:(id)arg4 overridingTestingSpecifiers:(id)arg5 schemeActionRecord:(id)arg6 environmentVariables:(id)arg7 commandLineArguments:(id)arg8 testManager:(id)arg9 outError:(id *)arg10;
- (id)_operationGroupWithSchemeOperationParameters:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 buildableProductDirectories:(id)arg4 testManager:(id)arg5 overridingTestingSpecifiers:(id)arg6 schemeActionRecord:(id)arg7 environmentVariables:(id)arg8 commandLineArguments:(id)arg9 outError:(id *)arg10 actionCallbackBlock:(CDUnknownBlockType)arg11;
- (id)profileOperationWithSchemeOperationParameters:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 buildableProductDirectories:(id)arg4 schemeActionRecord:(id)arg5 outError:(id *)arg6 actionCallbackBlock:(CDUnknownBlockType)arg7;
- (id)profileOperationWithSchemeOperationParameters:(id)arg1 testManager:(id)arg2 withBuildOperation:(id)arg3 buildParameters:(id)arg4 buildableProductDirectories:(id)arg5 overridingTestingSpecifiers:(id)arg6 schemeActionRecord:(id)arg7 outError:(id *)arg8 actionCallbackBlock:(CDUnknownBlockType)arg9;
- (void)setSelectedAnalysisToolIdentifier:(id)arg1 forPlatformIdentifier:(id)arg2;
- (id)primitiveProfileOperationForRunnableType:(id)arg1 runDestination:(id)arg2 launchParametersProvider:(CDUnknownBlockType)arg3 workspaceFilePath:(id)arg4 projectFilePath:(id)arg5 outError:(id *)arg6;
- (void)_updateProfileActionBuildableToUseForMacroExpansion;
- (void)updateBuildableForChangeInRunnable;
- (void)setRunContext:(id)arg1;
- (BOOL)doesNonActionWork;
- (id)subtitle;
- (id)name;
- (void)primitiveInvalidate;
- (void)_commonInit;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

