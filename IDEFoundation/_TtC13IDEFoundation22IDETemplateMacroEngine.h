//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC13IDEFoundation22IDETemplateMacroEngine : NSObject
{
    // Error parsing type: , name: instanceOverrides
    // Error parsing type: , name: dataStoreMacros
    // Error parsing type: , name: compatibilityMacros
    // Error parsing type: , name: standardMacros
    // Error parsing type: , name: customDataStores
    // Error parsing type: , name: modifierMap
    // Error parsing type: , name: uuidTable
    // Error parsing type: , name: specialMacrosMap
}

+ (id)defaultCompatibilityMacros;
+ (id)standardMacrosWithWorkspaceName:(id)arg1 projectName:(id)arg2 packageName:(id)arg3 targetName:(id)arg4 productName:(id)arg5 fileName:(id)arg6 organizationName:(id)arg7;
+ (id)defaultToolchainSwiftVersionMacro;
+ (id)runningMacOSVersionMacro;
+ (id)fileBaseNameAsIdentifierMacro;
+ (id)fileBaseNameMacro;
+ (id)fileNameMacro;
+ (id)productNameMacro;
+ (id)targetNameMacro;
+ (id)packageNameAsIdentifierMacro;
+ (id)packageNameMacro;
+ (id)projectNameMacro;
+ (id)workspaceNameMacro;
+ (id)uuidMacro;
+ (id)yearMacro;
+ (id)timeMacro;
+ (id)dateMacro;
+ (id)fileHeaderMacro;
+ (id)humanReadableCopyrightPlistMacro;
+ (id)copyrightCommentMacro;
+ (id)copyrightMacro;
+ (id)organizationNameMacro;
+ (id)fullUserNameMacro;
+ (id)userNameMacro;
+ (id)macrosFromCustomDataStores:(id)arg1;
+ (id)macrosFromCustomDataStore:(id)arg1;
+ (id)macrosFromCustomDataStore:(id)arg1 with:(id)arg2;
+ (id)templateMacroDefinitionsFilename;
- (CDUnknownBlockType).cxx_destruct;
- (void)resetStandardMacrosWithWorkspaceName:(id)arg1 projectName:(id)arg2 packageName:(id)arg3 targetName:(id)arg4 productName:(id)arg5 fileName:(id)arg6 organizationName:(id)arg7;
-     // Error parsing type: (null), name: objectForKeyedSubscript:
- (BOOL)createFileAt:(id)arg1 substitutingMacrosInFileAt:(id)arg2 leavingUnknownMacros:(BOOL)arg3 error:(id *)arg4;
- (id)substituteMacrosIn:(id)arg1 leavingUnknownMacros:(BOOL)arg2 error:(id *)arg3;
- (id)lookupMacro:(id)arg1;
- (void)addExpansionsFrom:(id)arg1;
- (void)setExpansion:(id)arg1 forMacro:(id)arg2;
- (id)initWithWorkspaceName:(id)arg1 projectName:(id)arg2 packageName:(id)arg3 targetName:(id)arg4 productName:(id)arg5 fileName:(id)arg6 organizationName:(id)arg7 customDataStores:(id)arg8;
- (id)init;

@end

