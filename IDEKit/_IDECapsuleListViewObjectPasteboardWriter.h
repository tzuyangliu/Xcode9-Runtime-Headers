//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSPasteboardWriting-Protocol.h>

@class NSArray, NSString;

@interface _IDECapsuleListViewObjectPasteboardWriter : NSObject <NSPasteboardWriting>
{
    unsigned long long _dragIdx;
    NSArray *_pasteboardTypes;
}

@property(retain) NSArray *pasteboardTypes; // @synthesize pasteboardTypes=_pasteboardTypes;
@property unsigned long long dragIdx; // @synthesize dragIdx=_dragIdx;
- (void).cxx_destruct;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

