//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, NSArray, NSMutableSet, NSString;
@protocol IDEProvisionable, IDEProvisioningSettingsTargetEditorViewControllersManagerSource, IDEProvisioningStyleDataSource, IDEProvisioningStyleDataSourceProvider;

@interface IDEProvisioningSettingsTargetEditorViewControllersManager : NSObject <DVTInvalidation>
{
    id <IDEProvisioningSettingsTargetEditorViewControllersManagerSource> _source;
    NSArray *_provisioningSettingsTargetEditorViewControllers;
    id <IDEProvisioningStyleDataSourceProvider> _provisioningStyleDataSourceProvider;
    id <IDEProvisionable> _provisionable;
    id <IDEProvisioningStyleDataSource> _provisioningStyleDataSource;
    DVTObservingToken *_provisioningStyleDataSourceProviderFinishedLoadingObserver;
    DVTObservingToken *_provisioningStyleDataSourceFinishedLoadingObserver;
    DVTObservingToken *_provisioningSelectionDataSourcesObserver;
    NSMutableSet *_controllersToInvalidate;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *controllersToInvalidate; // @synthesize controllersToInvalidate=_controllersToInvalidate;
@property(retain, nonatomic) DVTObservingToken *provisioningSelectionDataSourcesObserver; // @synthesize provisioningSelectionDataSourcesObserver=_provisioningSelectionDataSourcesObserver;
@property(retain, nonatomic) DVTObservingToken *provisioningStyleDataSourceFinishedLoadingObserver; // @synthesize provisioningStyleDataSourceFinishedLoadingObserver=_provisioningStyleDataSourceFinishedLoadingObserver;
@property(retain, nonatomic) DVTObservingToken *provisioningStyleDataSourceProviderFinishedLoadingObserver; // @synthesize provisioningStyleDataSourceProviderFinishedLoadingObserver=_provisioningStyleDataSourceProviderFinishedLoadingObserver;
@property(retain, nonatomic) id <IDEProvisioningStyleDataSource> provisioningStyleDataSource; // @synthesize provisioningStyleDataSource=_provisioningStyleDataSource;
@property(retain, nonatomic) id <IDEProvisionable> provisionable; // @synthesize provisionable=_provisionable;
@property(retain, nonatomic) id <IDEProvisioningStyleDataSourceProvider> provisioningStyleDataSourceProvider; // @synthesize provisioningStyleDataSourceProvider=_provisioningStyleDataSourceProvider;
@property(retain, nonatomic) NSArray *provisioningSettingsTargetEditorViewControllers; // @synthesize provisioningSettingsTargetEditorViewControllers=_provisioningSettingsTargetEditorViewControllers;
@property(retain, nonatomic) id <IDEProvisioningSettingsTargetEditorViewControllersManagerSource> source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)startObservations;
- (void)refresh;
- (id)initWithSource:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
