//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IBStackBacktrace : NSObject
{
    NSArray *_addresses;
    NSString *_stringRepresentation;
}

+ (id)stackBacktraceWithCallStackReturnAddresses:(id)arg1;
+ (id)currentStackBacktraceWithMaximumNumberOfFrames:(unsigned long long)arg1;
+ (id)currentStackBacktrace;
- (void).cxx_destruct;
@property(readonly) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
- (id)initWithMaximumNumberOfFrames:(unsigned long long)arg1 ignoringFrames:(unsigned long long)arg2;
- (id)initWithAddresses:(id)arg1;
- (id)init;

@end

