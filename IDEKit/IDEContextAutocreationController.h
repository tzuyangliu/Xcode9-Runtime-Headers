//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEWorkspace, NSString;

@interface IDEContextAutocreationController : NSObject <DVTInvalidation>
{
    NSString *_contextAutocreationMetricIdentifier;
    BOOL _batchAddingBlueprints;
    BOOL _needsBatchSchemeAutocreation;
    BOOL _allowAutocreateSchemesUI;
    IDEWorkspace *_workspace;
}

+ (id)contextAutocreationControllerForWorkspace:(id)arg1;
+ (id)logAspect;
+ (void)initialize;
@property BOOL allowAutocreateSchemesUI; // @synthesize allowAutocreateSchemesUI=_allowAutocreateSchemesUI;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)createSchemeForBuildable:(id)arg1 withName:(id)arg2;
- (BOOL)_hasComplication:(id)arg1;
- (BOOL)_isAppExtension:(id)arg1;
- (id)createDefaultSchemeForBuildable:(id)arg1;
- (id)orderBuildables:(id)arg1;
- (void)_finishAutocreateSchemesForcingAutocreate:(BOOL)arg1 fromAddingBlueprint:(BOOL)arg2 withBuildablesToCreateContextsFor:(id)arg3;
- (void)_autocreateSchemesWithUI:(BOOL)arg1 forcingAutocreate:(BOOL)arg2 fromAddingBlueprint:(BOOL)arg3;
- (id)_watchKitStoryboardFiles;
- (void)autocreateSchemesForcingAutocreate:(BOOL)arg1;
- (id)parentBuildableForBuildable:(id)arg1;
- (void)didBatchAddMultipleBlueprints:(id)arg1;
- (void)willBatchAddMultipleBlueprints:(id)arg1;
- (void)primitiveInvalidate;
- (id)initForWorkspace:(id)arg1;
- (id)contextAutocreationMetricIdentifier;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

