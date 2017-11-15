//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceControlOperation.h>

@class DVTPerformanceMetric, DVTTask, NSArray, NSMutableData, NSString;

@interface IDESourceControlTaskOperation : IDESourceControlOperation
{
    DVTTask *_task;
    DVTTask *_pipeTask;
    NSString *_launchPath;
    NSString *_currentDirectoryPath;
    NSArray *_arguments;
    NSMutableData *_data;
    NSMutableData *_errorData;
    DVTPerformanceMetric *_metric;
    BOOL _readyToParseData;
    CDUnknownBlockType _standardOutputFeedbackBlock;
    CDUnknownBlockType _standardErrorFeedbackBlock;
}

+ (void)setupFilePath:(id)arg1 asUnversionedWithDictionary:(id)arg2 blacklistedFiles:(id)arg3;
+ (id)_authenticationAgentExecutablePath;
+ (id)sourceControlTaskOperationLogAspect;
@property(copy) CDUnknownBlockType standardErrorFeedbackBlock; // @synthesize standardErrorFeedbackBlock=_standardErrorFeedbackBlock;
@property(copy) CDUnknownBlockType standardOutputFeedbackBlock; // @synthesize standardOutputFeedbackBlock=_standardOutputFeedbackBlock;
@property BOOL readyToParseData; // @synthesize readyToParseData=_readyToParseData;
@property(retain) NSMutableData *errorData; // @synthesize errorData=_errorData;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy) NSString *currentDirectoryPath; // @synthesize currentDirectoryPath=_currentDirectoryPath;
@property(copy) NSString *launchPath; // @synthesize launchPath=_launchPath;
@property(retain) DVTTask *pipeTask; // @synthesize pipeTask=_pipeTask;
@property(readonly) DVTTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)parseDataOrGenerateErrorForTask:(id)arg1 operation:(id)arg2;
- (void)setWaitToParseData:(BOOL)arg1;
- (void)_real_main;
- (void)main;
- (id)readDataFromFileHandle:(id)arg1 intoBuffer:(id)arg2 runloopMode:(id)arg3 outstandingOperationCounter:(long long *)arg4 dataParsingBlock:(CDUnknownBlockType)arg5;
- (id)pipeToOperation;
- (id)rawErrorOutput;
- (id)rawStandardOutput;
- (id)rawInput;
- (id)errorFromErrorMessage:(id)arg1;
- (void)parseData;

@end

