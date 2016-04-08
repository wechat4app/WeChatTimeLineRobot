/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "NotifyFromMainCtrlDelegate.h"

@class CMMDB, MMTimer, NSMutableDictionary, NSRecursiveLock;
@protocol UploadVoiceDelegate;

@interface MMNewUploadVoiceMgr : MMObject <NotifyFromMainCtrlDelegate> {
	CMMDB* m_oMMDB;
	NSRecursiveLock* m_oLock;
	MMTimer* m_timerCheck;
	unsigned long m_uiCurUploadID;
	BOOL m_bIsUploading;
	id<UploadVoiceDelegate> m_delNotifyToSender;
	unsigned long m_uiQueueCount;
	BOOL m_bDBError;
	NSMutableDictionary* m_dicMergeResult;
}
@property(assign, nonatomic) __weak id<UploadVoiceDelegate> m_delNotifyToSender;
@property(retain, nonatomic) MMTimer* m_timerCheck;
@property(retain, nonatomic) NSRecursiveLock* m_oLock;
@property(retain, nonatomic) CMMDB* m_oMMDB;
-(void).cxx_destruct;
-(void)HandleUploadVoiceOK:(id)ok;
-(BOOL)IsInUploadQueue:(id)uploadQueue LocalID:(unsigned long)anId Offset:(unsigned long)offset;
-(void)MainThreadNotifyUploadVoiceOK:(id)ok;
-(BOOL)PrepareForUpload:(id)upload packetExpireTime:(BOOL)time;
-(BOOL)PrepareForUploadEx:(id)uploadEx;
-(void)UpdateRetryCount:(id)count;
-(BOOL)loadDataFromAudioFileForExpirePacket:(id)expirePacket;
-(BOOL)loadDataFromAudioFile:(id)audioFile;
-(id)getOneUploadItemFromDB;
-(BOOL)uploadOnePacket;
-(BOOL)startSend;
-(id)getFromUsrNameBytoUsrName:(id)usrNameBytoUsrName;
-(void)CancelUpload:(id)upload LocalID:(unsigned long)anId n64SvrID:(long long)anId3 Offset:(unsigned long)offset Len:(unsigned long)len VoiceTime:(unsigned long)time CreateTime:(unsigned long)time7 EndFlag:(unsigned long)flag CancelFlag:(unsigned long)flag9 VoiceFormat:(unsigned long)format;
-(void)DeleteMsg:(id)msg LocalID:(unsigned long)anId Happen:(unsigned long)happen;
-(BOOL)mergeToDB:(id)db;
-(BOOL)insertNewRowInUploadVoice:(id)uploadVoice;
-(void)NotifyFromMainCtrl:(unsigned long)mainCtrl MessageInfo:(id)info Event:(unsigned long)event;
-(void)ResendVoiceMsg:(id)msg MsgWrap:(id)wrap;
-(void)AddNewPart:(id)part LocalID:(unsigned long)anId n64SvrID:(long long)anId3 Offset:(unsigned long)offset Len:(unsigned long)len VoiceTime:(unsigned long)time CreateTime:(unsigned long)time7 EndFlag:(unsigned long)flag CancelFlag:(unsigned long)flag9 VoiceFormat:(unsigned long)format ForwardFlag:(unsigned long)flag11 msgSource:(id)source;
-(BOOL)ModifyMsgSource:(id)source byToUser:(id)user localId:(unsigned long)anId;
-(void)TimerCheckUploadQueue;
-(void)Stop;
-(void)Start;
-(void)InitUploadMgr:(id)mgr Lock:(id)lock Delegate:(id)delegate;
-(void)dealloc;
-(id)init;
@end
