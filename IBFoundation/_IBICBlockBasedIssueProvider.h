//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBICCatalogItemIssueProvider-Protocol.h>

@class NSString;

@interface _IBICBlockBasedIssueProvider : NSObject <IBICCatalogItemIssueProvider>
{
    CDUnknownBlockType _issueProviderBlock;
}

- (void).cxx_destruct;
- (void)populateIssues:(id)arg1 forCatalogItem:(id)arg2 withContext:(id)arg3;
- (id)initWithIssueProviderBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

