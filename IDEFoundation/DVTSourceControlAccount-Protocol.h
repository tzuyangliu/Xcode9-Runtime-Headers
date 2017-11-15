//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTSourceControlAuthenticationStrategy, NSDictionary, NSString, NSURL;

@protocol DVTSourceControlAccount <NSObject>
- (id)initWithDictionary:(NSDictionary *)arg1;
- (void)setAuthenticationStrategy:(DVTSourceControlAuthenticationStrategy *)arg1 forURL:(NSURL *)arg2;
- (DVTSourceControlAuthenticationStrategy *)authenticationStrategyForURL:(NSURL *)arg1;
- (NSDictionary *)dictionaryRepresentation;
@property(nonatomic) BOOL savingDisabled;
@property(nonatomic, readonly) NSURL *hostURL;
@property(nonatomic, copy) NSString *accountName;
@end

