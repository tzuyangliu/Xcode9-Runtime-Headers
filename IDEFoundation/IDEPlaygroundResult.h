//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEPlaygroundResult : NSObject
{
    NSString *_channelIdentifier;
    NSString *_subjectIdentifier;
}

@property(readonly, copy) NSString *subjectIdentifier; // @synthesize subjectIdentifier=_subjectIdentifier;
@property(readonly, copy) NSString *channelIdentifier; // @synthesize channelIdentifier=_channelIdentifier;
- (void).cxx_destruct;
- (id)initWithChannelIdentifier:(id)arg1 subjectIdentifier:(id)arg2;

@end

