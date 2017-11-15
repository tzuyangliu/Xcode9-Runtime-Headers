//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionContext.h>

@class DVTFilePath, IDEDistributionItem, IDEDistributionThinningVariant, NSDictionary, NSNumber;

@interface IDEDistributionProcessingPipelineContext : IDEDistributionContext
{
    DVTFilePath *_temporaryDirectory;
    DVTFilePath *_destinationRoot;
    Class _packagingStep;
    NSDictionary *_onDemandResourcesAssetPacksOwningBundleForCopy;
    NSDictionary *_onDemandResourcesAssetPacksZippedPaths;
    DVTFilePath *_symbolsPath;
    NSDictionary *_finalResultsMap;
    NSNumber *_dryRun;
    NSDictionary *_pipelineOutputs;
    IDEDistributionItem *_activeDistributionItem;
    IDEDistributionThinningVariant *_activeThinningVariant;
    DVTFilePath *_appStorePackageOutputPath;
}

+ (id)modifiedName:(id)arg1 forVariant:(id)arg2;
@property(retain, nonatomic) DVTFilePath *appStorePackageOutputPath; // @synthesize appStorePackageOutputPath=_appStorePackageOutputPath;
@property(retain, nonatomic) IDEDistributionThinningVariant *activeThinningVariant; // @synthesize activeThinningVariant=_activeThinningVariant;
@property(retain, nonatomic) IDEDistributionItem *activeDistributionItem; // @synthesize activeDistributionItem=_activeDistributionItem;
@property(retain, nonatomic) NSDictionary *pipelineOutputs; // @synthesize pipelineOutputs=_pipelineOutputs;
@property(retain, nonatomic) NSNumber *dryRun; // @synthesize dryRun=_dryRun;
@property(retain, nonatomic) NSDictionary *finalResultsMap; // @synthesize finalResultsMap=_finalResultsMap;
@property(retain, nonatomic) DVTFilePath *symbolsPath; // @synthesize symbolsPath=_symbolsPath;
@property(retain, nonatomic) NSDictionary *onDemandResourcesAssetPacksZippedPaths; // @synthesize onDemandResourcesAssetPacksZippedPaths=_onDemandResourcesAssetPacksZippedPaths;
@property(retain, nonatomic) NSDictionary *onDemandResourcesAssetPacksOwningBundleForCopy; // @synthesize onDemandResourcesAssetPacksOwningBundleForCopy=_onDemandResourcesAssetPacksOwningBundleForCopy;
@property(retain, nonatomic) Class packagingStep; // @synthesize packagingStep=_packagingStep;
@property(retain, nonatomic) DVTFilePath *destinationRoot; // @synthesize destinationRoot=_destinationRoot;
@property(retain, nonatomic) DVTFilePath *temporaryDirectory; // @synthesize temporaryDirectory=_temporaryDirectory;
- (void).cxx_destruct;
- (id)assetPackManifestFileName:(id)arg1 forVariant:(id)arg2;
- (id)assetPackFileName:(id)arg1 forVariant:(id)arg2;
- (id)packagePathForVariant:(id)arg1;
- (id)destinationPathForItem:(id)arg1 forVariant:(id)arg2;
- (id)destinationPathForItem:(id)arg1;
- (id)destinationRootForVariant:(id)arg1;
- (id)relativeDestinationPathForPipelineOutputAtSourcePath:(id)arg1;
- (void)addPipelineOutputAtRelativePath:(id)arg1 fromSourcePath:(id)arg2;
- (id)initWithParent:(id)arg1 stepClass:(Class)arg2 allowedInputs:(id)arg3 allowedOutputs:(id)arg4;

@end
