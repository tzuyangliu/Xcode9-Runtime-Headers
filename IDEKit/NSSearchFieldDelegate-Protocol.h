//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSTextFieldDelegate-Protocol.h>

@class NSSearchField;

@protocol NSSearchFieldDelegate <NSTextFieldDelegate>

@optional
- (void)searchFieldDidEndSearching:(NSSearchField *)arg1;
- (void)searchFieldDidStartSearching:(NSSearchField *)arg1;
@end

