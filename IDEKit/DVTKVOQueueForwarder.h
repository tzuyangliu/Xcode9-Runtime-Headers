//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTCancellableOwner;

@interface DVTKVOQueueForwarder : NSObject
{
    DVTCancellableOwner *_cancellables;
    id _value;
}

@property(readonly) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 queue:(id)arg3;

@end

