/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, SKBuiltinString_t, NSString, BaseRequest;

@interface BindQQRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) SKBuiltinBuffer_t* wtloginReqBuff;
@property(retain, nonatomic) NSString* safeDeviceType;
@property(retain, nonatomic) NSString* safeDeviceName;
@property(assign, nonatomic) unsigned setAsMainAcct;
@property(retain, nonatomic) SKBuiltinBuffer_t* ksid;
@property(retain, nonatomic) SKBuiltinString_t* imgEncryptKey;
@property(assign, nonatomic) unsigned opcode;
@property(retain, nonatomic) NSString* imgCode;
@property(retain, nonatomic) NSString* imgSid;
@property(retain, nonatomic) NSString* pwd2;
@property(retain, nonatomic) NSString* pwd;
@property(assign, nonatomic) unsigned qq;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
