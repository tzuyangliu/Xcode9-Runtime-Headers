//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTExtension, DVTStackBacktrace, IDEIssueManager, IDEIssueProviderSession, NSString;

@interface IDEIssueProvider : NSObject <DVTInvalidation>
{
    IDEIssueManager *_issueManager;
    DVTExtension *_extension;
    IDEIssueProviderSession *_session;
    IDEIssueProviderSession *_currentProviderSession;
}

+ (int)providerType;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(retain) IDEIssueProviderSession *currentProviderSession; // @synthesize currentProviderSession=_currentProviderSession;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
@property(retain) IDEIssueManager *issueManager; // @synthesize issueManager=_issueManager;
- (void).cxx_destruct;
- (BOOL)allowsExistingIssuesToBeCoalesced;
- (BOOL)allowsNewIssuesToBeCoalesced;
@property(readonly) BOOL _filterIssuesByActiveScheme;
- (id)logDocumentLocationForIssue:(id)arg1;
- (id)activityLogRecordForIssue:(id)arg1;
- (void)endProviderSession;
- (void)startProviderSession;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)removeIssues:(id)arg1 forProviderContext:(id)arg2 providerSession:(id)arg3;
- (void)addIssues:(id)arg1 forProviderContext:(id)arg2 providerSession:(id)arg3 container:(id)arg4 blueprint:(id)arg5 runtimeGroupingObject:(id)arg6;
- (void)addIssues:(id)arg1 forProviderContext:(id)arg2 providerSession:(id)arg3 container:(id)arg4 blueprint:(id)arg5;
- (void)setIssues:(id)arg1 forProviderContext:(id)arg2 providerSession:(id)arg3 container:(id)arg4 blueprint:(id)arg5 runtimeGroupingObject:(id)arg6;
- (void)setIssues:(id)arg1 forProviderContext:(id)arg2 providerSession:(id)arg3 container:(id)arg4 blueprint:(id)arg5;
- (void)setIssues:(id)arg1 forProviderContext:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

