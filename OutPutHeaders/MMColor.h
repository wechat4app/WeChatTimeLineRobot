/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MCssParserDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface MMColor : XXUnknownSuperclass <MCssParserDelegate> {
	NSMutableDictionary* m_colorDictionary;
	BOOL m_isAlreadyParsed;
	BOOL m_isParseOK;
	NSString* m_colorCssPath;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* colorCssPath;
@property(retain, nonatomic) NSMutableDictionary* colorDictionary;
-(void).cxx_destruct;
-(BOOL)loadColorFromPath:(id)path;
-(id)getColorByName:(id)name withAlpha:(float)alpha;
-(id)getColorByName:(id)name;
-(BOOL)startParse;
-(void)onCssParseEnd;
-(void)onCssParseStart;
-(id)onNextCssFile;
-(void)onParseErrorInFile:(id)file onLineNumber:(id)number withText:(id)text withErrorMessage:(id)errorMessage;
-(void)onReceiveCssRulesetWithSelectors:(id)selectors withDeclarations:(id)declarations;
-(void)onScriptFunctionWithSelectors:(id)selectors withStatements:(id)statements;
-(id)init;
-(id)getColorDictionaryObjectForKey:(id)key;
-(void)removeColorDictionaryObjectForKey:(id)key;
-(void)setColorDictionaryObject:(id)object forKey:(id)key;
@end

