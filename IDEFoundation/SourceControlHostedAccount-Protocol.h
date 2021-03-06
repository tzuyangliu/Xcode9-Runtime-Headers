//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/DVTSourceControlAccount-Protocol.h>

@class DVTSourceControlBasicAuthenticationStrategy, DVTSourceControlSSHKeysAuthenticationStrategy, NSString;

@protocol SourceControlHostedAccount <DVTSourceControlAccount>
@property(nonatomic, readonly) NSString *accountTypeDisplayName;
@property(nonatomic, readonly) long long cloneType;
@property(nonatomic, readonly) BOOL onDefaultHost;
@property(nonatomic, readonly) NSString *sshUsername;
@property(nonatomic, readonly) NSString *username;
@property(nonatomic, readonly) NSString *otpKeychainIdentifier;
@property(nonatomic, retain) DVTSourceControlSSHKeysAuthenticationStrategy *sshKeysAuthenticationStrategy;
@property(nonatomic, retain) DVTSourceControlBasicAuthenticationStrategy *basicAuthenticationStrategy;
@end

