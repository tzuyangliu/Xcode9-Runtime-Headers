//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDETemplateOption, IDEWorkspace, NSString;

@protocol IDETemplateOptionParent <NSObject>
@property(retain, nonatomic) IDEWorkspace *workspace;
@property(readonly, copy) NSString *identifier;
- (void)valueDidChangeForOption:(IDETemplateOption *)arg1;
@end

