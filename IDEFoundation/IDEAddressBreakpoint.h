//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESymbolicBreakpoint.h>

@class NSString;

@interface IDEAddressBreakpoint : IDESymbolicBreakpoint
{
    NSString *_hexAddress;
}

+ (id)_createSymbolNameFromAddress:(id)arg1;
- (void).cxx_destruct;
- (id)displayName;
@property(copy) NSString *hexAddress;
- (id)initWithAddress:(id)arg1;

@end

