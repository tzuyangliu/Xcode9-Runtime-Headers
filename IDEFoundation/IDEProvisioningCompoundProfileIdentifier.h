//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDEProvisioningCompoundProfileIdentifier : NSObject <NSCopying>
{
    NSString *_teamID;
    NSString *_name;
}

+ (id)identifierWithName:(id)arg1 teamID:(id)arg2 profile:(id)arg3 error:(id *)arg4;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithProvisioningProfile:(id)arg1 error:(id *)arg2;
- (id)initWithPortalProfile:(id)arg1 error:(id *)arg2;

@end
