//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionOption.h>

@interface IDEDistributionOptionUploadBitcode : IDEDistributionOption
{
}

+ (id)propertyListForContext:(id)arg1;
+ (id)_platformsRequiringBitcodeWithAppStoreSubmissionConfiguration:(id)arg1 flattenedDistributionItems:(id)arg2 error:(id *)arg3;
+ (id)_distributionItemsWithoutBitcodeForPlatforms:(id)arg1 flattenedDistributionItems:(id)arg2 archive:(id)arg3 withError:(id *)arg4;
+ (id)_platformsWantingBitcodeAskWithAppStoreSubmissionConfiguration:(id)arg1 flattenedDistributionItems:(id)arg2 archive:(id)arg3 error:(id *)arg4;
+ (id)_isAllAppleProvidedContentWithFlattenedDistributionItems:(id)arg1 archive:(id)arg2 error:(id *)arg3;
+ (id)availableOptionsForPropertyList;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (id)distributionItemsWithoutBitcodeForPlatforms:(id)arg1 withError:(id *)arg2;
- (id)platformsWantingBitcodeAskWithError:(id *)arg1;
- (id)isAllAppleProvidedContentWithError:(id *)arg1;
- (BOOL)requiresBitcode;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;
- (id)bitcodeStateWithError:(id *)arg1;

@end
