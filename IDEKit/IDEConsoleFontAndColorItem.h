//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEFontAndColorItem-Protocol.h>

@class NSString;

@interface IDEConsoleFontAndColorItem : NSObject <IDEFontAndColorItem>
{
    NSString *_colorPropertyName;
    NSString *_fontPropertyName;
    NSString *_displayName;
}

- (void).cxx_destruct;
- (void)setFont:(id)arg1 forTheme:(id)arg2;
- (void)setColor:(id)arg1 forTheme:(id)arg2;
- (id)fontForTheme:(id)arg1;
- (id)colorForTheme:(id)arg1;
- (id)displayName;
- (id)initWithColorPropertyName:(id)arg1 fontPropertyName:(id)arg2 displayName:(id)arg3;

@end

