//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSSecureTextField, NSTextField;

@interface _TtC6IDEKit38IDESourceControlSSHKeyWindowController : NSWindowController
{
    // Error parsing type: , name: labelTextField
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: generateButton
    // Error parsing type: , name: passphraseSecureTextField
    // Error parsing type: , name: mode
    // Error parsing type: , name: sshKeyStrategy
    // Error parsing type: , name: error
    // Error parsing type: , name: hostWindow
    // Error parsing type: , name: cancellableOperation
    // Error parsing type: , name: completion
}

- (CDUnknownBlockType).cxx_destruct;
- (void)generateClickWithSender:(id)arg1;
- (void)beginValidateSheetFor:(id)arg1 withSSHKeyStrategy:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginGenerateSheetFor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (void)cancelClickWithSender:(id)arg1;
- (void)loadWindow;
- (id)initWithWindow:(id)arg1;
@property(nonatomic, copy) CDUnknownBlockType completion; // @synthesize completion;
@property(nonatomic) __weak NSSecureTextField *passphraseSecureTextField; // @synthesize passphraseSecureTextField;
@property(nonatomic) __weak NSButton *generateButton; // @synthesize generateButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak NSTextField *labelTextField; // @synthesize labelTextField;

@end

