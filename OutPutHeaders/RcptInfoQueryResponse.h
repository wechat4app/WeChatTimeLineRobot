/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSString, BaseResponse, RcptInfoList;

@interface RcptInfoQueryResponse : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* appnickname;
@property(assign, nonatomic) unsigned isauthority;
@property(retain, nonatomic) NSString* appusername;
@property(retain, nonatomic) BaseResponse* baseResponse;
@property(assign, nonatomic) unsigned islatest;
@property(retain, nonatomic) RcptInfoList* rcptinfolist;
+(void)initialize;
@end

