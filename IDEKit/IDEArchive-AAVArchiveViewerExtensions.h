//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEArchive.h>

@class NSArray, NSImage, NSString;

@interface IDEArchive (AAVArchiveViewerExtensions)
@property(readonly) NSString *aav_identifierLabel;
@property(readonly) NSImage *aav_displayIcon;
@property(readonly) NSArray *aav_displayIcons;
- (id)aav_version;
@property(readonly) NSString *aav_archiveType;
@property(readonly) NSString *aav_humanReadablePlatformName;
@property(readonly) NSString *aav_platformName;
@property(readonly) NSString *aav_bundleIdentifier;
@property(readonly) NSString *aav_displayName;
- (id)aav_appInfoPlist;
@end

