/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppRecordMessageNodeView.h"
#import "WeChat-Structs.h"

@class UIView;

@interface AppNoteMessageNodeView : AppRecordMessageNodeView {
	UIView* m_maskView;
}
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(id)cutImage:(id)image toFitSize:(CGSize)fitSize;
-(void)updateBkgImage:(BOOL)image;
-(id)getBackgroundImageHL;
-(id)getBackgroundImage;
-(void)updateThumbImage;
-(id)getFirstImgData:(id)data;
-(void)layoutSubviewsInternal;
-(CGSize)sizeForFrame:(CGRect)frame;
@end
