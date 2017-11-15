//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEDistributionAppleProvidedContent-Protocol.h>

@class NSString;

@interface IDEDistributionAppleProvidedContentSwiftSupport : NSObject <IDEDistributionAppleProvidedContent>
{
}

+ (BOOL)isSwiftSupport:(id)arg1;
@property(readonly) NSString *packagePath;
@property(readonly) NSString *archivePath;
@property(readonly) NSString *archiveOperationDestinationBuildSettingName;
- (BOOL)shouldCopySidecarContentFromArchive:(id)arg1;
- (BOOL)shouldRemoveForAppStoreDistributionDistributionItem:(id)arg1 shouldRemoveParentDirectory:(char *)arg2;
- (id)isAppleProvidedContent:(id)arg1 archive:(id)arg2 error:(id *)arg3;
- (BOOL)shouldCodeSignDistributionItem:(id)arg1;
@property(readonly) NSString *mainAppStubCopySubpath;

@end
