//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeBasedCommandLineVerb.h>

@interface IDECleanCommandLineVerb : IDESchemeBasedCommandLineVerb
{
}

+ (BOOL)_cleanFolderAtPath:(id)arg1 withDisplayName:(id)arg2 environment:(id)arg3;
+ (id)_overridingValueForProperty:(id)arg1 inOverridingProperties:(id)arg2;
+ (BOOL)requiresScheme;
+ (int)performWithEnvironment:(id)arg1;
+ (int)cleanBuildFolderForWorkspace:(id)arg1 inEnvironment:(id)arg2;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;

@end

