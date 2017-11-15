//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDESourceControlSSHKeyCredentialViewDelegate-Protocol.h>

@class DVTBorderedView, GitHubAccount, IDESourceControlSSHKeyCredentialViewController, NSButtonCell, NSMatrix, NSMutableAttributedString, NSOpenPanel, NSProgressIndicator, NSString, NSTextField, NSView;
@protocol DVTSourceControlCancellable;

@interface IDEAccountPrefsGitHubDetailViewController : IDEViewController <IDESourceControlSSHKeyCredentialViewDelegate>
{
    IDESourceControlSSHKeyCredentialViewController *_sshKeyCredentialViewController;
    NSOpenPanel *_sshKeySelectionOpenPanel;
    id <DVTSourceControlCancellable> _sshKeyValidationOperation;
    id <DVTSourceControlCancellable> _currentAuthValidationOperation;
    NSTextField *_titleLabel;
    NSProgressIndicator *_progressIndicator;
    NSView *_badCredentialsView;
    NSView *_enterpriseView;
    DVTBorderedView *_borderedView;
    NSMutableAttributedString *_sshKey;
    NSView *_sshKeyConfigurationView;
    NSView *_sshKeyConfigurationEnclosingView;
    NSView *_accountDescriptionView;
    NSView *_cloneOptionsView;
    NSTextField *_enterPasswordSubtextView;
    NSMatrix *_cloneOptions;
    NSButtonCell *_httpsButton;
    NSButtonCell *_sshButton;
    NSTextField *_cloneUsingLabel;
}

+ (id)keyPathsForValuesAffectingGitHubAccount;
@property __weak NSTextField *cloneUsingLabel; // @synthesize cloneUsingLabel=_cloneUsingLabel;
@property __weak NSButtonCell *sshButton; // @synthesize sshButton=_sshButton;
@property __weak NSButtonCell *httpsButton; // @synthesize httpsButton=_httpsButton;
@property __weak NSMatrix *cloneOptions; // @synthesize cloneOptions=_cloneOptions;
@property __weak NSTextField *enterPasswordSubtextView; // @synthesize enterPasswordSubtextView=_enterPasswordSubtextView;
@property __weak NSView *cloneOptionsView; // @synthesize cloneOptionsView=_cloneOptionsView;
@property __weak NSView *accountDescriptionView; // @synthesize accountDescriptionView=_accountDescriptionView;
@property __weak NSView *sshKeyConfigurationEnclosingView; // @synthesize sshKeyConfigurationEnclosingView=_sshKeyConfigurationEnclosingView;
@property __weak NSView *sshKeyConfigurationView; // @synthesize sshKeyConfigurationView=_sshKeyConfigurationView;
@property(retain, nonatomic) NSMutableAttributedString *sshKey; // @synthesize sshKey=_sshKey;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak NSView *enterpriseView; // @synthesize enterpriseView=_enterpriseView;
@property __weak NSView *badCredentialsView; // @synthesize badCredentialsView=_badCredentialsView;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)cloneUsingHTTPS:(id)arg1;
- (void)cloneUsingSSH:(id)arg1;
- (id)nibName;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)enterPasswordClick:(id)arg1;
- (void)_validateAccountCredentials;
- (void)updateCloneUsingLabelForAccountType:(long long)arg1;
- (void)_refreshViewForAuth:(BOOL)arg1;
@property(retain, nonatomic) id <DVTSourceControlCancellable> currentAuthValidationOperation; // @synthesize currentAuthValidationOperation=_currentAuthValidationOperation;
@property(readonly, nonatomic) GitHubAccount *gitHubAccount;
- (void)didSetSSHKeyAuthenticationStrategy:(id)arg1 error:(id)arg2;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

