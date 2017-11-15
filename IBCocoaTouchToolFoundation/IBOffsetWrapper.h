//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCoding-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IBOffsetWrapper : NSObject <NSCopying, NSCoding, IBBinaryArchiving>
{
    double _horizontal;
    double _vertical;
}

+ (id)offsetWrapperWithOffset:(CDStruct_c3b9c2ee)arg1;
+ (id)zeroOffset;
@property(readonly, copy) NSString *description;
- (CDStruct_c3b9c2ee)offsetValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHorizontal:(double)arg1 vertical:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
