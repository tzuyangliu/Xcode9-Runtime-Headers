//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogChangeEvent.h>

@class NSString;

@interface IDEActivityLogAppendTextChangeEvent : IDEActivityLogChangeEvent
{
    NSString *_textString;
}

@property(readonly) NSString *textString; // @synthesize textString=_textString;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSection:(id)arg1 textString:(id)arg2;

@end

