//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

#import <IDEFoundation/DVTProgressReporting-Protocol.h>

@class DVTFilePath, IDEActivityLogSection, IDEBuildParameters, IDEScheme, NSMutableArray, NSString;

@interface IDECoverageReportGenerationOperation : DVTOperation <DVTProgressReporting>
{
    BOOL isCpp;
    BOOL isSwift;
    NSString *baseFileName;
    NSMutableArray *lineCoverageObjects;
    NSMutableArray *functions;
    unsigned int numFunctions;
    unsigned int coveredFunctions;
    unsigned int executableLines;
    unsigned int coveredLines;
    unsigned int prevLine;
    NSString *_logIdentifier;
    IDEScheme *_runContext;
    IDEBuildParameters *_buildParameters;
    NSString *_architecture;
    DVTFilePath *_outputLogFilePath;
    DVTFilePath *_profileFilePath;
    IDEActivityLogSection *_logSection;
    long long _progress;
    NSMutableArray *_staticLibFiles;
}

@property(retain) NSMutableArray *staticLibFiles; // @synthesize staticLibFiles=_staticLibFiles;
@property long long progress; // @synthesize progress=_progress;
@property(nonatomic) __weak IDEActivityLogSection *logSection; // @synthesize logSection=_logSection;
@property(retain) DVTFilePath *profileFilePath; // @synthesize profileFilePath=_profileFilePath;
@property(retain) DVTFilePath *outputLogFilePath; // @synthesize outputLogFilePath=_outputLogFilePath;
@property(retain, nonatomic) NSString *architecture; // @synthesize architecture=_architecture;
@property(retain, nonatomic) IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
@property(retain, nonatomic) IDEScheme *runContext; // @synthesize runContext=_runContext;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void).cxx_destruct;
- (void)notifyCoverageReportGenerationFailedWithError:(id)arg1;
- (id)generateCoverageDataObjectForBuildable:(id)arg1 error:(id *)arg2;
- (id)generateCoverageDataForFunction:(struct LLVMOpaqueCoverageData *)arg1 functionName:(const char *)arg2 toolchains:(id)arg3;
- (void)addLine:(unsigned int)arg1 executionCount:(unsigned long long)arg2 executable:(BOOL)arg3 subRanges:(id)arg4;
- (void)main;
- (id)initWithRunContext:(id)arg1 buildParameters:(id)arg2 outputLogFilePath:(id)arg3 logSection:(id)arg4 profileFilePath:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

