//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEPIFGUID : NSObject
{
    NSString *_string;
    unsigned long long _hash;
}

+ (id)newFromStringRepresentation:(id)arg1;
- (void).cxx_destruct;
- (id)description;
@property(readonly) NSString *stringRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)pifGuidByCombiningWithString:(id)arg1;
- (id)initFromStringRepresentation:(id)arg1;

@end

