//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEStreamWorkContext.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface IDELocalizationWorkContext : IDEStreamWorkContext <DVTInvalidation>
{
}

+ (void)initialize;
+ (id)contextWithParent:(id)arg1 values:(id)arg2;
+ (id)contextWithParent:(id)arg1 dryRun:(BOOL)arg2;
+ (id)contextWithParent:(id)arg1;
+ (id)contextWithValues:(id)arg1;
- (void)primitiveInvalidate;
@property(readonly) BOOL dryRun;
@property(readonly) IDELocalizationWorkContext *parentContext;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

