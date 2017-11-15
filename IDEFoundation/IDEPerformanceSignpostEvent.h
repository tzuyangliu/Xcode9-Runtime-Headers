//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEPerformanceSignpostSerializable-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface IDEPerformanceSignpostEvent : NSObject <IDEPerformanceSignpostSerializable>
{
    NSString *_name;
    NSDate *_timestamp;
    NSDictionary *_userInfo;
}

+ (id)firstEventOfName:(id)arg1 fromEvents:(id)arg2;
+ (id)eventsLoadedFromPath:(id)arg1 error:(id *)arg2;
+ (BOOL)saveEvents:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *serializedRepresentation;
- (id)initFromSerialized:(id)arg1;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;
- (id)initWithName:(id)arg1 timestamp:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

