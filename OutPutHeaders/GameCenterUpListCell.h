/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMTableViewCell.h"

@class GameCenterUpItem, MMHeadImageView, UILabel;

@interface GameCenterUpListCell : MMTableViewCell {
	MMHeadImageView* _headImgView;
	UILabel* _displayNameLabel;
	UILabel* _timeLabel;
	GameCenterUpItem* _upItem;
}
@property(retain, nonatomic) GameCenterUpItem* upItem;
-(void).cxx_destruct;
-(void)layoutContent;
-(void)reloadData;
-(void)initializeSubview;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

