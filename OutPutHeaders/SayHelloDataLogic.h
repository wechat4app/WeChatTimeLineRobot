/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FriendAsistSessionExt.h"
#import "IContactMgrExt.h"
#import "contactVerifyLogicDelegate.h"
#import "MMObject.h"
#import "IAutoSetRemarkExt.h"
#import "ContactsItemViewDelegate.h"

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol SayHelloDataLogicDelegate;

@interface SayHelloDataLogic : MMObject <FriendAsistSessionExt, ContactsItemViewDelegate, contactVerifyLogicDelegate, IAutoSetRemarkExt, IContactMgrExt> {
	unsigned long m_uiScene;
	id<SayHelloDataLogicDelegate> m_delegate;
	NSMutableArray* m_arrHellos;
	NSMutableDictionary* m_dicHellos;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<SayHelloDataLogicDelegate> m_delegate;
+(id)getContactFrom:(id)from;
-(void).cxx_destruct;
-(void)onModifyContact:(id)contact;
-(void)onSetStrangerRemark:(id)remark;
-(void)onFriendAssistStatusChange:(id)change;
-(void)onFriendAssistClearMsg:(id)msg;
-(void)onFriendAssistRelpyMsg:(id)msg;
-(void)onFriendAssistAddMsg:(id)msg;
-(void)onFriendAssistUnreadCountChanged;
-(void)dealloc;
-(id)initWithScene:(unsigned long)scene delegate:(id)delegate;
-(unsigned long)getHelloCount;
-(void)onContactVerifyFillVerifyMsg:(id)msg;
-(void)contactVerifyOk:(id)ok opCode:(unsigned long)code;
-(void)onContactVerifyFail;
-(void)handleAddedContact:(id)contact;
-(void)clearMsg:(unsigned long)msg;
-(void)clearMsg:(unsigned long)msg ForIndex:(unsigned long)index;
-(id)getChatName:(unsigned long)name;
-(void)loadData:(unsigned long)data;
-(id)getContactForIndex:(unsigned long)index;
-(id)getContactForUserName:(id)userName;
-(void)removeArrHello:(id)hello;
@end
