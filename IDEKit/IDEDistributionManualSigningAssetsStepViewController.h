//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTDelayedInvocation, DVTNotificationToken, DVTStackView_AppKitAutolayout, IDEProvisioningSigningSelectionViewController, IDEProvisioningTeamSelectionViewController, NSArray, NSDictionary, NSMutableSet, NSProgressIndicator;

@interface IDEDistributionManualSigningAssetsStepViewController : IDEDistributionStepViewController
{
    NSMutableSet *signingAssetMapObservers;
    unsigned int currentEvaluatorGeneration;
    DVTNotificationToken *profilesDidChangeToken;
    DVTNotificationToken *certificatesDidChangeToken;
    BOOL _busyEvaluating;
    BOOL _finishedBuildingStack;
    DVTStackView_AppKitAutolayout *_stack;
    NSProgressIndicator *_spinner;
    IDEProvisioningTeamSelectionViewController *_teamViewController;
    IDEProvisioningSigningSelectionViewController *_certificateViewController;
    IDEProvisioningSigningSelectionViewController *_installerCertificateViewController;
    NSArray *_provisionableItems;
    NSDictionary *_itemsToProfileViewControllers;
    NSDictionary *_itemsToIssueViewControllers;
    DVTDelayedInvocation *_evaluationInvocation;
    double _spinnerStartTime;
}

+ (id)keyPathsForValuesAffectingCanGoNext;
@property(nonatomic) double spinnerStartTime; // @synthesize spinnerStartTime=_spinnerStartTime;
@property(nonatomic) BOOL finishedBuildingStack; // @synthesize finishedBuildingStack=_finishedBuildingStack;
@property(nonatomic) BOOL busyEvaluating; // @synthesize busyEvaluating=_busyEvaluating;
@property(retain, nonatomic) DVTDelayedInvocation *evaluationInvocation; // @synthesize evaluationInvocation=_evaluationInvocation;
@property(copy, nonatomic) NSDictionary *itemsToIssueViewControllers; // @synthesize itemsToIssueViewControllers=_itemsToIssueViewControllers;
@property(copy, nonatomic) NSDictionary *itemsToProfileViewControllers; // @synthesize itemsToProfileViewControllers=_itemsToProfileViewControllers;
@property(retain, nonatomic) NSArray *provisionableItems; // @synthesize provisionableItems=_provisionableItems;
@property(retain, nonatomic) IDEProvisioningSigningSelectionViewController *installerCertificateViewController; // @synthesize installerCertificateViewController=_installerCertificateViewController;
@property(retain, nonatomic) IDEProvisioningSigningSelectionViewController *certificateViewController; // @synthesize certificateViewController=_certificateViewController;
@property(retain, nonatomic) IDEProvisioningTeamSelectionViewController *teamViewController; // @synthesize teamViewController=_teamViewController;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain) DVTStackView_AppKitAutolayout *stack; // @synthesize stack=_stack;
- (void).cxx_destruct;
- (id)helpID;
- (id)title;
- (BOOL)canGoNext;
- (void)primitiveInvalidate;
- (void)_updateStack;
- (void)_createViewControllers;
- (void)viewDidLoad;
- (void)evaluate;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;

@end

