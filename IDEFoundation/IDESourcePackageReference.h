//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDESourcePackageRequirement, NSURL;

@interface IDESourcePackageReference : NSObject
{
    NSURL *_packageURL;
    IDESourcePackageRequirement *_requirement;
}

@property(readonly) IDESourcePackageRequirement *requirement; // @synthesize requirement=_requirement;
@property(readonly) NSURL *packageURL; // @synthesize packageURL=_packageURL;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithURL:(id)arg1 requirement:(id)arg2;

@end

