//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceCodeGenerator.h>

#import <IDEKit/IDEMethodSourceCodeGenerator-Protocol.h>

@interface IDEObjectiveCSourceCodeGenerator : IDESourceCodeGenerator <IDEMethodSourceCodeGenerator>
{
}

+ (BOOL)isTeardownCounterpart:(id)arg1;
+ (id)allTeardownCounterparts;
+ (id)teardownMethodNameForCounterpart:(id)arg1;
- (id)prepareToAddClassMethodWithName:(id)arg1 inClassNamed:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)prepareToAddInstanceMethodWithName:(id)arg1 inClassNamed:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)primitiveAddMethodWithName:(id)arg1 inClassNamed:(id)arg2 options:(id)arg3 instanceMethod:(BOOL)arg4 error:(id *)arg5;
- (id)prepareToAddPropertyWithName:(id)arg1 type:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)prepareToAddInstanceVariableWithName:(id)arg1 type:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)effectiveOptionsForTeardownCounterpart:(id)arg1 originalOptions:(id)arg2;
- (CDUnknownBlockType)documentLocationForCounterpartBlockForClassSymbol:(id)arg1 options:(id)arg2;
- (BOOL)isInsertionLocationForCounterpart:(id)arg1 equivalentToInsertionLocationForRepresentativeCounterpart:(id)arg2;
- (id)inferInstanceVariableNameFromSurroundings:(id)arg1 classSymbol:(id)arg2;
- (BOOL)preferUnderbarPrefixForInferredInstanceVariableNames;
- (id)generateSourceCodeForCategoryDeclarationForClassNamed:(id)arg1 categoryName:(id)arg2 options:(id)arg3;
- (id)generateSourceCodeForCategoryDefinitionForClassNamed:(id)arg1 categoryName:(id)arg2 options:(id)arg3;
- (id)generateSourceCodeForPropertySetterWithName:(id)arg1 options:(id)arg2;
- (id)generateSourceCodeForPropertyGetterWithName:(id)arg1 options:(id)arg2;
- (id)generateSourceCodeForPropertyAtSynthesizeWithName:(id)arg1 options:(id)arg2;
- (id)generateSourceCodeForPropertyDeclarationWithName:(id)arg1 type:(id)arg2 options:(id)arg3;
- (id)generateSourceCodeForMessageSendWithOptions:(id)arg1;
- (id)generateSourceCodeForInstanceVariableDeclarationWithName:(id)arg1 type:(id)arg2 options:(id)arg3;
- (id)generateSourceCodeForClassMethodDefinitionWithName:(id)arg1 options:(id)arg2;
- (id)generateSourceCodeForClassMethodDeclarationWithName:(id)arg1 options:(id)arg2;
- (id)generateSourceCodeForInstanceMethodDefinitionWithName:(id)arg1 options:(id)arg2;
- (id)generateSourceCodeForInstanceMethodDeclarationWithName:(id)arg1 options:(id)arg2;
- (id)baseSourceCodeForMethodDeclaratorWithName:(id)arg1 options:(id)arg2;
- (id)typeString:(id)arg1 concatenatedWithNameString:(id)arg2;
- (id)generatedLanguage;

@end

