/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface PstnInviteRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned sipMedia;
@property(retain, nonatomic) NSString* toUserName;
@property(assign, nonatomic) unsigned inviteId;
@property(assign, nonatomic) unsigned long long timestamp;
@property(assign, nonatomic) int netType;
@property(retain, nonatomic) NSString* toUserPhoneNum;
@property(retain, nonatomic) NSString* fromUserName;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
