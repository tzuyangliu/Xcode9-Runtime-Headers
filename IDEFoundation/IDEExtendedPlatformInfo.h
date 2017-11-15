//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface IDEExtendedPlatformInfo : NSObject
{
    NSDictionary *_productTypeIdentifiersToInterfaceBuilderDocumentUTIs;
    BOOL _supportsDeviceSelection;
    BOOL _wantsIntegrityCheckForApplicationCategory;
    BOOL _wantsHiDPIArtworkTargetUpgrade;
    BOOL _canBeJetsamedDuringGPUTracing;
    BOOL _tryOtherArchWhenDesignatedArchFails;
    BOOL _conditionalizeCodeSignIdentityBySDK;
    BOOL _requiresGameCenterDeviceCompatibilityInfoPlistEntry;
    BOOL _onlySupportsAppStoreDeployment;
    BOOL _wantsMapsRoutingOptions;
    BOOL _supportsAppThinning;
    BOOL _supportsLaunchScreenXibs;
    BOOL _supportsCloudDocuments;
    BOOL _appStoreArchivesRequirePreciseSizeEstimate;
    BOOL _distributionShouldCopySwiftSupport;
    BOOL _distributionShouldCopyWatchKitSupport;
    BOOL _allowsRelaxationOfStrictBitcodeAndPlatformChecks;
    BOOL _supportsUIRecording;
    NSString *_appStoreSubmissionConfigurationBitCodeDefaultSupportLevel;
    NSString *_platformIdentifier;
    NSString *_bundleFormatApplicationPathFormatString;
    NSString *_embeddedProvisioningProfileName;
    NSString *_deploymentTargetSettingName;
    NSString *_deploymentTargetClangFlagName;
    NSString *_deploymentTargetClangEnvName;
    NSString *_swiftTargetPrefix;
    NSString *_appStoreNameTitleCase;
    NSArray *_hiDPIArtworkTargetUpgradeProductTypesToExclude;
    NSString *_debuggingPlatformName;
    NSString *_gaugeCPUMeterScale;
    NSString *_conditionalSDKPostfix;
    NSDictionary *_baseEntitlements;
    NSString *_sdkName;
    NSString *_internalSDKName;
    NSString *_addressSanitizerLibraryName;
    NSString *_threadSanitizerLibraryName;
    NSString *_UBSanitizerLibraryName;
    NSString *_appStoreSubmissionConfigurationResponseIdentifier;
    NSString *_appStoreSubmissionConfigurationCompiledCodeDefaultSupportLevel;
    NSString *_appStoreSubmissionConfigurationOnDemandResourcesDefaultSupportLevel;
    NSString *_minimumOSForUITesting;
    Class _testingUIRecorderClass;
}

+ (void)_initializePlatformInfo:(id)arg1 fromExtension:(id)arg2;
+ (id)extendedPlatformInfoForPlatformIdentifier:(id)arg1;
@property(readonly) Class testingUIRecorderClass; // @synthesize testingUIRecorderClass=_testingUIRecorderClass;
@property(readonly) BOOL supportsUIRecording; // @synthesize supportsUIRecording=_supportsUIRecording;
@property(readonly, copy) NSString *minimumOSForUITesting; // @synthesize minimumOSForUITesting=_minimumOSForUITesting;
@property(readonly) BOOL allowsRelaxationOfStrictBitcodeAndPlatformChecks; // @synthesize allowsRelaxationOfStrictBitcodeAndPlatformChecks=_allowsRelaxationOfStrictBitcodeAndPlatformChecks;
@property(readonly) NSString *appStoreSubmissionConfigurationOnDemandResourcesDefaultSupportLevel; // @synthesize appStoreSubmissionConfigurationOnDemandResourcesDefaultSupportLevel=_appStoreSubmissionConfigurationOnDemandResourcesDefaultSupportLevel;
@property(readonly) NSString *appStoreSubmissionConfigurationCompiledCodeDefaultSupportLevel; // @synthesize appStoreSubmissionConfigurationCompiledCodeDefaultSupportLevel=_appStoreSubmissionConfigurationCompiledCodeDefaultSupportLevel;
@property(readonly) NSString *appStoreSubmissionConfigurationResponseIdentifier; // @synthesize appStoreSubmissionConfigurationResponseIdentifier=_appStoreSubmissionConfigurationResponseIdentifier;
@property(readonly) BOOL distributionShouldCopyWatchKitSupport; // @synthesize distributionShouldCopyWatchKitSupport=_distributionShouldCopyWatchKitSupport;
@property(readonly) BOOL distributionShouldCopySwiftSupport; // @synthesize distributionShouldCopySwiftSupport=_distributionShouldCopySwiftSupport;
@property(readonly) BOOL appStoreArchivesRequirePreciseSizeEstimate; // @synthesize appStoreArchivesRequirePreciseSizeEstimate=_appStoreArchivesRequirePreciseSizeEstimate;
@property(readonly) BOOL supportsCloudDocuments; // @synthesize supportsCloudDocuments=_supportsCloudDocuments;
@property(readonly) BOOL supportsLaunchScreenXibs; // @synthesize supportsLaunchScreenXibs=_supportsLaunchScreenXibs;
@property(readonly) NSString *UBSanitizerLibraryName; // @synthesize UBSanitizerLibraryName=_UBSanitizerLibraryName;
@property(readonly) NSString *threadSanitizerLibraryName; // @synthesize threadSanitizerLibraryName=_threadSanitizerLibraryName;
@property(readonly) NSString *addressSanitizerLibraryName; // @synthesize addressSanitizerLibraryName=_addressSanitizerLibraryName;
@property(readonly) BOOL supportsAppThinning; // @synthesize supportsAppThinning=_supportsAppThinning;
@property(readonly) BOOL wantsMapsRoutingOptions; // @synthesize wantsMapsRoutingOptions=_wantsMapsRoutingOptions;
@property(readonly) BOOL onlySupportsAppStoreDeployment; // @synthesize onlySupportsAppStoreDeployment=_onlySupportsAppStoreDeployment;
@property(readonly, copy) NSString *internalSDKName; // @synthesize internalSDKName=_internalSDKName;
@property(readonly, copy) NSString *sdkName; // @synthesize sdkName=_sdkName;
@property(readonly) NSDictionary *baseEntitlements; // @synthesize baseEntitlements=_baseEntitlements;
@property(readonly) BOOL requiresGameCenterDeviceCompatibilityInfoPlistEntry; // @synthesize requiresGameCenterDeviceCompatibilityInfoPlistEntry=_requiresGameCenterDeviceCompatibilityInfoPlistEntry;
@property(readonly) BOOL conditionalizeCodeSignIdentityBySDK; // @synthesize conditionalizeCodeSignIdentityBySDK=_conditionalizeCodeSignIdentityBySDK;
@property(readonly, copy) NSString *conditionalSDKPostfix; // @synthesize conditionalSDKPostfix=_conditionalSDKPostfix;
@property(readonly) BOOL tryOtherArchWhenDesignatedArchFails; // @synthesize tryOtherArchWhenDesignatedArchFails=_tryOtherArchWhenDesignatedArchFails;
@property(readonly) BOOL canBeJetsamedDuringGPUTracing; // @synthesize canBeJetsamedDuringGPUTracing=_canBeJetsamedDuringGPUTracing;
@property(readonly, copy) NSString *gaugeCPUMeterScale; // @synthesize gaugeCPUMeterScale=_gaugeCPUMeterScale;
@property(readonly, copy) NSString *debuggingPlatformName; // @synthesize debuggingPlatformName=_debuggingPlatformName;
@property(readonly, copy) NSArray *hiDPIArtworkTargetUpgradeProductTypesToExclude; // @synthesize hiDPIArtworkTargetUpgradeProductTypesToExclude=_hiDPIArtworkTargetUpgradeProductTypesToExclude;
@property(readonly) BOOL wantsHiDPIArtworkTargetUpgrade; // @synthesize wantsHiDPIArtworkTargetUpgrade=_wantsHiDPIArtworkTargetUpgrade;
@property(readonly, copy) NSString *appStoreNameTitleCase; // @synthesize appStoreNameTitleCase=_appStoreNameTitleCase;
@property(readonly) BOOL wantsIntegrityCheckForApplicationCategory; // @synthesize wantsIntegrityCheckForApplicationCategory=_wantsIntegrityCheckForApplicationCategory;
@property(readonly, copy) NSString *swiftTargetPrefix; // @synthesize swiftTargetPrefix=_swiftTargetPrefix;
@property(readonly, copy) NSString *deploymentTargetClangEnvName; // @synthesize deploymentTargetClangEnvName=_deploymentTargetClangEnvName;
@property(readonly, copy) NSString *deploymentTargetClangFlagName; // @synthesize deploymentTargetClangFlagName=_deploymentTargetClangFlagName;
@property(readonly, copy) NSString *deploymentTargetSettingName; // @synthesize deploymentTargetSettingName=_deploymentTargetSettingName;
@property(readonly) BOOL supportsDeviceSelection; // @synthesize supportsDeviceSelection=_supportsDeviceSelection;
@property(readonly, copy) NSString *embeddedProvisioningProfileName; // @synthesize embeddedProvisioningProfileName=_embeddedProvisioningProfileName;
@property(readonly, copy) NSString *bundleFormatApplicationPathFormatString; // @synthesize bundleFormatApplicationPathFormatString=_bundleFormatApplicationPathFormatString;
@property(readonly, copy) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
- (void).cxx_destruct;
@property(readonly) NSString *appStoreSubmissionConfigurationBitCodeDefaultSupportLevel; // @synthesize appStoreSubmissionConfigurationBitCodeDefaultSupportLevel=_appStoreSubmissionConfigurationBitCodeDefaultSupportLevel;
@property(readonly, copy) NSString *deploymentTargetSettingHumanReadableNameSentenceCase;
@property(readonly, copy) NSString *deploymentTargetSettingHumanReadableNameTitleCase;
- (id)supportedInterfaceBuilderDocumentUTIsForProductType:(id)arg1;

@end

