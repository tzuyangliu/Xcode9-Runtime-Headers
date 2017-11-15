//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDETestableIssueProvider, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDETestable;

@interface _IDETestableState : NSObject <DVTInvalidation>
{
    NSMutableSet *_testableObservers;
    NSMutableDictionary *_testResults;
    NSMutableDictionary *_performanceMetricsByTestIdentifier;
    id <IDETestable> _testable;
    IDETestableIssueProvider *_issueProvider;
}

+ (void)initialize;
@property(readonly) IDETestableIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
@property(readonly) __weak id <IDETestable> testable; // @synthesize testable=_testable;
- (void).cxx_destruct;
- (id)_performanceMetricsForTest:(id)arg1;
- (unsigned long long)_stateOfTest:(id)arg1;
- (unsigned long long)_testableStateForTestable:(id)arg1;
- (unsigned long long)_compositeStateOfSubTests:(id)arg1;
- (void)_clearAllResults;
- (void)_addAllTestsForTestable:(id)arg1 intoSet:(id)arg2;
- (void)_processNewTestResult:(id)arg1 forTest:(id)arg2;
- (void)_notifyObserversTestsChanged:(id)arg1;
- (void)_clearCachedResultsForTest:(id)arg1 andNoteParentIn:(id)arg2;
- (void)_notifyAllTestablesChanged;
- (void)_notifyTestableChanged;
- (BOOL)_hasObservers;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)_initWithTestable:(id)arg1 andWorkspace:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

