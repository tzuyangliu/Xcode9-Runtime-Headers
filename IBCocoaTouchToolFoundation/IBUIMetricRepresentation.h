//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>

@class NSDictionary, NSString;

@interface IBUIMetricRepresentation : NSObject <IBBinaryArchiving>
{
    NSDictionary *_keyValues;
}

@property(readonly, copy) NSDictionary *keyValues; // @synthesize keyValues=_keyValues;
- (void).cxx_destruct;
- (void)applyToObject:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithKeyValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

