//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDETestReport_TestRun-Protocol.h>

@class IDESchemeActionRunDestinationRecord, IDESchemeActionsInvocationRecord, NSArray, NSImage, NSString;
@protocol IDETestReport_Device;

@interface IDELogTestsViewTestSummaryTestRun : NSObject <IDETestReport_TestRun>
{
    NSString *_ide_testReport_testRun_testName;
    NSString *_ide_testReport_testRun_testClassName;
    id <IDETestReport_Device> _ide_testReport_testRun_testedDevice;
    unsigned long long _ide_sharedTests_testSummaryStatus;
    NSString *_ide_testReport_testRun_UUID;
    NSArray *_ide_testReport_testRun_failureSummaries;
    NSArray *_ide_sharedTests_performanceMetrics;
    IDESchemeActionRunDestinationRecord *_ide_sharedTests_runDestinationRecord;
    NSString *_ide_testReport_testRun_testableBlueprintName;
    NSString *_ide_testReport_testRun_testableBlueprintPath;
    NSArray *_ide_testReport_testRun_activities;
}

@property(copy, nonatomic) NSArray *ide_testReport_testRun_activities; // @synthesize ide_testReport_testRun_activities=_ide_testReport_testRun_activities;
@property(copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintPath; // @synthesize ide_testReport_testRun_testableBlueprintPath=_ide_testReport_testRun_testableBlueprintPath;
@property(copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintName; // @synthesize ide_testReport_testRun_testableBlueprintName=_ide_testReport_testRun_testableBlueprintName;
@property(retain, nonatomic) IDESchemeActionRunDestinationRecord *ide_sharedTests_runDestinationRecord; // @synthesize ide_sharedTests_runDestinationRecord=_ide_sharedTests_runDestinationRecord;
@property(copy, nonatomic) NSArray *ide_sharedTests_performanceMetrics; // @synthesize ide_sharedTests_performanceMetrics=_ide_sharedTests_performanceMetrics;
@property(copy, nonatomic) NSArray *ide_testReport_testRun_failureSummaries; // @synthesize ide_testReport_testRun_failureSummaries=_ide_testReport_testRun_failureSummaries;
@property(copy, nonatomic) NSString *ide_testReport_testRun_UUID; // @synthesize ide_testReport_testRun_UUID=_ide_testReport_testRun_UUID;
@property(nonatomic) unsigned long long ide_sharedTests_testSummaryStatus; // @synthesize ide_sharedTests_testSummaryStatus=_ide_sharedTests_testSummaryStatus;
@property(retain, nonatomic) id <IDETestReport_Device> ide_testReport_testRun_testedDevice; // @synthesize ide_testReport_testRun_testedDevice=_ide_testReport_testRun_testedDevice;
@property(copy, nonatomic) NSString *ide_testReport_testRun_testClassName; // @synthesize ide_testReport_testRun_testClassName=_ide_testReport_testRun_testClassName;
@property(copy, nonatomic) NSString *ide_testReport_testRun_testName; // @synthesize ide_testReport_testRun_testName=_ide_testReport_testRun_testName;
- (void).cxx_destruct;
@property(readonly, nonatomic) IDESchemeActionRunDestinationRecord *ide_testReport_testRun_schemeActionRunDestinationRecord;
@property(readonly, nonatomic) BOOL ide_testReport_testRun_fetchesSchemeActionsInvocationRecordAsync;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_perfMetrics;
@property(readonly, nonatomic) NSImage *ide_testReport_testRun_statusImage;
@property(readonly, nonatomic) BOOL ide_testReport_testRun_passed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_testReport_testRun_schemeActionsInvocationRecord;
@property(readonly) Class superclass;

@end
