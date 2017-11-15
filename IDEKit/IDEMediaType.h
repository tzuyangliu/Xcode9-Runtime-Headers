//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface IDEMediaType : NSObject <NSCopying>
{
}

+ (id)sharedInstance;
+ (id)knownMediaTypes;
@property(readonly) NSString *displayName;
@property(readonly) Class mediaResourceClass;
@property(readonly) NSArray *pasteboardTypes;
@property(readonly) NSString *pasteboardType;
- (BOOL)isKindOfMediaType:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMediaType:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

