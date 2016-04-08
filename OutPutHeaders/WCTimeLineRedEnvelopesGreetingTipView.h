/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class WCDataItem, UIView, UIImageView, UILabel;
@protocol WCTimeLineGreetingTipViewDelegate;

@interface WCTimeLineRedEnvelopesGreetingTipView : XXUnknownSuperclass {
	UIView* m_backgroundView;
	UIImageView* m_titleImageView;
	UILabel* m_descTitleLable;
	id<WCTimeLineGreetingTipViewDelegate> m_delegate;
	BOOL m_bEndAnmation;
	WCDataItem* m_dataItem;
}
@property(retain, nonatomic) WCDataItem* m_dataItem;
@property(assign, nonatomic) __weak id<WCTimeLineGreetingTipViewDelegate> m_delegate;
-(void).cxx_destruct;
-(void)showGreetingEntry;
-(void)removeView;
-(void)endAnimation;
-(void)removeViewOnly;
-(void)onCloseBtnClicked;
-(void)closeTipView;
-(void)showAnimation;
-(void)OnClickIknow;
-(id)imageFromUIView:(id)uiview;
-(id)dotImageWithColor:(id)color width:(float)width height:(float)height;
-(id)getFontWithSize:(float)size;
-(id)initWithFrame:(CGRect)frame;
@end
