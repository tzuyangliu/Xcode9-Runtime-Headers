//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DVTFilePath, NSArray, NSString, NSURL;

@protocol IDESourcePackage
@property(readonly) NSArray *packageProducts;
@property(readonly) BOOL isRemotePackage;
@property(readonly) NSString *packageName;
@property(readonly) DVTFilePath *packagePath;
@property(readonly) NSURL *packageURL;
@end
