//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEPlaygroundPlatformSupport : NSObject
{
}

+ (id)_sdkForSupportedPlatformExtension:(id)arg1;
+ (id)_supportedPlatformsExtensionPoint;
+ (id)_availableSDKs;
+ (id)legacySDKIdentifierForTargetPlatformIdentifier:(id)arg1;
+ (id)targetPlatformIdentifierForLegacySDKIdentifier:(id)arg1;
+ (id)targetDeviceIdentifierForSDK:(id)arg1;
+ (id)targetPlatformIdentifierForSDK:(id)arg1;
+ (id)sdkForTargetPlatformIdentifier:(id)arg1;
+ (id)targetableSDKSortedByPlatformFamilyName;
+ (id)targetableSDKs;

@end

