/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface WCADQuestionItem : MMObject {
	NSString* itemId;
	NSString* wording;
	unsigned long actionType;
}
@property(assign, nonatomic) unsigned long actionType;
@property(retain, nonatomic) NSString* wording;
@property(retain, nonatomic) NSString* itemId;
-(void).cxx_destruct;
@end
