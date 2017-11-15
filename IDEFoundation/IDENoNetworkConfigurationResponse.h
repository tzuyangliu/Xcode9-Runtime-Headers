//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/ITunesSoftwareServiceConfigurationResponse-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface IDENoNetworkConfigurationResponse : NSObject <ITunesSoftwareServiceConfigurationResponse>
{
    BOOL _isSuccessful;
    BOOL _isCancelled;
    NSDictionary *_configuration;
    NSString *_alertMessage;
    NSArray *_errors;
    NSArray *_warnings;
    NSArray *_infoMessages;
}

@property(readonly) NSArray *infoMessages; // @synthesize infoMessages=_infoMessages;
@property(readonly) NSArray *warnings; // @synthesize warnings=_warnings;
@property(readonly) NSArray *errors; // @synthesize errors=_errors;
@property(readonly) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(readonly) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(readonly) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly) BOOL isSuccessful; // @synthesize isSuccessful=_isSuccessful;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

