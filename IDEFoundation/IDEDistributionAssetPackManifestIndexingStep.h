//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionItemProcessingStep.h>

@interface IDEDistributionAssetPackManifestIndexingStep : IDEDistributionItemProcessingStep
{
}

+ (_Bool)processDistributionItem:(id)arg1 context:(id)arg2 error:(id *)arg3;
+ (void)addAssetPackBundleKey:(id)arg1 toDistributionItem:(id)arg2 inContext:(id)arg3;
- (_Bool)runWithError:(id *)arg1;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (id)name;

@end

