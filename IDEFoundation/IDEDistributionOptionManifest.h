//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionOption.h>

@interface IDEDistributionOptionManifest : IDEDistributionOption
{
}

+ (id)propertyListForContext:(id)arg1;
+ (BOOL)wantsAssetPackManifestURLForContext:(id)arg1;
+ (id)availableOptionsForPropertyList;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (BOOL)wantsAssetPackManifestURL;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;

@end
