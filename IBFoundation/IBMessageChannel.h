//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBMessageChannel : NSObject
{
    int _writeFD;
    int _readFD;
    BOOL _shutdown;
}

- (void)shutdown;
- (id)initWithSocket:(int)arg1 error:(id *)arg2;
- (id)initWithWriteDescriptor:(int)arg1 readDescriptor:(int)arg2 error:(id *)arg3;

@end

