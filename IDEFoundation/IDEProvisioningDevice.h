//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningDevice-Protocol.h>

@class NSString;

@interface IDEProvisioningDevice : NSObject <IDEProvisioningDevice>
{
    NSString *_name;
    NSString *_UDID;
    NSString *_deviceClass;
}

@property(readonly) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly) NSString *UDID; // @synthesize UDID=_UDID;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPortalDevice:(id)arg1;
- (id)initWithName:(id)arg1 UDID:(id)arg2 deviceClass:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

