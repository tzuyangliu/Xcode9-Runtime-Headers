//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBSnapSet : NSObject
{
    double *_values;
    unsigned char _count;
}

+ (void)initialize;
@property(readonly) unsigned char count; // @synthesize count=_count;
- (id)description;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (double)maxValue;
- (void)setValue:(double)arg1 atIndex:(unsigned char)arg2;
- (double)valueAtIndex:(unsigned char)arg1;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1;

@end

