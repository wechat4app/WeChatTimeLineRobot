/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, ECDHKey, NSString, BaseRequest;

@interface NewRegRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* bundleId;
@property(retain, nonatomic) NSString* googleAid;
@property(retain, nonatomic) ECDHKey* cliPubEcdhkey;
@property(retain, nonatomic) NSString* clientFingerprint;
@property(retain, nonatomic) NSString* androidInstallRef;
@property(retain, nonatomic) NSString* macAddr;
@property(retain, nonatomic) NSString* androidId;
@property(retain, nonatomic) NSString* adSource;
@property(retain, nonatomic) NSString* clientSeqId;
@property(assign, nonatomic) unsigned suggestRet;
@property(assign, nonatomic) unsigned hasHeadImg;
@property(retain, nonatomic) NSString* verifyContent;
@property(retain, nonatomic) NSString* verifySignature;
@property(retain, nonatomic) NSString* alias;
@property(retain, nonatomic) SKBuiltinBuffer_t* randomEncryKey;
@property(retain, nonatomic) NSString* realCountry;
@property(assign, nonatomic) unsigned forceReg;
@property(retain, nonatomic) NSString* language;
@property(retain, nonatomic) NSString* timeZone;
@property(assign, nonatomic) unsigned regMode;
@property(assign, nonatomic) unsigned dlsrc;
@property(assign, nonatomic) unsigned builtinIpseq;
@property(retain, nonatomic) NSString* ticket;
@property(retain, nonatomic) NSString* bindMobile;
@property(retain, nonatomic) NSString* bindEmail;
@property(assign, nonatomic) unsigned bindUin;
@property(retain, nonatomic) NSString* nickName;
@property(retain, nonatomic) NSString* pwd;
@property(retain, nonatomic) NSString* userName;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
