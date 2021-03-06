/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface WCOperationSetting : XXUnknownSuperclass <NSCoding> {
	NSMutableDictionary* dicUserBigImageClickedCount;
	NSMutableDictionary* dicUserBigImageAddedCount;
	BOOL needWriteBack;
}
@property(assign, nonatomic) BOOL needWriteBack;
@property(retain, nonatomic) NSMutableDictionary* dicUserBigImageAddedCount;
@property(retain, nonatomic) NSMutableDictionary* dicUserBigImageClickedCount;
-(void).cxx_destruct;
-(void)addNewBigImageCountForUser:(id)user addedCount:(unsigned)count;
-(void)addNewBigImageClickedCountForUser:(id)user clickedCount:(unsigned)count;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)init;
@end

