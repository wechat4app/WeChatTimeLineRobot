/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinString_t, NSMutableArray, BaseRequest;

@interface VoipSpeedResultReq : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSMutableArray* result;
@property(assign, nonatomic) unsigned resultCnt;
@property(assign, nonatomic) unsigned roomId;
@property(assign, nonatomic) double latitude;
@property(assign, nonatomic) double longitude;
@property(retain, nonatomic) SKBuiltinString_t* wifiName;
@property(retain, nonatomic) SKBuiltinString_t* netName;
@property(assign, nonatomic) unsigned netType;
@property(assign, nonatomic) unsigned long long roomKey;
@property(assign, nonatomic) unsigned long long testId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

