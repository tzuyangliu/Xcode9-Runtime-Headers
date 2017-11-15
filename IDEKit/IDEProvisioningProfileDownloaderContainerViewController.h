//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>
#import <IDEKit/IDEProvisioningProfileDownloaderDelegate-Protocol.h>
#import <IDEKit/IDEProvisioningProfileDownloaderDetailContainerViewControllerDelegate-Protocol.h>

@class DVTReplacementView, IDEProvisioningCompoundProfile, IDEProvisioningProfileDownloader, IDEProvisioningProfileDownloaderContext, NSButton, NSError, NSString, NSTextField;
@protocol IDEProvisioningBasicProfile;

@interface IDEProvisioningProfileDownloaderContainerViewController : IDEViewController <DVTReplacementViewDelegate, IDEProvisioningProfileDownloaderDelegate, IDEProvisioningProfileDownloaderDetailContainerViewControllerDelegate>
{
    BOOL _enableSelectProfileButton;
    IDEProvisioningProfileDownloaderContext *_context;
    IDEProvisioningProfileDownloader *_downloader;
    NSError *_error;
    NSButton *_selectProfileButton;
    DVTReplacementView *_replacementView;
    IDEProvisioningCompoundProfile *_selectedCompoundProfile;
    NSButton *_errorButton;
    NSTextField *_errorTextField;
}

+ (id)keyPathsForValuesAffectingEnableSelectProfileButton;
@property __weak NSTextField *errorTextField; // @synthesize errorTextField=_errorTextField;
@property __weak NSButton *errorButton; // @synthesize errorButton=_errorButton;
@property(retain, nonatomic) IDEProvisioningCompoundProfile *selectedCompoundProfile; // @synthesize selectedCompoundProfile=_selectedCompoundProfile;
@property(nonatomic) BOOL enableSelectProfileButton; // @synthesize enableSelectProfileButton=_enableSelectProfileButton;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak NSButton *selectProfileButton; // @synthesize selectProfileButton=_selectProfileButton;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) IDEProvisioningProfileDownloader *downloader; // @synthesize downloader=_downloader;
@property(retain, nonatomic) IDEProvisioningProfileDownloaderContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)didFinishRefresh;
- (void)didSelectProfile:(id)arg1;
- (void)updateDownloaderView;
- (void)showEmptyContentView;
@property(readonly) NSString *title;
- (void)clickedCancelButton:(id)arg1;
- (void)updateAccountErrors;
- (void)clickedErrorButton:(id)arg1;
- (void)clickedSelectProfileButton:(id)arg1;
@property(readonly) id <IDEProvisioningBasicProfile> profile;
- (void)updateEmptyContentViewWithError:(id)arg1;
- (void)viewDidLoad;
- (id)initWithError:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

