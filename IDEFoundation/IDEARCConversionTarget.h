//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEMigrationTarget.h>

@class NSString;

@interface IDEARCConversionTarget : IDEMigrationTarget
{
    BOOL _fileOveridesARCSetting;
    NSString *_displayName;
}

@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) BOOL fileOveridesARCSetting; // @synthesize fileOveridesARCSetting=_fileOveridesARCSetting;
- (void).cxx_destruct;
- (void)updateBuildSettings;
- (void)disableOverridingBuildSettings;
- (void)enableOverridingBuildSettings;
@property BOOL convertsToARC;
- (BOOL)shouldMigrate;
- (id)warningMessage;
@property(readonly) BOOL buildsWithARC;
@property(readonly) BOOL canConvertToUseARC;
@property(readonly, nonatomic) NSString *blueprintProviderName;
- (id)initWithBlueprint:(id)arg1 migrationContext:(id)arg2;

@end

