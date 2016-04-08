/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "IVoiceTransExt.h"
#import "MMObject.h"

@class MMTimer, CMessageWrap, NSString, WebviewLocalResItem;
@protocol VoiceTransDelegate;

@interface VoiceTransHelper : MMObject <IVoiceTransExt, PBMessageObserverDelegate> {
	CMessageWrap* m_msgWrap;
	NSString* m_nsVoiceID;
	unsigned long m_uNotifyId;
	unsigned long m_iCurVoiceResultSeq;
	WebviewLocalResItem* m_webViewItem;
	unsigned long m_uiScene;
	NSString* m_nsVoicePath;
	NSString* m_nsVoiceTransPath;
	unsigned long m_uNetGetInterval;
	BOOL m_bNeedGetResult;
	BOOL m_bIsGetting;
	unsigned long m_uTotalLen;
	unsigned long m_uStartPos;
	unsigned long m_uDataLen;
	unsigned long m_uUploadFailTimes;
	unsigned long m_uSampleRateForSilk;
	MMTimer* m_getTimer;
	id<VoiceTransDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<VoiceTransDelegate> m_delegate;
-(void).cxx_destruct;
-(void)OnVoiceTransNotify:(unsigned long)notify Sequence:(unsigned long)sequence;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)saveVoiceTrans:(id)trans;
-(void)HandleGetVoiceTransResp:(id)resp Event:(unsigned long)event;
-(void)GetVoiceTrans;
-(void)TimeToGetVoieceTrans;
-(void)startGetTimer;
-(void)HandleUploadVoiceResp:(id)resp Event:(unsigned long)event;
-(void)UploadVoice;
-(void)HandleCheckVoiceResp:(id)resp Event:(unsigned long)event;
-(void)doCheckVoice;
-(void)stopVoiceTrans;
-(void)stopTimer;
-(void)startVoiceTrans;
-(void)startWebviewVoiceTrans;
-(id)initWithWebviewLocalResItem:(id)webviewLocalResItem VoiceID:(id)anId;
-(id)initWithVoiceMsg:(id)voiceMsg VoiceID:(id)anId;
-(void)dealloc;
@end
