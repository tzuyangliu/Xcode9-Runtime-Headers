//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;
@protocol DVTInvalidation;

@interface _IDESourceControlOperationInfoInvalidationToken : NSObject <DVTInvalidation>
{
    id <DVTInvalidation> _currentConflictDetectionToken;
    DVTStackBacktrace *_invalidationBacktrace;
}

+ (void)initialize;
@property(readonly) DVTStackBacktrace *invalidationBacktrace; // @synthesize invalidationBacktrace=_invalidationBacktrace;
@property(retain) id <DVTInvalidation> currentConflictDetectionToken; // @synthesize currentConflictDetectionToken=_currentConflictDetectionToken;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

