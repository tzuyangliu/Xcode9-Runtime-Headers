//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBLayoutConstant.h>

@interface IBLayoutSymbolicConstant : IBLayoutConstant
{
    BOOL _cachedUnderlyingValueIsValid;
    id _symbolicValue;
}

- (void).cxx_destruct;
- (id)description;
- (id)constantBySettingValueToValue:(double)arg1;
- (void)invalidateEngineEvaluatedUnderlyingValue;
- (void)takeEngineEvaluatedValue:(double)arg1;
- (BOOL)needsEngineToEvaluateValue;
- (Class)classForArchiver;
- (id)symbolicValue;
- (id)shortDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithSymbolicValue:(id)arg1 engineEvaluatedUnderlyingValue:(double)arg2;
- (id)initWithSymbolicValue:(id)arg1 underlyingValue:(double)arg2;

@end

