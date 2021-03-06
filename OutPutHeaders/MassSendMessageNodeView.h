/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IAudioReceiverExt.h"
#import "WeChat-Structs.h"
#import "LongPressImageViewDelegate.h"
#import "BaseMessageNodeView.h"

@class UIImageView, UILabel, NSMutableArray, MMUILongPressImageView, UIView, NSString, UIButton;

@interface MassSendMessageNodeView : BaseMessageNodeView <LongPressImageViewDelegate, IAudioReceiverExt> {
	NSMutableArray* _arrReceivers;
	MMUILongPressImageView* _bkgImageView;
	UILabel* _receiverLabel;
	UIView* _contentView;
	UIButton* _sendAgainBtn;
	UIImageView* _arrowImageView;
	UIImageView* _upperFrameImageView;
	UIImageView* _lowerFrameImageView;
	BOOL _bShowDetail;
	BOOL _bIsPlaying;
	BOOL _bLayout;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIImageView* lowerFrameImageView;
@property(retain, nonatomic) UIImageView* upperFrameImageView;
@property(retain, nonatomic) UIImageView* arrowImageView;
@property(retain, nonatomic) UIButton* sendAgainBtn;
@property(retain, nonatomic) UIView* contentView;
@property(retain, nonatomic) UILabel* receiverLabel;
@property(retain, nonatomic) MMUILongPressImageView* bkgImageView;
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(void)StopPlaying;
-(void)OnEndPlaying:(unsigned long)playing isForceStop:(BOOL)stop;
-(void)onSendAgain:(id)again;
-(void)onVoiceClicked:(id)clicked;
-(void)onVideoClicked:(id)clicked;
-(void)onImageClicked:(id)clicked;
-(void)OnLongPress:(id)press;
-(void)OnPress:(id)press;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)onClearResource;
-(void)onDisappear;
-(void)updateStatus:(id)status;
-(id)FormVideoView;
-(id)FormVoiceView;
-(float)calculateVoiceTimeLength:(unsigned long)length;
-(id)FormImageView;
-(id)FormTextView;
-(void)layoutSubviewsInternal;
-(void)onOrientationChanged;
-(void)layoutViews;
-(void)createSubviews;
-(CGSize)sizeForFrame:(CGRect)frame;
-(void)initData;
-(void)dealloc;
@end

