//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC13IDEFoundation31SourceControlCredentialsManager : NSObject
{
    // Error parsing type: , name: keychain
}

+ (id)defaultManager;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (BOOL)saveBasicCredentialsWithHostURL:(id)arg1 oldUsername:(id)arg2 authenticationStrategy:(id)arg3 error:(id *)arg4;
- (BOOL)deletePasswordFor:(id)arg1 authenticationStrategy:(id)arg2;
- (BOOL)deleteWithAccount:(id)arg1;
- (id)passwordFor:(id)arg1 username:(id)arg2 error:(id *)arg3;
- (id)authenticationStrategyFor:(id)arg1 username:(id)arg2 error:(id *)arg3;
- (id)sshKeyAuthenticationStrategyForSSHKeyURL:(id)arg1 username:(id)arg2 error:(id *)arg3;
- (void)authenticationStrategiesFor:(id)arg1 sshKeyPath:(id)arg2 sshUsername:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)sshKeyPasswordForURL:(id)arg1 error:(id *)arg2;
- (BOOL)savePasswordFor:(id)arg1 oldUsername:(id)arg2 authenticationStrategy:(id)arg3 error:(id *)arg4;
- (BOOL)saveAuthenticationFor:(id)arg1 error:(id *)arg2;
- (id)initWith:(struct OpaqueSecKeychainRef *)arg1;

@end

